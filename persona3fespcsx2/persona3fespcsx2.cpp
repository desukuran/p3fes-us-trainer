// persona3fespcsx2.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include <tchar.h>
#include <string>
#include "Global.h"
#include "Offsets.h"

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
	{
		//Is PCSX2 ready?
		bool messageboxloop = true;
		bool cancelPressed = false;
		while (messageboxloop)
		{
			int boxResult = MessageBoxA(0, "ERROR: PCSX2 not found running", "PCSX2 wasn't found!\nMake sure it's running!", MB_RETRYCANCEL);
			switch(boxResult)
			{
				case IDRETRY:
					EnumWindows(WorkerProc, NULL);
					if (hwind != NULL)
						messageboxloop = false;
						break;
				case IDCANCEL:
					cancelPressed = true;
					break;
			}
				if (cancelPressed)
				{
					exit(0x0);
				}
		}
	}



	GetWindowThreadProcessId(hwind,&pid);
	
	//Timer to refresh stats.
	timer1->Interval = 100;
    timer1->Enabled = true;

}

System::Void Form1::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = comboBox1->SelectedIndex;

	//After ID 169, Theres a 21-sized dummy gap, so we have to skip it.
	if (index > 169)
		index += 21;

	int desiredPersona = index;

	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS,0,pid);

	WriteProcessMemory(pHandle,(LPVOID)COffsets::persona1_modifer,&desiredPersona,sizeof(short int),NULL);
	
	CloseHandle(pHandle);
}

System::Void Form1::numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_level->Value;

	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS,0,pid);

	WriteProcessMemory(pHandle,(LPVOID)COffsets::mc_level,&index,sizeof(short int),NULL);
	
	CloseHandle(pHandle);
}

System::Void Form1::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	//TODO: This needs to be fixed. Buff comes out corrupted.
	/*HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS,0,pid);

	int buff = 0;

	//MC Level
	ReadProcessMemory(pHandle,(LPVOID)COffsets::mc_level,&buff,sizeof(buff),NULL);
	//num_mc_level->Value = buff;

	CloseHandle(pHandle);*/
}