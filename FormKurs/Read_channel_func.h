#pragma once
#include "Pipes.h"
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
	void update_table(Generic::List<Pipes^>^ Pipes_, DataGridView^ data_table);
};

