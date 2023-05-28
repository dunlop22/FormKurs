#pragma once
#include "Actions.h"
#include "Pipes.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
ref class Commands
{
public:
	//разблокировка канала и очистка предыдущего действия через pop front();
	//void ()

	bool Read_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func);
	bool Write_Commands(Actions^ act, Generic::List<Pipes^>^ Pipes_, TextBox^ rez_log, int func);
	
};

