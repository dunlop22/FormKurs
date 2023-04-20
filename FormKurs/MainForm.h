#pragma once

namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^ button_write_channe;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_information = (gcnew System::Windows::Forms::Label());
			this->button_new_channel = (gcnew System::Windows::Forms::Button());
			this->label_new_channel = (gcnew System::Windows::Forms::Label());
			this->label_open_read = (gcnew System::Windows::Forms::Label());
			this->label_new_write = (gcnew System::Windows::Forms::Label());
			this->button_read_channel = (gcnew System::Windows::Forms::Button());
			this->button_write_channe = (gcnew System::Windows::Forms::Button());
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
			this->label_information->Text = L"������������� ��������� ��������������� �������������� �� ������ ����������� ����"
				L"���";
			// 
			// button_new_channel
			// 
			this->button_new_channel->Location = System::Drawing::Point(489, 191);
			this->button_new_channel->Name = L"button_new_channel";
			this->button_new_channel->Size = System::Drawing::Size(75, 23);
			this->button_new_channel->TabIndex = 1;
			this->button_new_channel->Text = L"PRESS";
			this->button_new_channel->UseVisualStyleBackColor = true;
			// 
			// label_new_channel
			// 
			this->label_new_channel->AutoSize = true;
			this->label_new_channel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_channel->Location = System::Drawing::Point(208, 191);
			this->label_new_channel->Name = L"label_new_channel";
			this->label_new_channel->Size = System::Drawing::Size(198, 20);
			this->label_new_channel->TabIndex = 2;
			this->label_new_channel->Text = L"�������� ������ ������";
			// 
			// label_open_read
			// 
			this->label_open_read->AutoSize = true;
			this->label_open_read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_open_read->Location = System::Drawing::Point(208, 263);
			this->label_open_read->Name = L"label_open_read";
			this->label_open_read->Size = System::Drawing::Size(223, 20);
			this->label_open_read->TabIndex = 3;
			this->label_open_read->Text = L"�������� ������ �� ������";
			// 
			// label_new_write
			// 
			this->label_new_write->AutoSize = true;
			this->label_new_write->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_write->Location = System::Drawing::Point(208, 333);
			this->label_new_write->Name = L"label_new_write";
			this->label_new_write->Size = System::Drawing::Size(221, 20);
			this->label_new_write->TabIndex = 4;
			this->label_new_write->Text = L"�������� ������ �� ������";
			// 
			// button_read_channel
			// 
			this->button_read_channel->Location = System::Drawing::Point(489, 263);
			this->button_read_channel->Name = L"button_read_channel";
			this->button_read_channel->Size = System::Drawing::Size(75, 23);
			this->button_read_channel->TabIndex = 5;
			this->button_read_channel->Text = L"PRESS";
			this->button_read_channel->UseVisualStyleBackColor = true;
			// 
			// button_write_channe
			// 
			this->button_write_channe->Location = System::Drawing::Point(489, 333);
			this->button_write_channe->Name = L"button_write_channe";
			this->button_write_channe->Size = System::Drawing::Size(75, 23);
			this->button_write_channe->TabIndex = 6;
			this->button_write_channe->Text = L"PRESS";
			this->button_write_channe->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 670);
			this->Controls->Add(this->button_write_channe);
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
#pragma endregion
	};
}
