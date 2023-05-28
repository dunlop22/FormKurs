#include "Actions.h"

Actions::Actions()
{
    this->rez_done = false;
    this->info = "";
}

void Actions::act_read(int num_pipes, int simb)
{
    this->num_action = 0;
    this->num_pipes_read = num_pipes;
    this->num_simbol = simb;
}

void Actions::act_write(int num_pipes, String^ info)
{
    this->num_action = 1;
    this->num_pipes_write = num_pipes;
    this->info = info;
}

void Actions::act_rewrite(int num_pipes_r, int simb, int num_pipes_w)
{
    this->num_action = 2;
    this->num_pipes_read = num_pipes_r;
    this->num_simbol = simb;
    this->num_pipes_write = num_pipes_w;    
}

int Actions::get_num_actions()
{
    return num_action;
}

int Actions::get_num_pipes_read()
{
    return this->num_pipes_read;
}

int Actions::get_num_simb()
{
    return this->num_simbol;
}

int Actions::get_num_pipes_write()
{
    return this->num_pipes_write;
}

void Actions::set_info(String^ info)
{
    this->info = info;
}

String^ Actions::get_text()
{
    return this->info;
}

bool Actions::get_rez_done()    //выполнение операции
{
    return this->rez_done;
}

void Actions::set_rez_done(bool rez)
{
    this->rez_done = rez;
}
