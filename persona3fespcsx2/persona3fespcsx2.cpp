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
	//Find PCSX2
	EnumWindows(WorkerProc, NULL);

	
	if (hwind == NULL)
	{
		//Cant find PCSX2. Is PCSX2 ready?
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


	//Found it.
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

	setValue(COffsets::persona1_modifer, index, 2);
}

System::Void Form1::numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_level->Value;

	setValue(COffsets::mc_level, index, 2);
}

System::Void Form1::num_mc_current_hp_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_current_hp->Value;

	setValue(COffsets::mc_current_hp, index, 2);
}

System::Void Form1::num_mc_current_mp_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_current_mp->Value;

	setValue(COffsets::mc_current_mp, index, 2);
}

System::Void Form1::mc_mood_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)mc_mood->SelectedIndex;
	
	setValue(COffsets::mc_mood, index, 2);
}

System::Void Form1::mc_academics_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)mc_academics->Value;
	
	setValue(COffsets::mc_academics, index, 2);
}

System::Void Form1::num_mc_charm_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_charm->Value;
	
	setValue(COffsets::mc_charm, index, 2);
}

System::Void Form1::num_mc_courage_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_courage->Value;
	
	setValue(COffsets::mc_courage, index, 2);
}

System::Void Form1::num_mc_equip_persona_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_equip_persona->Value;
	
	setValue(COffsets::mc_equipped_persona, index, 2);
}

System::Void Form1::num_mc_money_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)num_mc_money->Value;
	
	setValue(COffsets::mc_money, index, 4);
}

System::Void Form1::persona1_level_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_level->Value;

	setValue(COffsets::persona1_level, index, 2);
}

System::Void Form1::persona1_st_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_st->Value;

	setValue(COffsets::persona1_str, index, 1);
}

System::Void Form1::persona1_ma_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_ma->Value;

	setValue(COffsets::persona1_mag, index, 1);
}

System::Void Form1::persona1_en_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_en->Value;

	setValue(COffsets::persona1_en, index, 1);
}

System::Void Form1::persona1_ag_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_ag->Value;

	setValue(COffsets::persona1_ag, index, 1);
}

System::Void Form1::persona1_lu_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_lu->Value;

	setValue(COffsets::persona1_luc, index, 1);
}

System::Void Form1::persona1_magic1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic1->SelectedIndex;

	setValue(COffsets::persona1_magic1, index, 2);
}

System::Void Form1::persona1_magic2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic2->SelectedIndex;

	setValue(COffsets::persona1_magic2, index, 2);
}

System::Void Form1::persona1_magic3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic3->SelectedIndex;

	setValue(COffsets::persona1_magic3, index, 2);
}

System::Void Form1::persona1_magic4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic4->SelectedIndex;

	setValue(COffsets::persona1_magic4, index, 2);
}

System::Void Form1::persona1_magic5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic5->SelectedIndex;

	setValue(COffsets::persona1_magic5, index, 2);
}

System::Void Form1::persona1_magic6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic6->SelectedIndex;

	setValue(COffsets::persona1_magic6, index, 2);
}

System::Void Form1::persona1_magic7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic7->SelectedIndex;

	setValue(COffsets::persona1_magic7, index, 2);
}

System::Void Form1::persona1_magic8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	int index = (int)persona1_magic8->SelectedIndex;

	setValue(COffsets::persona1_magic8, index, 2);
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

System::Void Form1::setValue(LONG pokeAddress, int value, int byteSize)
{
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS,0,pid);

	if (byteSize == 1)
		WriteProcessMemory(pHandle,(LPVOID)pokeAddress,&value,sizeof(bool),NULL);
	else if (byteSize == 2)
		WriteProcessMemory(pHandle,(LPVOID)pokeAddress,&value,sizeof(short int),NULL);
	else if (byteSize == 4)
		WriteProcessMemory(pHandle,(LPVOID)pokeAddress,&value,sizeof(long),NULL);

	CloseHandle(pHandle);
}