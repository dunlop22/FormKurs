#include "Pipes.h"

Pipes::Pipes(int ident)
{
    this->ID = ident;
    this->text = "";

    this->block = false;  //����� �������� ��� ��������
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
    //������� �������� ������ //��������� ������� � ������
    if (this->block == false)
    {
        this->block = true;        //������������� �����
        return true;        //����� ������� ������
    }
    return false;
}

void Pipes::pclose()     //������������ ������ (�������������)
{
    this->block = false;    //�������������� �����
}

bool Pipes::check_block()
{
    return( this->block );
}


