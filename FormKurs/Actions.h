#pragma once
using namespace System;
ref class Actions
{
protected:
	int num_action;
	int num_pipes_read;
	int num_simbol;
	int num_pipes_write;
	String^ info;

	bool rez_done;

public:
	Actions();
	void act_read(int num_pipes, int simb);
	void act_write(int num_pipes, String^ info);
	void act_rewrite(int num_pipes_r, int simb, int num_pipes_w);
	int get_num_actions();
	int get_num_pipes_read();
	int get_num_simb();
	int get_num_pipes_write();
	void set_info(String^ info);
	String^ get_text();
	bool get_rez_done();
	void set_rez_done(bool rez);
	
	//[0] - ����� ��������
		//0 - ������ �� ������
		//1 - ������ � �����
		//2 - ������ �� ������ � ������ � �����	(�������������)
	//[1] - ����� ��������� ������ ��� ������
	//[2] - ���������� �������� ��� ������
	//[3] - �������� ����� (��� ������ � ����� � �������������)
	//[4] - ������ ��� ������ � �����
};

