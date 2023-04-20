#pragma once

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
		ReadChannel(Generic::List<String^>^ Channels)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Channels_old = Channels;
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
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &ReadChannel::dataGridView1_DoubleClick);
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
			this->label_information->Text = L"Выберите канал для чтения двойным щелчком мыши";
			this->label_information->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_channel
			// 
			this->label_channel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_channel->Location = System::Drawing::Point(0, 60);
			this->label_channel->Name = L"label_channel";
			this->label_channel->Size = System::Drawing::Size(844, 455);
			this->label_channel->TabIndex = 2;
			this->label_channel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_channel->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ReadChannel::timer1_Tick);
			// 
			// ReadChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 515);
			this->Controls->Add(this->label_channel);
			this->Controls->Add(this->label_information);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ReadChannel";
			this->Text = L"ReadChannel";
			this->Load += gcnew System::EventHandler(this, &ReadChannel::ReadChannel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
	private:
		Generic::List<String^>^ Channels_old;
#pragma endregion
	private: System::Void ReadChannel_Load(System::Object^ sender, System::EventArgs^ e) {

		//заполнение таблицы значениями
		for (int i = 0;i < Channels_old->Count;i++)
		{
			this->dataGridView1->Rows->Add();		//добавление строки для значения коллекции
			this->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
			this->dataGridView1->Rows[i]->Cells[1]->Value = Channels_old[i];
		}

	}

	private:
		String^ str_channel;
		int y = 0;

	private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		int num_channel = dataGridView1->CurrentRow->Index;		//узнать номер выбранного канала (0, 1, 2, ...)

		//this->label1->Text = i.ToString();
		
		this->dataGridView1->Visible = false;	//скрытие таблицы
		this->label_information->Text = "Номер канала: " + (num_channel + 1).ToString() + "\nЧтение выбранного канала";
		this->label_channel->Visible = true;
		//this->label_information->Visible = false;

		//вывод информации из канала
		str_channel = Channels_old[num_channel];


		this->timer1->Interval = 500;		//установка времени для таймера
		this->timer1->Enabled = true;		//включение таймера
		

	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (y < str_channel->Length)
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
};
}
