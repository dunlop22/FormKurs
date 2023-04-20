#pragma once
#include <string>
#include <string.h>

namespace FormKurs {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ NewInformation
	/// </summary>
	
	public ref class NewInformation : public System::Windows::Forms::Form
	{
		
	public:
		NewInformation(String^ info)
		{
			InitializeComponent();
			this->info = info;
			//
			//TODO: добавьте код конструктора
			//
		}
		String^ info;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~NewInformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_save;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_new_info;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_new_info = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(254, 206);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(75, 23);
			this->button_save->TabIndex = 0;
			this->button_save->Text = L"SAVE";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &NewInformation::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¬ведите информацию";
			// 
			// textBox_new_info
			// 
			this->textBox_new_info->Location = System::Drawing::Point(171, 99);
			this->textBox_new_info->Name = L"textBox_new_info";
			this->textBox_new_info->Size = System::Drawing::Size(419, 20);
			this->textBox_new_info->TabIndex = 2;
			// 
			// NewInformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 394);
			this->Controls->Add(this->textBox_new_info);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_save);
			this->Name = L"NewInformation";
			this->Text = L"NewInformation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox_new_info->Text != "")
		{
			info = this->textBox_new_info->Text;			//сохранение информации
			this->Close();		//закрытие формы
		}
		else
		{

			//обводка значени€, что ничего не введено
		}
	}
	};
}
