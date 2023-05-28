#include "Pipes.h"

Pipes::Pipes(int ident)
{
    this->ID = ident;
    this->text = "";

    this->block = false;  //канал доступен для операции
}

String^ Pipes::p_read()
{
    return this->text;
}

void Pipes::p_write(String^ info)
{
    this->text = info;
}


bool Pipes::popen()
{
    //попытка открытия канала //получение доступа к каналу
    if (this->block == false)
    {
        this->block = true;        //заблокировать канал
        return true;        //канал успешно открыт
    }
    return false;
}

void Pipes::pclose()     //освобождение канала (разблокировка)
{
    this->block = false;    //разблокировать канал
}

bool Pipes::check_block()
{
    return( this->block );
}


