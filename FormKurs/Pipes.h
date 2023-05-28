#pragma once
//#include <string>
using namespace System;
ref class Pipes
{
	
private: 

	int ID;				//индивидуальный номер канала (автоматическая порядковая генерация)
	String^ text;		//содержимое канала
	bool block;			//флажок блокировки канала

public:
	Pipes(int ident);
	String^ p_read();		//чтение из канала
	void p_write(String^ info);		//запись в канал
	bool popen();		//попытка получения доступа к каналу
	void pclose();		//освобождение канала (разблокировка)
	bool check_block();
	

};

