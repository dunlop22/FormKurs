#include "Commands.h"

bool Commands::Read_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func)
{
    if (!Pipes_[act->get_num_pipes_read()]->check_block())  //проверка блокировки канала
    {
		Pipes_[act->get_num_pipes_read()]->popen();		//открытие канала и блокировка
		int lenght_read;
		//установка количества символов для чтения
		if (((Pipes_[act->get_num_pipes_read()]->p_read())->Length) >= act->get_num_simb())
		{
			lenght_read = act->get_num_simb();
		}
		else
		{
			lenght_read = ((Pipes_[act->get_num_pipes_read()]->p_read())->Length);
		}
		String^ temp_str = (Pipes_[act->get_num_pipes_read()]->p_read());
		temp_str = temp_str->Substring(0, lenght_read);		//обрезка читаемого материала
		rez_log->Text = rez_log->Text + "Чтение из канала №: " + (act->get_num_pipes_read() + 1) + " - Успешно";
		rez_log->Text = rez_log->Text + "\r\nДанные из канала: " + temp_str;
		//обрезка канала
		Pipes_[act->get_num_pipes_read()]->p_write(Pipes_[act->get_num_pipes_read()]->p_read()->Substring(lenght_read, ((Pipes_[act->get_num_pipes_read()]->p_read())->Length) - lenght_read));
		rez_log->Text = rez_log->Text + "\r\nКанал после операции: " + (Pipes_[act->get_num_pipes_read()]->p_read()) + "\r\n";	//вывод остатка в pipes
		act->set_rez_done(true);
		if (func != 0)
		{
			rez_log->Text = rez_log->Text + "Данные успешно помещены в буффер\r\n";
			act->set_rez_done(false);
			act->set_info(temp_str);
		}
		rez_log->Text = rez_log->Text + "\r\n";
        return true;
		
    }
    else     //канал заблокирован
    {
		act->set_rez_done(false);
		rez_log->Text = rez_log->Text + "Чтение из канала №: " + (act->get_num_pipes_read() + 1) + " - Неудачно, канал заблокирован.\r\n\r\n";
        return false;
    }
}

bool Commands::Write_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func)
{
	if (!Pipes_[act->get_num_pipes_write()]->check_block() || func == 1)  //проверка блокировки канала
	{
		Pipes_[act->get_num_pipes_write()]->popen();		//открытие канала и блокировка

		rez_log->Text = rez_log->Text + "Запись в канал №: " + (act->get_num_pipes_write() + 1) + " - Успешно";
		rez_log->Text = rez_log->Text + "\r\nНовые данные в канале: " + act->get_text();
		Pipes_[act->get_num_pipes_write()]->p_write(Pipes_[act->get_num_pipes_write()]->p_read() + act->get_text());		//изменение данных в канале
		rez_log->Text = rez_log->Text + "\r\nКанал после операции: " + Pipes_[act->get_num_pipes_write()]->p_read() + "\r\n\r\n";
		act->set_rez_done(true);

		return true;
		
	}
	else
	{
		act->set_rez_done(false);
		rez_log->Text = rez_log->Text + "Запись в канал №: " + (act->get_num_pipes_write() + 1) + " - Неудачно, канал заблокирован.\r\n\r\n";
		return false;
	}
}
