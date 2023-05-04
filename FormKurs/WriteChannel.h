#pragma once

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
		WriteChannel(Generic::List<String^>^ Channels, Generic::List<int>^ state)
		//WriteChannel(MainForm^ f_Main)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			//F_main = f_Main;
			//Generic::List<String^>^ Channels_old = f_Main->Channels;
			Channels_old = Channels;
			state_old = state;
		}
	private: System::Windows::Forms::Button^ button_edit_channel;
	private: System::Windows::Forms::TextBox^ textBox_channel;
	private: System::Windows::Forms::Button^ button_save;
	public:
		//Generic::List<String^>^ Channels_old = gcnew Generic::List<String^>();
		Generic::List<String^>^ Channels_old = gcnew Generic::List<String^>();
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button_save_exit;
	public:

	public:
	public:
		Generic::List<int>^ state_old;

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
			this->dataGridView1->Location = System::Drawing::Point(193, 162);
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
			this->label_information->Text = L"Выберите канал для редактирования двойным щелчком мыши";
			this->label_information->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_edit_channel
			// 
			this->button_edit_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_edit_channel->Location = System::Drawing::Point(369, 506);
			this->button_edit_channel->Name = L"button_edit_channel";
			this->button_edit_channel->Size = System::Drawing::Size(135, 47);
			this->button_edit_channel->TabIndex = 2;
			this->button_edit_channel->Text = L"EDIT";
			this->button_edit_channel->UseVisualStyleBackColor = true;
			this->button_edit_channel->Click += gcnew System::EventHandler(this, &WriteChannel::button_edit_channel_Click);
			// 
			// textBox_channel
			// 
			this->textBox_channel->Location = System::Drawing::Point(193, 444);
			this->textBox_channel->Name = L"textBox_channel";
			this->textBox_channel->Size = System::Drawing::Size(469, 20);
			this->textBox_channel->TabIndex = 3;
			this->textBox_channel->Visible = false;
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_save->Location = System::Drawing::Point(369, 559);
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
			this->button_save_exit->Location = System::Drawing::Point(369, 620);
			this->button_save_exit->Name = L"button_save_exit";
			this->button_save_exit->Size = System::Drawing::Size(135, 43);
			this->button_save_exit->TabIndex = 5;
			this->button_save_exit->Text = L"SAVE and EXIT";
			this->button_save_exit->UseVisualStyleBackColor = true;
			this->button_save_exit->Visible = false;
			this->button_save_exit->Click += gcnew System::EventHandler(this, &WriteChannel::button_save_exit_Click);
			// 
			// WriteChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 698);
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
		int num_channel;
		int krug = 0;
	private: System::Void WriteChannel_Load(System::Object^ sender, System::EventArgs^ e) {
		//заполнение таблицы каналами (если канал уже открыт на запись, то данный канал не выводится в общий список (при этом номера идут с учетом открытых каналов)
		//отмечать открытый канал на редатирование выделить ярким цветом??
		//заполнение таблицы значениями
		/*
		for (int i = 0;i < Channels_old->Count;i++)
		{
			this->dataGridView1->Rows->Add();		//добавление строки для значения коллекции
			this->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
			this->dataGridView1->Rows[i]->Cells[1]->Value = Channels_old[i];
		}
		*/


		if (Channels_old->Count > 0)
		{
			this->timer1->Interval = 500;		//установка времени для таймера
			this->timer1->Enabled = true;		//включение таймера
		}
		else
		{
			//появление формы с соответствующим уведомлением?
		}


	}
	private: System::Void button_edit_channel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (state_old[dataGridView1->CurrentRow->Index] != 1)
		{
			this->dataGridView1->Visible = false;
			this->button_edit_channel->Visible = false;

			//открытие text с записью данных в канал
			this->textBox_channel->Visible = true;
			this->button_save->Visible = true;
			this->button_save_exit->Visible = true;

			num_channel = dataGridView1->CurrentRow->Index;		//узнать номер выбранного канала (0, 1, 2, ...)
			this->state_old[num_channel] = 1;
			this->textBox_channel->Text = Channels_old[num_channel];
		}
	}

	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		Channels_old[num_channel] = this->textBox_channel->Text;
	}

		   //таймер обновления данных каналов
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//заполнение таблицы значениями
	for (int i = 0;i < Channels_old->Count;i++)
	{
		if (krug < Channels_old->Count)
		{
			this->dataGridView1->Rows->Add();		//добавление строки для значения коллекции
		}
		krug++;
		this->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
		this->dataGridView1->Rows[i]->Cells[1]->Value = Channels_old[i];
		if (state_old[i] == 1)
		{
			this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Red;
		}
		else
		{
			this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::White;
		}

	}
	krug = Channels_old->Count;
}
private: System::Void button_save_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Channels_old[num_channel] = this->textBox_channel->Text;
	this->state_old[num_channel] = 0;
	this->Close();
}
};
}
