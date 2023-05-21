#pragma once
#include <vector>
#include <string>
namespace FormKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Group_Proc
	/// </summary>
	public ref class Group_Proc : public System::Windows::Forms::Form
	{
	public:
		Group_Proc(Generic::List<String^>^ Channels, Generic::List<int>^ state)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Channels_old = Channels;
			state_old = state;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Group_Proc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton_r_ch;
	private: System::Windows::Forms::RadioButton^ radioButton_wr_ch;
	private: System::Windows::Forms::Label^ label_num_proc;
	private: System::Windows::Forms::RadioButton^ radioButton_r_to_wr_ch;
	private: System::Windows::Forms::Label^ label_new_action;
	private: System::Windows::Forms::Label^ label_new_proc;
	private: System::Windows::Forms::Button^ button_new_action;
	private: System::Windows::Forms::Button^ button_new_proc;
	private: System::Windows::Forms::DataGridView^ dataGridView_r;
	private: System::Windows::Forms::DataGridView^ dataGridView_wr;
	private: System::Windows::Forms::Label^ label_ch_r;
	private: System::Windows::Forms::Label^ label_ch_w;
	private: System::Windows::Forms::Label^ label_num_zn;
	private: System::Windows::Forms::TextBox^ textBox_num_zn;
	private: System::Windows::Forms::Label^ label_new_inf;
	private: System::Windows::Forms::TextBox^ textBox_wr_inf;
	private: System::Windows::Forms::GroupBox^ groupBox_r_ch;
	private: System::Windows::Forms::GroupBox^ groupBox_w_ch;
	private: System::Windows::Forms::GroupBox^ groupBox_change;
	private: System::Windows::Forms::GroupBox^ groupBox_mode;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Num_Channel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Int_Channel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Num_Channel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Int_Channel1;
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
			this->radioButton_r_ch = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_wr_ch = (gcnew System::Windows::Forms::RadioButton());
			this->label_num_proc = (gcnew System::Windows::Forms::Label());
			this->radioButton_r_to_wr_ch = (gcnew System::Windows::Forms::RadioButton());
			this->label_new_action = (gcnew System::Windows::Forms::Label());
			this->label_new_proc = (gcnew System::Windows::Forms::Label());
			this->button_new_action = (gcnew System::Windows::Forms::Button());
			this->button_new_proc = (gcnew System::Windows::Forms::Button());
			this->dataGridView_r = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView_wr = (gcnew System::Windows::Forms::DataGridView());
			this->label_ch_r = (gcnew System::Windows::Forms::Label());
			this->label_ch_w = (gcnew System::Windows::Forms::Label());
			this->label_num_zn = (gcnew System::Windows::Forms::Label());
			this->textBox_num_zn = (gcnew System::Windows::Forms::TextBox());
			this->label_new_inf = (gcnew System::Windows::Forms::Label());
			this->textBox_wr_inf = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_r_ch = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_w_ch = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_change = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_mode = (gcnew System::Windows::Forms::GroupBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Num_Channel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Int_Channel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Num_Channel1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Int_Channel1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wr))->BeginInit();
			this->groupBox_r_ch->SuspendLayout();
			this->groupBox_w_ch->SuspendLayout();
			this->groupBox_change->SuspendLayout();
			this->groupBox_mode->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton_r_ch
			// 
			this->radioButton_r_ch->AutoSize = true;
			this->radioButton_r_ch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->radioButton_r_ch->Location = System::Drawing::Point(6, 89);
			this->radioButton_r_ch->Name = L"radioButton_r_ch";
			this->radioButton_r_ch->Size = System::Drawing::Size(163, 24);
			this->radioButton_r_ch->TabIndex = 0;
			this->radioButton_r_ch->TabStop = true;
			this->radioButton_r_ch->Text = L"Чтение из канала";
			this->radioButton_r_ch->UseVisualStyleBackColor = true;
			this->radioButton_r_ch->CheckedChanged += gcnew System::EventHandler(this, &Group_Proc::radioButton_r_ch_CheckedChanged);
			// 
			// radioButton_wr_ch
			// 
			this->radioButton_wr_ch->AutoSize = true;
			this->radioButton_wr_ch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->radioButton_wr_ch->Location = System::Drawing::Point(6, 178);
			this->radioButton_wr_ch->Name = L"radioButton_wr_ch";
			this->radioButton_wr_ch->Size = System::Drawing::Size(144, 24);
			this->radioButton_wr_ch->TabIndex = 1;
			this->radioButton_wr_ch->TabStop = true;
			this->radioButton_wr_ch->Text = L"Запись в канал";
			this->radioButton_wr_ch->UseVisualStyleBackColor = true;
			this->radioButton_wr_ch->CheckedChanged += gcnew System::EventHandler(this, &Group_Proc::radioButton_wr_ch_CheckedChanged);
			// 
			// label_num_proc
			// 
			this->label_num_proc->AutoSize = true;
			this->label_num_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_num_proc->Location = System::Drawing::Point(537, 9);
			this->label_num_proc->Name = L"label_num_proc";
			this->label_num_proc->Size = System::Drawing::Size(102, 40);
			this->label_num_proc->TabIndex = 2;
			this->label_num_proc->Text = L"Процесс №\nДействие №";
			// 
			// radioButton_r_to_wr_ch
			// 
			this->radioButton_r_to_wr_ch->AutoSize = true;
			this->radioButton_r_to_wr_ch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->radioButton_r_to_wr_ch->Location = System::Drawing::Point(6, 276);
			this->radioButton_r_to_wr_ch->Name = L"radioButton_r_to_wr_ch";
			this->radioButton_r_to_wr_ch->Size = System::Drawing::Size(326, 24);
			this->radioButton_r_to_wr_ch->TabIndex = 3;
			this->radioButton_r_to_wr_ch->TabStop = true;
			this->radioButton_r_to_wr_ch->Text = L"Чтение из канала N и запись в канал M";
			this->radioButton_r_to_wr_ch->UseVisualStyleBackColor = true;
			this->radioButton_r_to_wr_ch->CheckedChanged += gcnew System::EventHandler(this, &Group_Proc::radioButton_r_to_wr_ch_CheckedChanged);
			// 
			// label_new_action
			// 
			this->label_new_action->AutoSize = true;
			this->label_new_action->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_action->Location = System::Drawing::Point(93, 31);
			this->label_new_action->Name = L"label_new_action";
			this->label_new_action->Size = System::Drawing::Size(217, 20);
			this->label_new_action->TabIndex = 4;
			this->label_new_action->Text = L"Создание нового действия";
			// 
			// label_new_proc
			// 
			this->label_new_proc->AutoSize = true;
			this->label_new_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_proc->Location = System::Drawing::Point(523, 31);
			this->label_new_proc->Name = L"label_new_proc";
			this->label_new_proc->Size = System::Drawing::Size(214, 20);
			this->label_new_proc->TabIndex = 5;
			this->label_new_proc->Text = L"Создание нового процесса";
			// 
			// button_new_action
			// 
			this->button_new_action->Location = System::Drawing::Point(162, 71);
			this->button_new_action->Name = L"button_new_action";
			this->button_new_action->Size = System::Drawing::Size(75, 23);
			this->button_new_action->TabIndex = 6;
			this->button_new_action->Text = L"PRESS";
			this->button_new_action->UseVisualStyleBackColor = true;
			// 
			// button_new_proc
			// 
			this->button_new_proc->Location = System::Drawing::Point(590, 71);
			this->button_new_proc->Name = L"button_new_proc";
			this->button_new_proc->Size = System::Drawing::Size(75, 23);
			this->button_new_proc->TabIndex = 7;
			this->button_new_proc->Text = L"PRESS";
			this->button_new_proc->UseVisualStyleBackColor = true;
			// 
			// dataGridView_r
			// 
			this->dataGridView_r->AllowUserToAddRows = false;
			this->dataGridView_r->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_r->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Num_Channel,
					this->Int_Channel
			});
			this->dataGridView_r->Location = System::Drawing::Point(78, 81);
			this->dataGridView_r->Name = L"dataGridView_r";
			this->dataGridView_r->Size = System::Drawing::Size(277, 150);
			this->dataGridView_r->TabIndex = 8;
			this->dataGridView_r->Visible = false;
			
			// 
			// dataGridView_wr
			// 
			this->dataGridView_wr->AllowUserToAddRows = false;
			this->dataGridView_wr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_wr->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Num_Channel1,
					this->Int_Channel1
			});

			this->dataGridView_wr->Location = System::Drawing::Point(49, 81);
			this->dataGridView_wr->Name = L"dataGridView_wr";
			this->dataGridView_wr->Size = System::Drawing::Size(259, 150);
			this->dataGridView_wr->TabIndex = 9;
			this->dataGridView_wr->Visible = false;
			// 
			// label_ch_r
			// 
			this->label_ch_r->AutoSize = true;
			this->label_ch_r->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_ch_r->Location = System::Drawing::Point(74, 36);
			this->label_ch_r->Name = L"label_ch_r";
			this->label_ch_r->Size = System::Drawing::Size(226, 20);
			this->label_ch_r->TabIndex = 10;
			this->label_ch_r->Text = L"Выберите канал для чтения";
			this->label_ch_r->Visible = false;
			// 
			// label_ch_w
			// 
			this->label_ch_w->AutoSize = true;
			this->label_ch_w->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_ch_w->Location = System::Drawing::Point(45, 36);
			this->label_ch_w->Name = L"label_ch_w";
			this->label_ch_w->Size = System::Drawing::Size(224, 20);
			this->label_ch_w->TabIndex = 11;
			this->label_ch_w->Text = L"Выберите канал для записи";
			this->label_ch_w->Visible = false;
			// 
			// label_num_zn
			// 
			this->label_num_zn->AutoSize = true;
			this->label_num_zn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_num_zn->Location = System::Drawing::Point(84, 274);
			this->label_num_zn->Name = L"label_num_zn";
			this->label_num_zn->Size = System::Drawing::Size(234, 20);
			this->label_num_zn->TabIndex = 12;
			this->label_num_zn->Text = L"Количество символов/знаков";
			this->label_num_zn->Visible = false;
			// 
			// textBox_num_zn
			// 
			this->textBox_num_zn->Location = System::Drawing::Point(88, 323);
			this->textBox_num_zn->Name = L"textBox_num_zn";
			this->textBox_num_zn->Size = System::Drawing::Size(230, 20);
			this->textBox_num_zn->TabIndex = 13;
			this->textBox_num_zn->Visible = false;
			this->textBox_num_zn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Group_Proc::textBox1_KeyPress);
			// 
			// label_new_inf
			// 
			this->label_new_inf->AutoSize = true;
			this->label_new_inf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_inf->Location = System::Drawing::Point(90, 274);
			this->label_new_inf->Name = L"label_new_inf";
			this->label_new_inf->Size = System::Drawing::Size(158, 20);
			this->label_new_inf->TabIndex = 14;
			this->label_new_inf->Text = L"Данные для записи";
			this->label_new_inf->Visible = false;
			// 
			// textBox_wr_inf
			// 
			this->textBox_wr_inf->Location = System::Drawing::Point(94, 323);
			this->textBox_wr_inf->Name = L"textBox_wr_inf";
			this->textBox_wr_inf->Size = System::Drawing::Size(154, 20);
			this->textBox_wr_inf->TabIndex = 15;
			this->textBox_wr_inf->Visible = false;
			// 
			// groupBox_r_ch
			// 
			this->groupBox_r_ch->Controls->Add(this->dataGridView_r);
			this->groupBox_r_ch->Controls->Add(this->label_ch_r);
			this->groupBox_r_ch->Controls->Add(this->label_num_zn);
			this->groupBox_r_ch->Controls->Add(this->textBox_num_zn);
			this->groupBox_r_ch->Location = System::Drawing::Point(460, 73);
			this->groupBox_r_ch->Name = L"groupBox_r_ch";
			this->groupBox_r_ch->Size = System::Drawing::Size(405, 392);
			this->groupBox_r_ch->TabIndex = 16;
			this->groupBox_r_ch->TabStop = false;
			this->groupBox_r_ch->Text = L"Чтение";
			this->groupBox_r_ch->Visible = false;
			// 
			// groupBox_w_ch
			// 
			this->groupBox_w_ch->Controls->Add(this->dataGridView_wr);
			this->groupBox_w_ch->Controls->Add(this->label_ch_w);
			this->groupBox_w_ch->Controls->Add(this->textBox_wr_inf);
			this->groupBox_w_ch->Controls->Add(this->label_new_inf);
			this->groupBox_w_ch->Location = System::Drawing::Point(891, 73);
			this->groupBox_w_ch->Name = L"groupBox_w_ch";
			this->groupBox_w_ch->Size = System::Drawing::Size(329, 392);
			this->groupBox_w_ch->TabIndex = 17;
			this->groupBox_w_ch->TabStop = false;
			this->groupBox_w_ch->Text = L"Запись";
			this->groupBox_w_ch->Visible = false;
			// 
			// groupBox_change
			// 
			this->groupBox_change->Controls->Add(this->label_new_action);
			this->groupBox_change->Controls->Add(this->label_new_proc);
			this->groupBox_change->Controls->Add(this->button_new_action);
			this->groupBox_change->Controls->Add(this->button_new_proc);
			this->groupBox_change->Location = System::Drawing::Point(239, 480);
			this->groupBox_change->Name = L"groupBox_change";
			this->groupBox_change->Size = System::Drawing::Size(816, 120);
			this->groupBox_change->TabIndex = 18;
			this->groupBox_change->TabStop = false;
			// 
			// groupBox_mode
			// 
			this->groupBox_mode->Controls->Add(this->radioButton_wr_ch);
			this->groupBox_mode->Controls->Add(this->radioButton_r_ch);
			this->groupBox_mode->Controls->Add(this->radioButton_r_to_wr_ch);
			this->groupBox_mode->Location = System::Drawing::Point(49, 73);
			this->groupBox_mode->Name = L"groupBox_mode";
			this->groupBox_mode->Size = System::Drawing::Size(348, 392);
			this->groupBox_mode->TabIndex = 19;
			this->groupBox_mode->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Group_Proc::timer1_Tick);
			// 
			// Num_Channel
			// 
			this->Num_Channel->HeaderText = L"Номер канала";
			this->Num_Channel->Name = L"Num_Channel";
			this->Num_Channel->ReadOnly = true;
			this->Num_Channel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Int_Channel
			// 
			this->Int_Channel->HeaderText = L"Данные канала";
			this->Int_Channel->Name = L"Int_Channel";
			this->Int_Channel->ReadOnly = true;
			this->Int_Channel->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Num_Channel1
			// 
			this->Num_Channel1->HeaderText = L"Номер канала";
			this->Num_Channel1->Name = L"Num_Channel1";
			this->Num_Channel1->ReadOnly = true;
			this->Num_Channel1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Int_Channel1
			// 
			this->Int_Channel1->HeaderText = L"Данные канала";
			this->Int_Channel1->Name = L"Int_Channel1";
			this->Int_Channel1->ReadOnly = true;
			this->Int_Channel1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			
			// 
			// Group_Proc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 649);
			this->Controls->Add(this->groupBox_mode);
			this->Controls->Add(this->groupBox_change);
			this->Controls->Add(this->groupBox_w_ch);
			this->Controls->Add(this->groupBox_r_ch);
			this->Controls->Add(this->label_num_proc);
			this->Name = L"Group_Proc";
			this->Text = L"Group_Proc";
			this->Load += gcnew System::EventHandler(this, &Group_Proc::Group_Proc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wr))->EndInit();
			this->groupBox_r_ch->ResumeLayout(false);
			this->groupBox_r_ch->PerformLayout();
			this->groupBox_w_ch->ResumeLayout(false);
			this->groupBox_w_ch->PerformLayout();
			this->groupBox_change->ResumeLayout(false);
			this->groupBox_change->PerformLayout();
			this->groupBox_mode->ResumeLayout(false);
			this->groupBox_mode->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		array<String^, 2>^ action = gcnew array<String^, 2>(10, 10);	//максимальное количество процессов - 10, максимальное колицество операций в процессе - 10
		Generic::List<int>^ state_old;
		Generic::List<String^>^ Channels_old = gcnew Generic::List<String^>();
		int krug = 0;
#pragma endregion
	private: System::Void radioButton_r_ch_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton_r_ch->Checked == true)
		{
			this->groupBox_r_ch->Visible = true;
			this->groupBox_w_ch->Visible = false;

			this->label_num_zn->Visible = true;
			this->textBox_num_zn->Visible = true;

			this->label_new_inf->Visible = false;
			this->textBox_wr_inf->Visible = false;

			this->label_ch_r->Visible = true;
			this->label_ch_w->Visible = false;

			this->radioButton_wr_ch->Checked == false;
			this->radioButton_r_to_wr_ch->Checked == false;
			this->dataGridView_wr->Visible = false;
			this->dataGridView_r->Visible = true;

			//заполнение таблицы данными
		}
	}

	private: System::Void radioButton_wr_ch_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton_wr_ch->Checked == true)
		{
			this->label_num_zn->Visible = false;
			this->textBox_num_zn->Visible = false;

			this->groupBox_r_ch->Visible = false;
			this->groupBox_w_ch->Visible = true;


			this->label_new_inf->Visible = true;
			this->textBox_wr_inf->Visible = true;

			this->radioButton_r_ch->Checked == false;
			this->radioButton_r_to_wr_ch->Checked == false;
			this->label_ch_r->Visible = false;
			this->label_ch_w->Visible = true;
			this->dataGridView_wr->Visible = true;
			this->dataGridView_r->Visible = false;


			//заполнение таблицы данными
		}
	}

	private: System::Void radioButton_r_to_wr_ch_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton_r_to_wr_ch->Checked == true)
		{
			this->groupBox_r_ch->Visible = true;
			this->groupBox_w_ch->Visible = true;


			this->label_num_zn->Visible = true;
			this->textBox_num_zn->Visible = true;

			this->label_new_inf->Visible = false;
			this->textBox_wr_inf->Visible = false;

			this->radioButton_wr_ch->Checked == false;
			this->radioButton_r_ch->Checked == false;

			this->label_ch_r->Visible = true;
			this->label_ch_w->Visible = true;
			this->dataGridView_r->Visible = true;
			this->dataGridView_wr->Visible = true;

			//заполнение таблицы данными

		}
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8) {
			e->Handled = true;
			return;
		}
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//обновление и добавление данных в таблицу
	//заполнение таблицы значениями
	for (int i = 0;i < Channels_old->Count;i++)
	{
		if (krug < Channels_old->Count)
		{
			this->dataGridView_r->Rows->Add();		//добавление строки для значения коллекции
			this->dataGridView_wr->Rows->Add();		//добавление строки для значения коллекции
		}
		krug++;
		this->dataGridView_r->Rows[i]->Cells[0]->Value = i + 1;
		this->dataGridView_wr->Rows[i]->Cells[0]->Value = i + 1;
		this->dataGridView_r->Rows[i]->Cells[1]->Value = Channels_old[i];
		this->dataGridView_wr->Rows[i]->Cells[1]->Value = Channels_old[i];
		/*
		if (state_old[i] == 1)
		{
			this->dataGridView_r->Rows[i]->DefaultCellStyle->BackColor = Color::Red;
		}
		else
		{
			this->dataGridView_r->Rows[i]->DefaultCellStyle->BackColor = Color::White;
		}
		*/
	}
	krug = Channels_old->Count;

}
private: System::Void Group_Proc_Load(System::Object^ sender, System::EventArgs^ e) {
	this->timer1->Interval = 500;		//установка времени для таймера
	this->timer1->Enabled = true;		//включение таймера
}
};
}
