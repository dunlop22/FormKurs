#include "Commands.h"

bool Commands::Read_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func)
{
    if (!Pipes_[act->get_num_pipes_read()]->check_block())  //�������� ���������� ������
    {
		Pipes_[act->get_num_pipes_read()]->popen();		//�������� ������ � ����������
		int lenght_read;
		//��������� ���������� �������� ��� ������
		if (((Pipes_[act->get_num_pipes_read()]->p_read())->Length) >= act->get_num_simb())
		{
			lenght_read = act->get_num_simb();
		}
		else
		{
			lenght_read = ((Pipes_[act->get_num_pipes_read()]->p_read())->Length);
		}
		String^ temp_str = (Pipes_[act->get_num_pipes_read()]->p_read());
		temp_str = temp_str->Substring(0, lenght_read);		//������� ��������� ���������
		rez_log->Text = rez_log->Text + "������ �� ������ �: " + (act->get_num_pipes_read() + 1) + " - �������";
		rez_log->Text = rez_log->Text + "\r\n������ �� ������: " + temp_str;
		//������� ������
		Pipes_[act->get_num_pipes_read()]->p_write(Pipes_[act->get_num_pipes_read()]->p_read()->Substring(lenght_read, ((Pipes_[act->get_num_pipes_read()]->p_read())->Length) - lenght_read));
		rez_log->Text = rez_log->Text + "\r\n����� ����� ��������: " + (Pipes_[act->get_num_pipes_read()]->p_read()) + "\r\n";	//����� ������� � pipes
		act->set_rez_done(true);
		if (func != 0)
		{
			rez_log->Text = rez_log->Text + "������ ������� �������� � ������\r\n";
			act->set_rez_done(false);
			act->set_info(temp_str);
		}
		rez_log->Text = rez_log->Text + "\r\n";
        return true;
		
    }
    else     //����� ������������
    {
		act->set_rez_done(false);
		rez_log->Text = rez_log->Text + "������ �� ������ �: " + (act->get_num_pipes_read() + 1) + " - ��������, ����� ������������.\r\n\r\n";
        return false;
    }
}

bool Commands::Write_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func)
{
	if (!Pipes_[act->get_num_pipes_write()]->check_block() || func == 1)  //�������� ���������� ������
	{
		Pipes_[act->get_num_pipes_write()]->popen();		//�������� ������ � ����������

		rez_log->Text = rez_log->Text + "������ � ����� �: " + (act->get_num_pipes_write() + 1) + " - �������";
		rez_log->Text = rez_log->Text + "\r\n����� ������ � ������: " + act->get_text();
		Pipes_[act->get_num_pipes_write()]->p_write(Pipes_[act->get_num_pipes_write()]->p_read() + act->get_text());		//��������� ������ � ������
		rez_log->Text = rez_log->Text + "\r\n����� ����� ��������: " + Pipes_[act->get_num_pipes_write()]->p_read() + "\r\n\r\n";
		act->set_rez_done(true);

		return true;
		
	}
	else
	{
		act->set_rez_done(false);
		rez_log->Text = rez_log->Text + "������ � ����� �: " + (act->get_num_pipes_write() + 1) + " - ��������, ����� ������������.\r\n\r\n";
		return false;
	}
}
