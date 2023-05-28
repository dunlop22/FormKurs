#pragma once
#include "Actions.h"
using namespace System;
using namespace System::Collections;
ref class Proccess
{
private:
	Generic::List<Actions^>^ Actions_ = gcnew Generic::List<Actions^>();
public:
	void new_act_r(int num_pipes, int simb);
	void new_act_w(int num_pipes, String^ info);
	void new_act_rw(int num_pipes_r, int simb, int num_pipes_w);
	int get_num_action();		//запроса дейстивя (чтение / запись / перезапись)
	Actions^ get_actions();
	bool del_act();
	bool get_rez();
	int get_num_actions();	//запрос количества действий
};

