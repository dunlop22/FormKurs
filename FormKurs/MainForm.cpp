#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    FormKurs::MainForm form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}