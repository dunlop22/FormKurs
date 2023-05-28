#pragma once
#include <vector>
#include <string>
#include "Read_channel_func.h"
#include "Pipes.h"
#include "Proccess.h"
#include "Commands.h"
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
		Group_Proc(Generic::List<Pipes^>^ Pipes_)
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
	private: System::Windows::Forms::Label^ label_num_action;
	private: System::Windows::Forms::Button^ button_main_start;
	private: System::Windows::Forms::TextBox^ textBox_rez_log;
	private: System::Windows::Forms::GroupBox^ groupBox_buffer_act;
	private: System::Windows::Forms::TextBox^ textBox_buffer_act;



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
			this->Num_Channel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Int_Channel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView_wr = (gcnew System::Windows::Forms::DataGridView());
			this->Num_Channel1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Int_Channel1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_ch_r = (gcnew System::Windows::Forms::Label());
			this->label_ch_w = (gcnew System::Windows::Forms::Label());
			this->label_num_zn = (gcnew System::Windows::Forms::Label());
			this->textBox_num_zn = (gcnew System::Windows::Forms::TextBox());
			this->label_new_inf = (gcnew System::Windows::Forms::Label());
			this->textBox_wr_inf = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_r_ch = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_rez_log = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_w_ch = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_change = (gcnew System::Windows::Forms::GroupBox());
			this->button_main_start = (gcnew System::Windows::Forms::Button());
			this->groupBox_mode = (gcnew System::Windows::Forms::GroupBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_num_action = (gcnew System::Windows::Forms::Label());
			this->groupBox_buffer_act = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_buffer_act = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wr))->BeginInit();
			this->groupBox_r_ch->SuspendLayout();
			this->groupBox_w_ch->SuspendLayout();
			this->groupBox_change->SuspendLayout();
			this->groupBox_mode->SuspendLayout();
			this->groupBox_buffer_act->SuspendLayout();
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
			this->label_num_proc->Size = System::Drawing::Size(92, 20);
			this->label_num_proc->TabIndex = 2;
			this->label_num_proc->Text = L"Процесс №\n";
			// 
			// radioButton_r_to_wr_ch
			// 
			this->radioButton_r_to_wr_ch->AutoSize = true;
			this->radioButton_r_to_wr_ch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->radioButton_r_to_wr_ch->Location = System::Drawing::Point(6, 276);
			this->radioButton_r_to_wr_ch->Name = L"radioButton_r_to_wr_ch";
			this->radioButton_r_to_wr_ch->Size = System::Drawing::Size(179, 44);
			this->radioButton_r_to_wr_ch->TabIndex = 3;
			this->radioButton_r_to_wr_ch->TabStop = true;
			this->radioButton_r_to_wr_ch->Text = L"Чтение из канала N\r\n  и запись в канал M";
			this->radioButton_r_to_wr_ch->UseVisualStyleBackColor = true;
			this->radioButton_r_to_wr_ch->CheckedChanged += gcnew System::EventHandler(this, &Group_Proc::radioButton_r_to_wr_ch_CheckedChanged);
			// 
			// label_new_action
			// 
			this->label_new_action->AutoSize = true;
			this->label_new_action->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_action->Location = System::Drawing::Point(32, 31);
			this->label_new_action->Name = L"label_new_action";
			this->label_new_action->Size = System::Drawing::Size(217, 20);
			this->label_new_action->TabIndex = 4;
			this->label_new_action->Text = L"Создание нового действия";
			// 
			// label_new_proc
			// 
			this->label_new_proc->AutoSize = true;
			this->label_new_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_new_proc->Location = System::Drawing::Point(366, 31);
			this->label_new_proc->Name = L"label_new_proc";
			this->label_new_proc->Size = System::Drawing::Size(214, 20);
			this->label_new_proc->TabIndex = 5;
			this->label_new_proc->Text = L"Создание нового процесса";
			// 
			// button_new_action
			// 
			this->button_new_action->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_new_action->Location = System::Drawing::Point(82, 71);
			this->button_new_action->Name = L"button_new_action";
			this->button_new_action->Size = System::Drawing::Size(87, 43);
			this->button_new_action->TabIndex = 6;
			this->button_new_action->Text = L"PRESS";
			this->button_new_action->UseVisualStyleBackColor = true;
			this->button_new_action->Click += gcnew System::EventHandler(this, &Group_Proc::button_new_action_Click);
			// 
			// button_new_proc
			// 
			this->button_new_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_new_proc->Location = System::Drawing::Point(437, 71);
			this->button_new_proc->Name = L"button_new_proc";
			this->button_new_proc->Size = System::Drawing::Size(87, 43);
			this->button_new_proc->TabIndex = 7;
			this->button_new_proc->Text = L"PRESS";
			this->button_new_proc->UseVisualStyleBackColor = true;
			this->button_new_proc->Click += gcnew System::EventHandler(this, &Group_Proc::button_new_proc_Click);
			// 
			// dataGridView_r
			// 
			this->dataGridView_r->AllowUserToAddRows = false;
			this->dataGridView_r->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_r->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Num_Channel,
					this->Int_Channel
			});
			this->dataGridView_r->Location = System::Drawing::Point(22, 81);
			this->dataGridView_r->Name = L"dataGridView_r";
			this->dataGridView_r->Size = System::Drawing::Size(277, 170);
			this->dataGridView_r->TabIndex = 8;
			this->dataGridView_r->Visible = false;
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
			// dataGridView_wr
			// 
			this->dataGridView_wr->AllowUserToAddRows = false;
			this->dataGridView_wr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_wr->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Num_Channel1,
					this->Int_Channel1
			});
			this->dataGridView_wr->Location = System::Drawing::Point(18, 81);
			this->dataGridView_wr->Name = L"dataGridView_wr";
			this->dataGridView_wr->Size = System::Drawing::Size(259, 150);
			this->dataGridView_wr->TabIndex = 9;
			this->dataGridView_wr->Visible = false;
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
			// label_ch_r
			// 
			this->label_ch_r->AutoSize = true;
			this->label_ch_r->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_ch_r->Location = System::Drawing::Point(18, 36);
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
			this->label_ch_w->Location = System::Drawing::Point(37, 36);
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
			this->label_num_zn->Location = System::Drawing::Point(45, 274);
			this->label_num_zn->Name = L"label_num_zn";
			this->label_num_zn->Size = System::Drawing::Size(234, 20);
			this->label_num_zn->TabIndex = 12;
			this->label_num_zn->Text = L"Количество символов/знаков";
			this->label_num_zn->Visible = false;
			// 
			// textBox_num_zn
			// 
			this->textBox_num_zn->Location = System::Drawing::Point(49, 323);
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
			this->label_new_inf->Location = System::Drawing::Point(71, 274);
			this->label_new_inf->Name = L"label_new_inf";
			this->label_new_inf->Size = System::Drawing::Size(158, 20);
			this->label_new_inf->TabIndex = 14;
			this->label_new_inf->Text = L"Данные для записи";
			this->label_new_inf->Visible = false;
			// 
			// textBox_wr_inf
			// 
			this->textBox_wr_inf->Location = System::Drawing::Point(75, 323);
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
			this->groupBox_r_ch->Location = System::Drawing::Point(274, 73);
			this->groupBox_r_ch->Name = L"groupBox_r_ch";
			this->groupBox_r_ch->Size = System::Drawing::Size(319, 392);
			this->groupBox_r_ch->TabIndex = 16;
			this->groupBox_r_ch->TabStop = false;
			this->groupBox_r_ch->Text = L"Чтение";
			this->groupBox_r_ch->Visible = false;
			// 
			// textBox_rez_log
			// 
			this->textBox_rez_log->Location = System::Drawing::Point(49, 67);
			this->textBox_rez_log->Multiline = true;
			this->textBox_rez_log->Name = L"textBox_rez_log";
			this->textBox_rez_log->ReadOnly = true;
			this->textBox_rez_log->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_rez_log->Size = System::Drawing::Size(1143, 570);
			this->textBox_rez_log->TabIndex = 21;
			this->textBox_rez_log->Visible = false;
			// 
			// groupBox_w_ch
			// 
			this->groupBox_w_ch->Controls->Add(this->dataGridView_wr);
			this->groupBox_w_ch->Controls->Add(this->label_ch_w);
			this->groupBox_w_ch->Controls->Add(this->textBox_wr_inf);
			this->groupBox_w_ch->Controls->Add(this->label_new_inf);
			this->groupBox_w_ch->Location = System::Drawing::Point(612, 73);
			this->groupBox_w_ch->Name = L"groupBox_w_ch";
			this->groupBox_w_ch->Size = System::Drawing::Size(297, 392);
			this->groupBox_w_ch->TabIndex = 17;
			this->groupBox_w_ch->TabStop = false;
			this->groupBox_w_ch->Text = L"Запись";
			this->groupBox_w_ch->Visible = false;
			// 
			// groupBox_change
			// 
			this->groupBox_change->Controls->Add(this->button_main_start);
			this->groupBox_change->Controls->Add(this->label_new_action);
			this->groupBox_change->Controls->Add(this->label_new_proc);
			this->groupBox_change->Controls->Add(this->button_new_action);
			this->groupBox_change->Controls->Add(this->button_new_proc);
			this->groupBox_change->Location = System::Drawing::Point(49, 486);
			this->groupBox_change->Name = L"groupBox_change";
			this->groupBox_change->Size = System::Drawing::Size(1090, 132);
			this->groupBox_change->TabIndex = 18;
			this->groupBox_change->TabStop = false;
			// 
			// button_main_start
			// 
			this->button_main_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button_main_start->Location = System::Drawing::Point(651, 46);
			this->button_main_start->Name = L"button_main_start";
			this->button_main_start->Size = System::Drawing::Size(209, 68);
			this->button_main_start->TabIndex = 8;
			this->button_main_start->Text = L"START";
			this->button_main_start->UseVisualStyleBackColor = true;
			this->button_main_start->Click += gcnew System::EventHandler(this, &Group_Proc::button_main_start_Click);
			// 
			// groupBox_mode
			// 
			this->groupBox_mode->Controls->Add(this->radioButton_wr_ch);
			this->groupBox_mode->Controls->Add(this->radioButton_r_ch);
			this->groupBox_mode->Controls->Add(this->radioButton_r_to_wr_ch);
			this->groupBox_mode->Location = System::Drawing::Point(49, 73);
			this->groupBox_mode->Name = L"groupBox_mode";
			this->groupBox_mode->Size = System::Drawing::Size(196, 392);
			this->groupBox_mode->TabIndex = 19;
			this->groupBox_mode->TabStop = false;
			this->groupBox_mode->Text = L"Выбор операции над каналом";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Group_Proc::timer1_Tick);
			// 
			// label_num_action
			// 
			this->label_num_action->AutoSize = true;
			this->label_num_action->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label_num_action->Location = System::Drawing::Point(534, 40);
			this->label_num_action->Name = L"label_num_action";
			this->label_num_action->Size = System::Drawing::Size(102, 20);
			this->label_num_action->TabIndex = 20;
			this->label_num_action->Text = L"Действие №";
			// 
			// groupBox_buffer_act
			// 
			this->groupBox_buffer_act->Controls->Add(this->textBox_buffer_act);
			this->groupBox_buffer_act->Location = System::Drawing::Point(940, 73);
			this->groupBox_buffer_act->Name = L"groupBox_buffer_act";
			this->groupBox_buffer_act->Size = System::Drawing::Size(282, 563);
			this->groupBox_buffer_act->TabIndex = 21;
			this->groupBox_buffer_act->TabStop = false;
			this->groupBox_buffer_act->Text = L"Буфер действий";
			// 
			// textBox_buffer_act
			// 
			this->textBox_buffer_act->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox_buffer_act->Location = System::Drawing::Point(14, 20);
			this->textBox_buffer_act->Multiline = true;
			this->textBox_buffer_act->Name = L"textBox_buffer_act";
			this->textBox_buffer_act->ReadOnly = true;
			this->textBox_buffer_act->Size = System::Drawing::Size(262, 537);
			this->textBox_buffer_act->TabIndex = 0;
			// 
			// Group_Proc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 649);
			this->Controls->Add(this->textBox_rez_log);
			this->Controls->Add(this->groupBox_buffer_act);
			this->Controls->Add(this->label_num_action);
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
			this->groupBox_buffer_act->ResumeLayout(false);
			this->groupBox_buffer_act->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//array<String^, 3>^ action = gcnew array<String^, 3>(10, 10, 5);	//максимальное количество процессов - 10, максимальное колицество операций в процессе - 10
		Generic::List<Proccess^>^ Proccess_ = gcnew Generic::List<Proccess^>();
		

		Generic::List<Pipes^>^ Pipes_old;
		Read_channel_func^ func_read;
		int num_proc;
		int num_action;
		


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
		}
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8) {
			e->Handled = true;
			return;
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		func_read->update_table(Pipes_old, this->dataGridView_r);		//заполнение таблицы значениями
		func_read->update_table(Pipes_old, this->dataGridView_wr);		//заполнение таблицы значениями	
	}

	private: System::Void Group_Proc_Load(System::Object^ sender, System::EventArgs^ e) {
		Proccess^ proc_temp = gcnew Proccess();
		Proccess_->Add(proc_temp);

		if (Pipes_old->Count > 0)
		{
			func_read = gcnew Read_channel_func();
			this->timer1->Interval = 500;		//установка времени для таймера
			this->timer1->Enabled = true;		//включение таймера
			num_action = 1;		//последовательный номер действия
			num_proc = 1;		//последовательный номер процесса
		}
		else
		{
			MessageBox::Show(L"Для межпроцессового взаимодействия необходимо создать канал хотя бы один канал.", L"Не найден ни один канал", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		this->label_num_proc->Text = "Процесс №" + num_proc;
		this->label_num_action->Text = "Действие №" + num_action;
	}

	void clear_all_field()	//очистка всех полей перед переходом к следующему действию / процессу
	{
		this->textBox_num_zn->Text = "";		//очистка поля для ввода данных для чтения
		this->textBox_wr_inf->Text = "";		//очистка поля для ввода
		if (num_action < 10)				//отмена чекеров для radiobutton
		{
			this->radioButton_r_to_wr_ch->Checked = false;
			this->radioButton_r_ch->Checked = false;
			this->radioButton_wr_ch->Checked = false;
			this->groupBox_r_ch->Visible = false;
			this->groupBox_w_ch->Visible = false;
		}
	}

	int save_command()		//запись информации о каждом шаге
	{
		//[0] - выбор действия
			//0 - чтение из канала
			//1 - запись в канал
			//2 - чтение из канала и запись в канал	(переписывание)
		//[1] - канал начальный только для чтения
		//[2] - количество символов для чтения
		//[3] - конечный канал (для записи в канал и переписывания)
		//[4] - данные для записи в канал

		//чтение из канала
		if (this->radioButton_r_ch->Checked == true)
		{
			if (this->textBox_num_zn->Text != "")		//проверка заполненности поля
			{
				Proccess_[num_proc - 1]->new_act_r(this->dataGridView_r->CurrentRow->Index, Convert::ToInt32(this->textBox_num_zn->Text));
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "Процесс №" + num_proc + ". Действие №" + num_action;
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "\r\nЧтение из канала № " + (this->dataGridView_r->CurrentRow->Index + 1) + ". " + this->textBox_num_zn->Text + " симв.\r\n\r\n";
				return 0;		//good
			}
			else
			{
				MessageBox::Show(L"Введите количество символов для чтения из канала.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return 1;		//bad
			}
		}

		//запись в канал
		else if (this->radioButton_wr_ch->Checked == true)
		{
			if (this->textBox_wr_inf->Text != "")		//проверка заполненности поля
			{
				Proccess_[num_proc - 1]->new_act_w(this->dataGridView_wr->CurrentRow->Index, this->textBox_wr_inf->Text);
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "Процесс №" + num_proc + ". Действие №" + num_action;
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "\r\nЗапись в канал № " + (this->dataGridView_wr->CurrentRow->Index + 1) + ".\r\nДанные в канал: " + this->textBox_wr_inf->Text + "	\r\n\r\n";
				return 0;	//good
			}
			else
			{
				MessageBox::Show(L"Введите данные для записи в канал.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return 2;	//bad
			}
		}

		//перезапись из канала в канал
		else if (this->radioButton_r_to_wr_ch->Checked == true)
		{
			if (this->textBox_num_zn->Text != "")		//проверка заполненности поля
			{
				Proccess_[num_proc - 1]->new_act_rw(this->dataGridView_r->CurrentRow->Index, Convert::ToInt32(this->textBox_num_zn->Text), this->dataGridView_wr->CurrentRow->Index);
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "Процесс №" + num_proc + ". Действие №" + num_action;
				this->textBox_buffer_act->Text = this->textBox_buffer_act->Text + "\r\nПерезапись из канала " + (this->dataGridView_r->CurrentRow->Index + 1) + "в канал №" + (this->dataGridView_wr->CurrentRow->Index + 1) + ". " + this->textBox_num_zn->Text + " симв.\r\n\r\n";
				return 0;		//good;
			}
			else
			{
				MessageBox::Show(L"Введите количество символов для чтения из канала.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return 3;		//bad;
			}
		}
	}

	private: System::Void button_new_proc_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->radioButton_r_ch->Checked == false && this->radioButton_wr_ch->Checked == false && this->radioButton_r_to_wr_ch->Checked == false))
		{
			if (num_proc <= 10)
			{
				num_proc = num_proc + 1;
				num_action = 1;
				this->label_num_proc->Text = "Процесс №" + num_proc;
				this->label_num_action->Text = "Действие №" + num_action;
			}
			else
			{
				MessageBox::Show(L"Создано максимальное количество процессов.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			return;
		}
		
		if (save_command() == 0)		//запись информации о текущем этапе
		{
			clear_all_field();	//очистка всех полей
			if (num_proc <= 10)
			{
				num_proc = num_proc + 1;
				num_action = 1;
				this->label_num_proc->Text = "Процесс №" + num_proc;
				this->label_num_action->Text = "Действие №" + num_action;
			}
			else
			{
				MessageBox::Show(L"Создано максимальное количество процессов.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		Proccess^ Proccess_temp = gcnew Proccess();
		Proccess_->Add(Proccess_temp);	//добавление нового процесса
	}
	
	private: System::Void button_new_action_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!(this->radioButton_r_ch->Checked == false && this->radioButton_wr_ch->Checked == false && this->radioButton_r_to_wr_ch->Checked == false))
		{
			if (num_action <= 10)
			{
				//сохранение всех введенных данных через функцию
				if (save_command() == 0)		//запись информации о текущем этапе
				{
					//перевести на количество ACTIONS в PROCCESS (COUNT)
					clear_all_field();	//очистка всех полей
					if (num_action < 10)
					{
						num_action = num_action + 1;	
						this->label_num_action->Text = "Действие №" + num_action;
					}
				}
			}
			else
			{
				MessageBox::Show(L"Создано максимальное количество действий для данного процесса.", L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

		}
	}

	void interprocess_interaction()
	{
		//скрытие всех элементов управления
		this->groupBox_change->Visible = false;
		this->groupBox_mode->Visible = false;
		this->groupBox_r_ch->Visible = false;
		this->groupBox_w_ch->Visible = false;
		this->textBox_rez_log->Visible = true;

		Commands^ Command = gcnew Commands();
		int num_krug = 0;
		bool rez = true;
		int num_act = 1;	//порядковый номер действия
		int good;	//подсчет завершившихся процессов
		do
		{
			good = 0;
			for (int i = 0;i < Proccess_->Count;i++)		//проход по всем процессам
			{
				//разблокировка канала с прошлого этапа
				if (num_krug != 0)
				{
					if (Proccess_[i]->get_num_actions() > 0)
					{
						if (Proccess_[i]->get_actions()->get_num_actions() == 0 && Proccess_[i]->get_actions()->get_rez_done())	//освобождение канала после чтения
						{
							if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->check_block())
							{
								Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->pclose();		//разблокировка канала после чтения
							}
						}
						else if (Proccess_[i]->get_actions()->get_num_actions() == 1 && Proccess_[i]->get_actions()->get_rez_done())
						{
							if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->check_block())
							{
								Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->pclose();		//разблокировка канала после записи
							}
						}
						else if (Proccess_[i]->get_actions()->get_num_actions() == 2 && Proccess_[i]->get_actions()->get_rez_done())
						{
							if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->check_block())
							{
								Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->pclose();		//разблокировка канала после чтения
							}
							if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->check_block())
							{
								Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->pclose();		//разблокировка канала после записи
							}
						}
						if (Proccess_[i]->get_actions()->get_rez_done())
						{
							Proccess_[i]->del_act();		//удаление предыдущего действия 
						}
					}
				}
				if (Proccess_[i]->get_num_actions() > 0)
				{
					this->textBox_rez_log->Text = this->textBox_rez_log->Text + "Действие №" + num_act + "\r\nПроцесс №" + (i + 1) + "\r\n";

					if (Proccess_[i]->get_num_action() == 0)
					{
						Command->Read_Commands(Proccess_[i]->get_actions(), Pipes_old, this->textBox_rez_log, 0);	//0- указывает на чистое чтение
					}
					else if (Proccess_[i]->get_num_action() == 1)
					{
						Command->Write_Commands(Proccess_[i]->get_actions(), Pipes_old, this->textBox_rez_log, 0);
					}
					
					else if (Proccess_[i]->get_num_action() == 2)
					{
						if ((Proccess_[i]->get_actions()->get_text()) == "")
						{
							Command->Read_Commands(Proccess_[i]->get_actions(), Pipes_old, this->textBox_rez_log, 1);
						}
						else
						{
							Command->Write_Commands(Proccess_[i]->get_actions(), Pipes_old, this->textBox_rez_log, 1);
						}
					}
					
					num_act = num_act + 1;
				}
				if (Proccess_[i]->get_num_actions() == 0)
				{
					good = good + 1;
				}
			}
			num_krug = num_krug + 1;
		} while (good != Proccess_->Count);

		//освобождение конечных каналов
		for (int i = 0;i < Pipes_old->Count;i++)
		{
			if (Proccess_[i]->get_num_actions() > 0)
			{
				if (Proccess_[i]->get_actions()->get_num_actions() == 0 && Proccess_[i]->get_actions()->get_rez_done())	//освобождение канала после чтения
				{
					if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->check_block())
					{
						Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_read()]->pclose();		//разблокировка канала
					}
				}
				else if (Proccess_[i]->get_actions()->get_num_actions() == 1 && Proccess_[i]->get_actions()->get_rez_done())
				{
					if (Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->check_block())
					{
						Pipes_old[Proccess_[i]->get_actions()->get_num_pipes_write()]->pclose();		//разблокировка канала
					}
				}
			}
		}
		this->textBox_rez_log->Text = this->textBox_rez_log->Text + "\r\n\r\n\r\nВсе операции окончены!";
	}
	
	private: System::Void button_main_start_Click(System::Object^ sender, System::EventArgs^ e) {
		save_command();		//запись информации о текущем этапе
		clear_all_field();	//очистка всех полей
		this->label_num_action->Visible = false;
		this->label_num_proc->Visible = false;
		this->groupBox_buffer_act->Visible = false;
		interprocess_interaction();
	}
};
}
