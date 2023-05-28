#pragma once
//#include <string>
using namespace System;
ref class Pipes
{
	
private: 

	int ID;				//�������������� ����� ������ (�������������� ���������� ���������)
	String^ text;		//���������� ������
	bool block;			//������ ���������� ������

public:
	Pipes(int ident);
	String^ p_read();		//������ �� ������
	void p_write(String^ info);		//������ � �����
	bool popen();		//������� ��������� ������� � ������
	void pclose();		//������������ ������ (�������������)
	bool check_block();
	

};

