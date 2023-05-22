#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;

ref class Read_channel_func
{
public:
	void update_table(Generic::List<String^>^ channel, DataGridView^ data_table);

	void read_from_channel(Generic::List<String^>^ channel, int index, int dlina_read);
};

