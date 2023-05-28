#include "Proccess.h"

void Proccess::new_act_r(int num_pipes, int simb)
{
	Actions^ act_temp = gcnew Actions();
	act_temp->act_read(num_pipes, simb);
	this->Actions_->Add(act_temp);
}

void Proccess::new_act_w(int num_pipes, String^ info)
{
	Actions^ act_temp = gcnew Actions();
	act_temp->act_write(num_pipes, info);
	this->Actions_->Add(act_temp);
}

void Proccess::new_act_rw(int num_pipes_r, int simb, int num_pipes_w)
{
	Actions^ act_temp = gcnew Actions();
	act_temp->act_rewrite(num_pipes_r, simb, num_pipes_w);
	this->Actions_->Add(act_temp);
}

int Proccess::get_num_action()
{
	if (this->Actions_->Count > 0)
	{
		return (this->Actions_[0]->get_num_actions());
	}
	else
	{
		return -10;
	}
}

Actions^ Proccess::get_actions()
{
	if (this->Actions_->Count > 0)
	{
		return (this->Actions_[0]);
	}

}

bool Proccess::del_act()
{
	if (this->Actions_->Count > 0)
	{
		Actions_->Remove(Actions_[0]);
		return true;
	}
	return false;
}

bool Proccess::get_rez()
{
	return this->Actions_[0]->get_rez_done();
}

int Proccess::get_num_actions()
{
	return this->Actions_->Count;
}

