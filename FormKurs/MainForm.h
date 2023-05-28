#pragma once
#include "NewChannel.h"
#include "ReadChannel.h"
#include "WriteChannel.h"
#include "Group_Proc.h"
#include <string>
#include "Pipes.h"

namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_information;
	protected:
	private: System::Windows::Forms::Button^ button_new_channel;
	private: System::Windows::Forms::Label^ label_new_channel;
	private: System::Windows::Forms::Label^ label_open_read;
	private: System::Windows::Forms::Label^ label_new_write;
	private: System::Windows::Forms::Button^ button_read_channel;
	private: System::Windows::Forms::Button^ button_write_channel;
	private: System::Windows::Forms::Button^ button_create_group_proc;
	private: System::Windows::Forms::Label^ label_create_group_proc;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_information = (gcnew System::Windows::Forms::Label());
			this->button_new_channel = (gcnew System::Windows::Forms::Button());
			this->label_new_channel = (gcnew System::Windows::Forms::Label());
			this->label_open_read = (gcnew System::Windows::Forms::Label());
			this->label_new_write = (gcnew System::Windows::Forms::Label());
			this->button_read_channel = (gcnew System::Windows::Forms::Button());
			this->button_write_channel = (gcnew System::Windows::Forms::Button());
			this->button_create_group_proc = (gcnew System::Windows::Forms::Button());
			this->label_create_group_proc = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_information
			// 
			this->label_information->AutoSize = true;
			this->label_information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_information->Location = System::Drawing::Point(150, 47);
			this->label_information->Name = L"label_information";
			this->label_information->Size = System::Drawing::Size(741, 20);
			this->label_information->TabIndex = 0;
			this->label_information->Text = L"Моделирование механизма межпроцессового взаимодействия на основе именованных кана"
				L"лов";
			// 
			// button_new_channel
			// 
			this->button_new_channel->Location = System::Drawing::Point(489, 191);
			this->button_new_channel->Name = L"button_new_channel";
			this->button_new_channel->Size = System::Drawing::Size(75, 23);
			this->button_new_channel->TabIndex = 1;
			this->button_new_channel->Text = L"PRESS";
			this->button_new_channel->UseVisualStyleBackColor = true;
			this->button_new_channel->Click += gcnew System::EventHandler(this, &MainForm::button_new_channel_Click);
			// 
			// label_new_channel
			// 
			this->label_new_channel->AutoSize = true;
			this->label_new_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_channel->Location = System::Drawing::Point(208, 191);
			this->label_new_channel->Name = L"label_new_channel";
			this->label_new_channel->Size = System::Drawing::Size(198, 20);
			this->label_new_channel->TabIndex = 2;
			this->label_new_channel->Text = L"Создание нового канала";
			// 
			// label_open_read
			// 
			this->label_open_read->AutoSize = true;
			this->label_open_read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_open_read->Location = System::Drawing::Point(208, 263);
			this->label_open_read->Name = L"label_open_read";
			this->label_open_read->Size = System::Drawing::Size(223, 20);
			this->label_open_read->TabIndex = 3;
			this->label_open_read->Text = L"Открытие канала на чтение";
			// 
			// label_new_write
			// 
			this->label_new_write->AutoSize = true;
			this->label_new_write->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_write->Location = System::Drawing::Point(208, 333);
			this->label_new_write->Name = L"label_new_write";
			this->label_new_write->Size = System::Drawing::Size(221, 20);
			this->label_new_write->TabIndex = 4;
			this->label_new_write->Text = L"Открытие канала на запись";
			// 
			// button_read_channel
			// 
			this->button_read_channel->Location = System::Drawing::Point(489, 263);
			this->button_read_channel->Name = L"button_read_channel";
			this->button_read_channel->Size = System::Drawing::Size(75, 23);
			this->button_read_channel->TabIndex = 5;
			this->button_read_channel->Text = L"PRESS";
			this->button_read_channel->UseVisualStyleBackColor = true;
			this->button_read_channel->Click += gcnew System::EventHandler(this, &MainForm::button_read_channel_Click);
			// 
			// button_write_channel
			// 
			this->button_write_channel->Location = System::Drawing::Point(489, 333);
			this->button_write_channel->Name = L"button_write_channel";
			this->button_write_channel->Size = System::Drawing::Size(75, 23);
			this->button_write_channel->TabIndex = 6;
			this->button_write_channel->Text = L"PRESS";
			this->button_write_channel->UseVisualStyleBackColor = true;
			this->button_write_channel->Click += gcnew System::EventHandler(this, &MainForm::button_write_channel_Click);
			// 
			// button_create_group_proc
			// 
			this->button_create_group_proc->Location = System::Drawing::Point(489, 446);
			this->button_create_group_proc->Name = L"button_create_group_proc";
			this->button_create_group_proc->Size = System::Drawing::Size(75, 23);
			this->button_create_group_proc->TabIndex = 7;
			this->button_create_group_proc->Text = L"PRESS";
			this->button_create_group_proc->UseVisualStyleBackColor = true;
			this->button_create_group_proc->Click += gcnew System::EventHandler(this, &MainForm::button_create_group_proc_Click);
			// 
			// label_create_group_proc
			// 
			this->label_create_group_proc->AutoSize = true;
			this->label_create_group_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_create_group_proc->Location = System::Drawing::Point(208, 446);
			this->label_create_group_proc->Name = L"label_create_group_proc";
			this->label_create_group_proc->Size = System::Drawing::Size(210, 20);
			this->label_create_group_proc->TabIndex = 8;
			this->label_create_group_proc->Text = L"Создать группу процессов";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 670);
			this->Controls->Add(this->label_create_group_proc);
			this->Controls->Add(this->button_create_group_proc);
			this->Controls->Add(this->button_write_channel);
			this->Controls->Add(this->button_read_channel);
			this->Controls->Add(this->label_new_write);
			this->Controls->Add(this->label_open_read);
			this->Controls->Add(this->label_new_channel);
			this->Controls->Add(this->button_new_channel);
			this->Controls->Add(this->label_information);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		//Generic::List<String^>^ Channels = gcnew Generic::List<String^>();
		//Generic::List<int>^ state = gcnew Generic::List<int>();
		String^ temp_inf;
		Generic::List<Pipes^>^ Pipes_ = gcnew Generic::List<Pipes^>();
		int num_pipe = 0;
#pragma endregion
	private: System::Void button_new_channel_Click(System::Object^ sender, System::EventArgs^ e) {

		NewChannel^ f_nc = gcnew NewChannel();
		f_nc->ShowDialog();
		temp_inf = f_nc->textBox1->Text;		//содрежимое канала для записи
		Pipes^ pipe_temp = gcnew Pipes(num_pipe);
		if (f_nc->rez == true)
		{
			if (!(pipe_temp->check_block()))
			{
				pipe_temp->p_write(temp_inf);
			}
			else
			{
				MessageBox::Show(L"Запись в канал невозможна.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		num_pipe = num_pipe + 1;
		Pipes_->Add(pipe_temp);
	}

		//чтение из канала
	private: System::Void button_read_channel_Click(System::Object^ sender, System::EventArgs^ e) {
		ReadChannel^ f_rc = gcnew ReadChannel(Pipes_);
		f_rc->Show();

	}

	    //создание нового канала
	private: System::Void button_write_channel_Click(System::Object^ sender, System::EventArgs^ e) {
		WriteChannel^ f_wc = gcnew WriteChannel(Pipes_);
		f_wc->Show();
	}


	   //создание группы процессов
	private: System::Void button_create_group_proc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Pipes_->Count > 0)
		{
			Group_Proc^ f_gp = gcnew Group_Proc(Pipes_);
			f_gp->ShowDialog();
		}
		else
		{
			MessageBox::Show(L"Для моделирования межпроцессового взаимодействия необходимо создать канал хотя бы один канал.", L"Не найден ни один канал", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		
	}
};
}
