#include "MyForm.h"


#include "logics.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab5;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5::MyForm form;
	Application::Run(% form);
	Application::Run(gcnew MyForm);
}