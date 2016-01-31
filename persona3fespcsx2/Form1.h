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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  num_mc_level;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NumericUpDown^  num_mc_current_mp;
	private: System::Windows::Forms::NumericUpDown^  num_mc_current_hp;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  num_mc_courage;
	private: System::Windows::Forms::NumericUpDown^  num_mc_charm;
	private: System::Windows::Forms::NumericUpDown^  mc_academics;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  mc_mood;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->num_mc_current_mp = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_current_hp = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num_mc_level = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->mc_mood = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->mc_academics = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_charm = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_courage = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_mp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_hp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_level))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mc_academics))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_charm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_courage))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			this->comboBox1->Location = System::Drawing::Point(16, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Persona Modifer";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(171, 260);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1st Persona Stats";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->num_mc_courage);
			this->groupBox2->Controls->Add(this->num_mc_charm);
			this->groupBox2->Controls->Add(this->mc_academics);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->mc_mood);
			this->groupBox2->Controls->Add(this->num_mc_current_mp);
			this->groupBox2->Controls->Add(this->num_mc_current_hp);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->num_mc_level);
			this->groupBox2->Location = System::Drawing::Point(229, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(190, 260);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"M.C. Stats";
			// 
			// num_mc_current_mp
			// 
			this->num_mc_current_mp->Location = System::Drawing::Point(126, 43);
			this->num_mc_current_mp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->num_mc_current_mp->Name = L"num_mc_current_mp";
			this->num_mc_current_mp->Size = System::Drawing::Size(57, 20);
			this->num_mc_current_mp->TabIndex = 5;
			this->num_mc_current_mp->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_current_mp_ValueChanged);
			// 
			// num_mc_current_hp
			// 
			this->num_mc_current_hp->Location = System::Drawing::Point(126, 17);
			this->num_mc_current_hp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->num_mc_current_hp->Name = L"num_mc_current_hp";
			this->num_mc_current_hp->Size = System::Drawing::Size(57, 20);
			this->num_mc_current_hp->TabIndex = 4;
			this->num_mc_current_hp->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_current_hp_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Current MP";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Current HP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Level";
			// 
			// num_mc_level
			// 
			this->num_mc_level->Location = System::Drawing::Point(6, 38);
			this->num_mc_level->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->num_mc_level->Name = L"num_mc_level";
			this->num_mc_level->Size = System::Drawing::Size(44, 20);
			this->num_mc_level->TabIndex = 0;
			this->num_mc_level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->num_mc_level->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// mc_mood
			// 
			this->mc_mood->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {L"Good", L"Normal", L"Great", 
				L"Tired"});
			this->mc_mood->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mc_mood->FormattingEnabled = true;
			this->mc_mood->Location = System::Drawing::Point(6, 86);
			this->mc_mood->Name = L"mc_mood";
			this->mc_mood->Size = System::Drawing::Size(121, 21);
			this->mc_mood->TabIndex = 6;
			this->mc_mood->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::mc_mood_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Mood";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Academics";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(83, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Charm";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(136, 119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Courage";
			// 
			// mc_academics
			// 
			this->mc_academics->Location = System::Drawing::Point(10, 135);
			this->mc_academics->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {260, 0, 0, 0});
			this->mc_academics->Name = L"mc_academics";
			this->mc_academics->Size = System::Drawing::Size(56, 20);
			this->mc_academics->TabIndex = 11;
			// 
			// num_mc_charm
			// 
			this->num_mc_charm->Location = System::Drawing::Point(71, 135);
			this->num_mc_charm->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->num_mc_charm->Name = L"num_mc_charm";
			this->num_mc_charm->Size = System::Drawing::Size(56, 20);
			this->num_mc_charm->TabIndex = 12;
			// 
			// num_mc_courage
			// 
			this->num_mc_courage->Location = System::Drawing::Point(133, 135);
			this->num_mc_courage->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->num_mc_courage->Name = L"num_mc_courage";
			this->num_mc_courage->Size = System::Drawing::Size(56, 20);
			this->num_mc_courage->TabIndex = 13;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 470);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Persona 3 Trainer - PCSX 2";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_mp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_hp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_level))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mc_academics))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_charm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_courage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void num_mc_current_hp_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void num_mc_current_mp_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void mc_mood_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void setValue(LONG pokeAddress, int value);
};
}

