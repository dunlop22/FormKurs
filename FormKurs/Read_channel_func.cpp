#include "Read_channel_func.h"
void Read_channel_func::update_table(Generic::List<Pipes^>^ Pipes_, DataGridView^ data_table)
{
	int	krug = data_table->RowCount;
	for (int i = 0; i < Pipes_->Count;i++)
	{
		if (krug < Pipes_->Count)
		{
			data_table->Rows->Add();		//добавление строки для значения коллекции
			krug++;
		}

		data_table->Rows[i]->Cells[0]->Value = i + 1;
		data_table->Rows[i]->Cells[1]->Value = Pipes_[i]->p_read();
	}

}
