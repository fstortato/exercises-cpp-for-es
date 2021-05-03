#include "Interface.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	aula_2_ex_clock_calendar::Interface form;
	Application::Run(%form);
}