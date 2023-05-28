#pragma once
#include "Read_channel_func.h"
#include "Pipes.h"
namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для ReadChannel
	/// </summary>
	public ref class ReadChannel : public System::Windows::Forms::Form
	{
	public:
		
		ReadChannel(Generic::List<Pipes^>^ Pipes_)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Pipes_old = Pipes_;
		}
	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ReadChannel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_information;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number_Channel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateChannel;
	private: System::Windows::Forms::Label^ label_channel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox_num_simbol;
	private: System::Windows::Forms::Label^ label_num_simbol;
	private: System::Windows::Forms::Button^ button_start_read;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			this->Number_Channel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateChannel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_information = (gcnew System::Windows::Forms::Label());
			this->label_channel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox_num_simbol = (gcnew System::Windows::Forms::TextBox());
			this->label_num_simbol = (gcnew System::Windows::Forms::Label());
			this->button_start_read = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Number_Channel,
					this->DateChannel
			});
			this->dataGridView1->Location = System::Drawing::Point(158, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(466, 272);
			this->dataGridView1->TabIndex = 0;
			// 
			// Number_Channel
			// 
			this->Number_Channel->HeaderText = L"Номер канала";
			this->Number_Channel->Name = L"Number_Channel";
			this->Number_Channel->ReadOnly = true;
			this->Number_Channel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Number_Channel->Width = 77;
			// 
			// DateChannel
			// 
			this->DateChannel->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->DateChannel->HeaderText = L"Данные канала";
			this->DateChannel->Name = L"DateChannel";
			this->DateChannel->ReadOnly = true;
			this->DateChannel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->DateChannel->Width = 84;
			// 
			// label_information
			// 
			this->label_information->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_information->Location = System::Drawing::Point(0, 0);
			this->label_information->Name = L"label_information";
			this->label_information->Size = System::Drawing::Size(844, 60);
			this->label_information->TabIndex = 1;
			this->label_information->Text = L"Выберите канал для чтения с помощью указателя мыши";
			this->label_information->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_channel
			// 
			this->label_channel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_channel->Location = System::Drawing::Point(0, 60);
			this->label_channel->Name = L"label_channel";
			this->label_channel->Size = System::Drawing::Size(844, 597);
			this->label_channel->TabIndex = 2;
			this->label_channel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_channel->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ReadChannel::timer1_Tick);
			// 
			// textBox_num_simbol
			// 
			this->textBox_num_simbol->Location = System::Drawing::Point(340, 432);
			this->textBox_num_simbol->Name = L"textBox_num_simbol";
			this->textBox_num_simbol->Size = System::Drawing::Size(100, 20);
			this->textBox_num_simbol->TabIndex = 3;
			this->textBox_num_simbol->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ReadChannel::textBox_num_simbol_KeyPress);
			// 
			// label_num_simbol
			// 
			this->label_num_simbol->AutoSize = true;
			this->label_num_simbol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_num_simbol->Location = System::Drawing::Point(186, 394);
			this->label_num_simbol->Name = L"label_num_simbol";
			this->label_num_simbol->Size = System::Drawing::Size(422, 20);
			this->label_num_simbol->TabIndex = 4;
			this->label_num_simbol->Text = L"Введите количество символов для чтения из канала:";
			// 
			// button_start_read
			// 
			this->button_start_read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_start_read->Location = System::Drawing::Point(316, 505);
			this->button_start_read->Name = L"button_start_read";
			this->button_start_read->Size = System::Drawing::Size(146, 43);
			this->button_start_read->TabIndex = 5;
			this->button_start_read->Text = L"START READ";
			this->button_start_read->UseVisualStyleBackColor = true;
			this->button_start_read->Click += gcnew System::EventHandler(this, &ReadChannel::button_start_read_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &ReadChannel::timer2_Tick);
			// 
			// ReadChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 657);
			this->Controls->Add(this->button_start_read);
			this->Controls->Add(this->label_num_simbol);
			this->Controls->Add(this->textBox_num_simbol);
			this->Controls->Add(this->label_channel);
			this->Controls->Add(this->label_information);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ReadChannel";
			this->Text = L"ReadChannel";
			this->Load += gcnew System::EventHandler(this, &ReadChannel::ReadChannel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		Generic::List<Pipes^>^ Pipes_old;
		//Generic::List<String^>^ Channels_old;
		int num_simbol;		//количество символов для чтения
		int krug = 0;
		String^ str_channel;
		int y = 0;
		Read_channel_func^ func_read;

#pragma endregion
	private: System::Void ReadChannel_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Pipes_old->Count > 0)
		{
			this->timer2->Interval = 500;		//установка времени для таймера
			this->timer2->Enabled = true;		//включение таймера
		}
		else
		{
			//появление сообщения с соответствующим текстом
			MessageBox::Show(L"Для просмотра информации в канале необходимо создать канал.", L"Не найден ни один канал для чтения", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		func_read = gcnew Read_channel_func();
	}

		//таймер для вывода данных из канала
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (y < num_simbol)
		{
			this->label_channel->Text = this->label_channel->Text + str_channel[y];
			y++;
		}
		else
		{
			this->timer1->Enabled = false;		//выключение таймера
			this->label_channel->Text = this->label_channel->Text + "\n\nЧтение канала окончено";
		}
	}

	   //таймер обновления данных в таблице
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		func_read->update_table(Pipes_old, this->dataGridView1);		//заполнение таблицы значениями
	}

private: System::Void button_start_read_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Pipes_old->Count > 0)
	{
		if (this->textBox_num_simbol->Text != "")		//проверка на заполненность поля ввода объема потока чтения
		{
			this->button_start_read->Visible = false;		//скрытие кнопки
			int num_channel = dataGridView1->CurrentRow->Index;		//узнать номер выбранного канала (0, 1, 2, ...)

			this->dataGridView1->Visible = false;	//скрытие таблицы
			this->label_num_simbol->Visible = false;	//скрытие label
			this->textBox_num_simbol->Visible = false;	//скрытие ввода числа

			this->label_channel->Visible = true;	//показ верхнего поля информации

			str_channel = Pipes_old[num_channel]->p_read();		//значение канала

			if (Convert::ToInt32(this->textBox_num_simbol->Text) >= str_channel->Length)
			{
				num_simbol = str_channel->Length;
				//this->textBox_num_simbol->Text = str_channel->Length.ToString();		//установка в поле максимальной длины выбранного канала
			}
			else
			{
				num_simbol = Convert::ToInt32(this->textBox_num_simbol->Text);	//установка количества символов для чтения канала
			}

			//обрезка канала
			Pipes_old[num_channel]->p_write(Pipes_old[num_channel]->p_read()->Substring(num_simbol, str_channel->Length - num_simbol));
			//Pipes_old[num_channel] = Pipes_old[num_channel]->Substring(num_simbol, str_channel->Length - num_simbol);

			this->label_information->Text = "Номер канала: " + (num_channel + 1).ToString() + "\nКоличество символов для чтения: " + num_simbol + "\n\nЧтение выбранного канала";
			//вывод информации из канала

			this->timer1->Interval = 500;		//установка времени для таймера
			this->timer1->Enabled = true;		//включение таймера
		}
		else
		{
			//Введите количество символов для чтения из канала
		}
	}
	else
	{
		//нет каналов для чтения
		//появление небольшого информирующего окна?
	}
	
}

	   //разрешить ввод в поле только цифр (игнорировать буквы и иные символы)
private: System::Void textBox_num_simbol_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8) {
		e->Handled = true;
		return;
	}

	/*
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9')))
	{
		e->Handled = true;
	}
	else
	{
		this->button_start_read->Text = (e->KeyChar).ToString();
	}
	*/
	/*
	else if (e->KeyChar == (char)8)
	{
		e->Handled = false;
	}
	if (e->KeyChar == (char)Keys->Back)
	{
		e->Handled = false;
	}
	*/
}

};
}
