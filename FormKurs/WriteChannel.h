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
		WriteChannel()
		//WriteChannel(MainForm^ f_Main)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			//Generic::List<String^>^ Channels_old = f_Main->Channels;
		}

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NumberChannel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataChannel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_information = (gcnew System::Windows::Forms::Label());
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
			// 
			// DataChannel
			// 
			this->DataChannel->HeaderText = L"Данные канала";
			this->DataChannel->Name = L"DataChannel";
			this->DataChannel->ReadOnly = true;
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
			// WriteChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 698);
			this->Controls->Add(this->label_information);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"WriteChannel";
			this->Text = L"WriteChannel";
			this->Load += gcnew System::EventHandler(this, &WriteChannel::WriteChannel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void WriteChannel_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	};
}
