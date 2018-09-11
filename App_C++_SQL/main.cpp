#include "Logowanie.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AppCSQL::Logowanie formula;
	Application::Run(%formula);

	return 0;
}