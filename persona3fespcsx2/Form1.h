#pragma once

#include <Windows.h>

namespace persona3fespcsx2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(191) {L"0x000", L"Orpheus", L"Susano-o", L"Flauros", 
				L"Loki", L"Nekomata", L"Pyro Jack", L"Jack Frost", L"Scathach", L"Rangda", L"Nata Taishi", L"Cu Chulainn", L"Ose", L"Kusi Mitama", 
				L"Apsaras", L"Laksmi", L"Parvati", L"Kikuri-Hime", L"Sati", L"Sarasvati", L"Unicorn", L"Cybele", L"Skadi", L"Hariti", L"Kali", 
				L"Ganga", L"Taraka", L"Lamia", L"Odin", L"King Frost", L"Okuninushi", L"Kingu", L"Raja Naga", L"Forneus", L"Kohryu", L"Mithra", 
				L"Daisoujou", L"Ananta", L"Omoikane", L"Principality", L"Raphael", L"Titania", L"Oberon", L"Narcissus", L"Queen Mab", L"Leanan Sidhe", 
				L"Pixie", L"Uriel", L"Surt", L"Throne", L"Ares", L"Titan", L"Chimera", L"Ara Mitama", L"Valkyrie", L"Melchizedek", L"Dominion", 
				L"Siegfried", L"Virtue", L"Power", L"Archangel", L"Angel", L"Alilat", L"Arahabaki", L"Nebiros", L"Decarabia", L"Kurama Tengu", 
				L"Yomotsu Shikome", L"Naga", L"Norn", L"Atropos", L"Orobas", L"Lachesis", L"Saki Mitama", L"Eligor", L"Clotho", L"Fortuna", L"Thor", 
				L"Bishamonten", L"Take-Mikazuchi", L"Jikokuten", L"Hanuman", L"Koumokuten", L"Zouchouten", L"Attis", L"Vasuki", L"Orthrus", L"Take-Minakata", 
				L"Ubelluris", L"Inugami", L"Thanatos", L"Alice", L"Seth", L"Mot", L"Samael", L"Vetala", L"Loa", L"Pale Rider", L"Michael", L"Byakko", 
				L"Suzaku", L"Seiryu", L"Nigi Mitama", L"Genbu", L"Beelzebub", L"Mother Harlot", L"Abaddon", L"Lilith", L"Incubus", L"Succubus", 
				L"Lilim", L"Chi You", L"Shiva", L"Masakado", L"Seiten Taisei", L"Yamano-orochi", L"Oumitsunu", L"Helel", L"Sandalphon", L"Black Frost", 
				L"Garuda", L"Kaiwan", L"Ganesha", L"Nandi", L"Chernobog", L"Sionysus", L"Narasimha", L"Girimehkala", L"Gurr", L"Legion", L"Berith", 
				L"Saturnus", L"Vishnu", L"Barong", L"Jatayu", L"Horus", L"Quetzalcoatl", L"Yatagarasu", L"Messiah", L"Asura", L"Metatron", L"Satan", 
				L"Gabriel", L"Hokuto Seikun", L"Trumpeter", L"Anubis", L"Slime", L"Hua Po", L"High Pixie", L"Yaksini", L"Shiisaa", L"Thoth", 
				L"Alp", L"Mothman", L"Kumbhanda", L"Empusa", L"Rakshasa", L"Hecatoncheires", L"Hell Biker", L"Ghoul", L"Yurlungur", L"Pazuzu", 
				L"Mara", L"Kartikeya", L"Baal Zebul", L"Suparna", L"Lucifer", L"Nidhoggr", L"Atavaka", L"Orpheus Telos", L"Universe", L"Io", 
				L"Isis", L"Palladion", L"Athena", L" Penthesilea", L"Artemisia", L"Hermes", L"Trismegistus", L"Lucia", L"Juno", L"Polydeusces", 
				L"Caesar", L"Nemesis", L"Kala-Nemi", L"Castor", L"Cerbeus", L"Hypnos", L"Moros", L"Medea", L"Psyche"});
			this->comboBox1->Location = System::Drawing::Point(59, 110);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	};
}

