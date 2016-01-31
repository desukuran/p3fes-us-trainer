#include <Windows.h>

#pragma once
ref class COffsets
{
public:
	COffsets(void);
	
	//MC
	static LONG mc_level = 0x2083622A;
	static LONG mc_current_hp = 0x2083622C;
	static LONG mc_current_mp = 0x2083622E;
	static LONG mc_equipped_persona = 0x20836BA8;
	static LONG mc_mood = 0x2083626C;
	static LONG mc_academics = 0x20836260;
	static LONG mc_charm = 0x20836262;
	static LONG mc_courage = 0x20836264;
	static LONG mc_money = 0x2083A6DC;

	//Persona 1
	static LONG persona1_modifer = 0x20836BAE;
	static LONG persona1_level = 0x20836BB0;
	static LONG persona1_str = 0x20836BC8;
	static LONG persona1_mag = 0x20836BC9;
	static LONG persona1_en = 0x20836BCA;
	static LONG persona1_ag = 0x20836BCB;
	static LONG persona1_luc = 0x20836BCC;
	static LONG persona1_magic1 = 0x20836BB8;
	static LONG persona1_magic2 = 0x20836BBA;
	static LONG persona1_magic3 = 0x20836BBC;
	static LONG persona1_magic4 = 0x20836BBE;
	static LONG persona1_magic5 = 0x20836BC0;
	static LONG persona1_magic6 = 0x20836BC2;
	static LONG persona1_magic7 = 0x20836BC4;
	static LONG persona1_magic8 = 0x20836BC6;

};

