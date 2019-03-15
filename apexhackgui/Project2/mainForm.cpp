#include "mainForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")//hide console window

void main() {
	HWND hWnd = GetConsoleWindow();
	//ShowWindow(hWnd, SW_HIDE);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);

	Project2::mainForm form;
	Application::Run(%form);
}