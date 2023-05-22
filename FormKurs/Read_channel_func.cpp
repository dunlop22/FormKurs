#include "Read_channel_func.h"

void Read_channel_func::update_table(Generic::List<String^>^ channel, DataGridView^ data_table)
{
	int	krug = data_table->RowCount;
	for (int i = 0; i < channel->Count;i++)
	{
		if (krug < channel->Count)
		{
			data_table->Rows->Add();		//добавление строки для значения коллекции
			krug++;
		}

		data_table->Rows[i]->Cells[0]->Value = i + 1;
		data_table->Rows[i]->Cells[1]->Value = channel[i];
	}

}

void Read_channel_func::read_from_channel(Generic::List<String^>^ channel, int index, int dlina_read)
{
	


}
