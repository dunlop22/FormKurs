#pragma once
#include <string>
#include <vector>
#include "NewInformation.h"
namespace FormKurs {
	using namespace std;
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
		Generic::List<String^>^ massiv_information = gcnew Generic::List<String^>();
		String^ info;
		NewInformation^ new_info = gcnew NewInformation(info);	//создание нового экземпляра;	//объявление формы

		//vector<String^> massiv_information;

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
	private: System::Windows::Forms::Label^ label_zagolovok;
	private: System::Windows::Forms::Label^ label_new_channel;
	private: System::Windows::Forms::Button^ button_new_channel;
	private: System::Windows::Forms::Label^ label_read_Channel;
	private: System::Windows::Forms::Label^ label_write_channel;
	private: System::Windows::Forms::Button^ button_read_channel;
	private: System::Windows::Forms::Button^ button_write_channel;


	protected:

	protected:

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
			this->label_zagolovok = (gcnew System::Windows::Forms::Label());
			this->label_new_channel = (gcnew System::Windows::Forms::Label());
			this->button_new_channel = (gcnew System::Windows::Forms::Button());
			this->label_read_Channel = (gcnew System::Windows::Forms::Label());
			this->label_write_channel = (gcnew System::Windows::Forms::Label());
			this->button_read_channel = (gcnew System::Windows::Forms::Button());
			this->button_write_channel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_zagolovok
			// 
			this->label_zagolovok->AutoSize = true;
			this->label_zagolovok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label_zagolovok->Location = System::Drawing::Point(12, 19);
			this->label_zagolovok->Name = L"label_zagolovok";
			this->label_zagolovok->Size = System::Drawing::Size(827, 20);
			this->label_zagolovok->TabIndex = 0;
			this->label_zagolovok->Text = L"Моделирование механизма межпроцессового взаимодействия на основе именованных кана"
				L"лов.";
			// 
			// label_new_channel
			// 
			this->label_new_channel->AutoSize = true;
			this->label_new_channel->Location = System::Drawing::Point(96, 133);
			this->label_new_channel->Name = L"label_new_channel";
			this->label_new_channel->Size = System::Drawing::Size(133, 13);
			this->label_new_channel->TabIndex = 1;
			this->label_new_channel->Text = L"Создание нового канала";
			// 
			// button_new_channel
			// 
			this->button_new_channel->Location = System::Drawing::Point(264, 128);
			this->button_new_channel->Name = L"button_new_channel";
			this->button_new_channel->Size = System::Drawing::Size(75, 23);
			this->button_new_channel->TabIndex = 2;
			this->button_new_channel->Text = L"PRESS";
			this->button_new_channel->UseVisualStyleBackColor = true;
			this->button_new_channel->Click += gcnew System::EventHandler(this, &MainForm::button_new_channel_Click);
			// 
			// label_read_Channel
			// 
			this->label_read_Channel->AutoSize = true;
			this->label_read_Channel->Location = System::Drawing::Point(96, 184);
			this->label_read_Channel->Name = L"label_read_Channel";
			this->label_read_Channel->Size = System::Drawing::Size(83, 13);
			this->label_read_Channel->TabIndex = 3;
			this->label_read_Channel->Text = L"Чтение канала";
			// 
			// label_write_channel
			// 
			this->label_write_channel->AutoSize = true;
			this->label_write_channel->Location = System::Drawing::Point(96, 243);
			this->label_write_channel->Name = L"label_write_channel";
			this->label_write_channel->Size = System::Drawing::Size(86, 13);
			this->label_write_channel->TabIndex = 4;
			this->label_write_channel->Text = L"Запись в канал";
			// 
			// button_read_channel
			// 
			this->button_read_channel->Location = System::Drawing::Point(264, 179);
			this->button_read_channel->Name = L"button_read_channel";
			this->button_read_channel->Size = System::Drawing::Size(75, 23);
			this->button_read_channel->TabIndex = 5;
			this->button_read_channel->Text = L"PRESS";
			this->button_read_channel->UseVisualStyleBackColor = true;
			// 
			// button_write_channel
			// 
			this->button_write_channel->Location = System::Drawing::Point(264, 238);
			this->button_write_channel->Name = L"button_write_channel";
			this->button_write_channel->Size = System::Drawing::Size(75, 23);
			this->button_write_channel->TabIndex = 6;
			this->button_write_channel->Text = L"PRESS";
			this->button_write_channel->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 465);
			this->Controls->Add(this->button_write_channel);
			this->Controls->Add(this->button_read_channel);
			this->Controls->Add(this->label_write_channel);
			this->Controls->Add(this->label_read_Channel);
			this->Controls->Add(this->button_new_channel);
			this->Controls->Add(this->label_new_channel);
			this->Controls->Add(this->label_zagolovok);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

			this->new_info->Closed += gcnew EventHandler(this, &MainForm::new_info_Closed);

			

		}
#pragma endregion


		void new_info_Closed(Object^ sender, EventArgs^ e)		//добавление новых данных после закрытия формы добавления данных
		{
			//this->Hide();
			if (info != "")
			{
				massiv_information->Add(info);
				this->label_new_channel->Text = info;
			}
		}

	private: System::Void button_new_channel_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ info = "";
		
		new_info->Show();		//открытие новой формы

	}
};
}
