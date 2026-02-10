#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace VolynetsTI1;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm());
}
