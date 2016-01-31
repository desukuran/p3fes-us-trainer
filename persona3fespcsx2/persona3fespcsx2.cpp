// persona3fespcsx2.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include <tchar.h>
#include <string>
#include "Global.h"

using namespace persona3fespcsx2;

HWND hwind;
DWORD pid;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}

BOOL CALLBACK WorkerProc(HWND hwnd, LPARAM lParam) {
    static TCHAR buffer[50];

    GetWindowText(hwnd, buffer, 50);
    if(_tcsstr(buffer, TEXT("PCSX2"))) {
		//Found the pid, gonna put the pid in.
        hwind = hwnd;
        return FALSE;
    }

    return TRUE;
}

System::Void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e)
{				
				EnumWindows(WorkerProc, NULL);

				if (hwind == NULL)
					MessageBoxA(0, "PCSX2 Not Found", "PCSX2 wasn't found!", MB_RETRYCANCEL);

				GetWindowThreadProcessId(hwind,&pid);
				HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS,0,pid);
				SetWindowText(hwind, L"Hello");

}