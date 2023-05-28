#pragma once
#include "Read_channel_func.h"
#include "Pipes.h"
//#include <msclr/marshal_cppstd.h>
namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WriteChannel
	/// </summary>
	public ref class WriteChannel : public System::Windows::Forms::Form
	{
	public:
		WriteChannel(Generic::List<Pipes^>^ Pipes_)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Pipes_old = Pipes_;
		}
	private: System::Windows::Forms::Button^ button_edit_channel;
	private: System::Windows::Forms::TextBox^ textBox_channel;
	private: System::Windows::Forms::Button^ button_save;
	
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label_new_info_for_channel;
	private: System::Windows::Forms::Label^ label_current_info;
	private: System::Windows::Forms::Label^ current_info_in_channel;
	private: System::Windows::Forms::Button^ button_save_exit;
	public:
		//MainForm^ F_main;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WriteChannel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberChannel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataChannel;
	private: System::Windows::Forms::Label^ label_information;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NumberChannel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataChannel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_information = (gcnew System::Windows::Forms::Label());
			this->button_edit_channel = (gcnew System::Windows::Forms::Button());
			this->textBox_channel = (gcnew System::Windows::Forms::TextBox());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_save_exit = (gcnew System::Windows::Forms::Button());
			this->label_new_info_for_channel = (gcnew System::Windows::Forms::Label());
			this->label_current_info = (gcnew System::Windows::Forms::Label());
			this->current_info_in_channel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->NumberChannel,
					this->DataChannel
			});
			this->dataGridView1->Location = System::Drawing::Point(245, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(463, 221);
			this->dataGridView1->TabIndex = 0;
			// 
			// NumberChannel
			// 
			this->NumberChannel->HeaderText = L"Номер канала";
			this->NumberChannel->Name = L"NumberChannel";
			this->NumberChannel->ReadOnly = true;
			this->NumberChannel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// DataChannel
			// 
			this->DataChannel->HeaderText = L"Данные канала";
			this->DataChannel->Name = L"DataChannel";
			this->DataChannel->ReadOnly = true;
			this->DataChannel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// label_information
			// 
			this->label_information->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_information->Location = System::Drawing::Point(0, 0);
			this->label_information->Name = L"label_information";
			this->label_information->Size = System::Drawing::Size(1040, 67);
			this->label_information->TabIndex = 1;
			this->label_information->Text = L"Выберите канал для редактирования";
			this->label_information->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_edit_channel
			// 
			this->button_edit_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_edit_channel->Location = System::Drawing::Point(421, 502);
			this->button_edit_channel->Name = L"button_edit_channel";
			this->button_edit_channel->Size = System::Drawing::Size(135, 47);
			this->button_edit_channel->TabIndex = 2;
			this->button_edit_channel->Text = L"EDIT";
			this->button_edit_channel->UseVisualStyleBackColor = true;
			this->button_edit_channel->Click += gcnew System::EventHandler(this, &WriteChannel::button_edit_channel_Click);
			// 
			// textBox_channel
			// 
			this->textBox_channel->Location = System::Drawing::Point(245, 440);
			this->textBox_channel->Name = L"textBox_channel";
			this->textBox_channel->Size = System::Drawing::Size(469, 20);
			this->textBox_channel->TabIndex = 3;
			this->textBox_channel->Visible = false;
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_save->Location = System::Drawing::Point(421, 555);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(135, 43);
			this->button_save->TabIndex = 4;
			this->button_save->Text = L"SAVE";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Visible = false;
			this->button_save->Click += gcnew System::EventHandler(this, &WriteChannel::button_save_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &WriteChannel::timer1_Tick);
			// 
			// button_save_exit
			// 
			this->button_save_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_save_exit->Location = System::Drawing::Point(421, 616);
			this->button_save_exit->Name = L"button_save_exit";
			this->button_save_exit->Size = System::Drawing::Size(135, 43);
			this->button_save_exit->TabIndex = 5;
			this->button_save_exit->Text = L"SAVE and EXIT";
			this->button_save_exit->UseVisualStyleBackColor = true;
			this->button_save_exit->Visible = false;
			this->button_save_exit->Click += gcnew System::EventHandler(this, &WriteChannel::button_save_exit_Click);
			// 
			// label_new_info_for_channel
			// 
			this->label_new_info_for_channel->AutoSize = true;
			this->label_new_info_for_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_info_for_channel->Location = System::Drawing::Point(272, 407);
			this->label_new_info_for_channel->Name = L"label_new_info_for_channel";
			this->label_new_info_for_channel->Size = System::Drawing::Size(416, 20);
			this->label_new_info_for_channel->TabIndex = 6;
			this->label_new_info_for_channel->Text = L"Информация, которую необходимо записать в канал:";
			this->label_new_info_for_channel->Visible = false;
			// 
			// label_current_info
			// 
			this->label_current_info->AutoSize = true;
			this->label_current_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_current_info->Location = System::Drawing::Point(327, 304);
			this->label_current_info->Name = L"label_current_info";
			this->label_current_info->Size = System::Drawing::Size(250, 20);
			this->label_current_info->TabIndex = 7;
			this->label_current_info->Text = L"Текущая информация в канале:";
			this->label_current_info->Visible = false;
			// 
			// current_info_in_channel
			// 
			this->current_info_in_channel->AutoSize = true;
			this->current_info_in_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->current_info_in_channel->Location = System::Drawing::Point(327, 340);
			this->current_info_in_channel->Name = L"current_info_in_channel";
			this->current_info_in_channel->Size = System::Drawing::Size(51, 20);
			this->current_info_in_channel->TabIndex = 8;
			this->current_info_in_channel->Text = L"label3";
			this->current_info_in_channel->Visible = false;
			// 
			// WriteChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 698);
			this->Controls->Add(this->current_info_in_channel);
			this->Controls->Add(this->label_current_info);
			this->Controls->Add(this->label_new_info_for_channel);
			this->Controls->Add(this->button_save_exit);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->textBox_channel);
			this->Controls->Add(this->button_edit_channel);
			this->Controls->Add(this->label_information);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"WriteChannel";
			this->Text = L"WriteChannel";
			this->Load += gcnew System::EventHandler(this, &WriteChannel::WriteChannel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Generic::List<Pipes^>^ Pipes_old;
		int num_channel;					//номер выбранного канала из списка
		Read_channel_func^ func_read;		//заполнение таблицы по таймеру
	private: System::Void WriteChannel_Load(System::Object^ sender, System::EventArgs^ e) {
		func_read = gcnew Read_channel_func();

		if (Pipes_old->Count > 0)		//если есть хоть один канал, то вывести информацию о нем в таблицу (запустить таймер)
		{
			this->timer1->Interval = 500;		//установка времени для таймера
			this->timer1->Enabled = true;		//включение таймера
		}
		else
		{
			//появление уведомления с соответствующим текстом
			MessageBox::Show(L"Для редактирования информации в канале необходимо создать канал.", L"Не найден ни один канал для редактирования", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}


	}
	private: System::Void button_edit_channel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Pipes_old[dataGridView1->CurrentRow->Index]->popen())
		{
			this->dataGridView1->Visible = false;
			this->button_edit_channel->Visible = false;

			//открытие text с записью данных в канал
			this->textBox_channel->Visible = true;
			this->button_save->Visible = true;
			this->button_save_exit->Visible = true;
			this->label_current_info->Visible = true;
			this->label_new_info_for_channel->Visible = true;
			this->label_information->Visible = true;

			num_channel = dataGridView1->CurrentRow->Index;		//узнать номер выбранного канала (0, 1, 2, ...)
			this->label_current_info->Text = Pipes_old[dataGridView1->CurrentRow->Index]->p_read();
//			this->textBox_channel->Text = Pipes_old[dataGridView1->CurrentRow->Index]->p_read();
		}
	}

	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		Pipes_old[num_channel]->p_write(Pipes_old[dataGridView1->CurrentRow->Index]->p_read() + textBox_channel->Text);
		this->label_current_info->Text = Pipes_old[dataGridView1->CurrentRow->Index]->p_read();
		this->textBox_channel->Text = "";
	}

		   //таймер обновления данных каналов
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//заполнение таблицы значениями
	func_read->update_table(Pipes_old, this->dataGridView1);		//заполнение таблицы значениями
	for (int i = 0;i < Pipes_old->Count;i++)
	{
		
		if (Pipes_old[i]->check_block())
		{
			this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Red;
		}
		else
		{
			this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::White;
		}
	}
}

private: System::Void button_save_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Pipes_old[num_channel]->p_write(Pipes_old[dataGridView1->CurrentRow->Index]->p_read() + textBox_channel->Text);
	Pipes_old[num_channel]->pclose();	//освобождение канала
	this->Close();
}
};
}
