#pragma once
namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ NewChannel
	/// </summary>
	public ref class NewChannel : public System::Windows::Forms::Form
	{
	public:
		NewChannel()
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~NewChannel()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_save;
	private: System::Windows::Forms::Label^ label1;
	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(242, 165);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NewChannel::textBox1_TextChanged);
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(242, 248);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(211, 23);
			this->button_save->TabIndex = 1;
			this->button_save->Text = L"SAVE and EXIT";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &NewChannel::button_save_Click);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(675, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"«аполните канал данными";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NewChannel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 415);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->textBox1);
			this->Name = L"NewChannel";
			this->Text = L"NewChannel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		bool rez = 0;
#pragma endregion
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text != "")
		{
			this->rez = true;
			this->Close();
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->rez = false;
	}
};
}
