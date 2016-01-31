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
	private: System::Windows::Forms::NumericUpDown^  num_mc_equip_persona;
	private: System::Windows::Forms::NumericUpDown^  num_mc_money;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  persona1_level;
	private: System::Windows::Forms::NumericUpDown^  persona1_lu;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::NumericUpDown^  persona1_ag;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::NumericUpDown^  persona1_en;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::NumericUpDown^  persona1_ma;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::NumericUpDown^  persona1_st;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  persona1_magic1;
	private: System::Windows::Forms::ComboBox^  persona1_magic8;

	private: System::Windows::Forms::ComboBox^  persona1_magic7;

	private: System::Windows::Forms::ComboBox^  persona1_magic6;

	private: System::Windows::Forms::ComboBox^  persona1_magic5;

	private: System::Windows::Forms::ComboBox^  persona1_magic4;
	private: System::Windows::Forms::ComboBox^  persona1_magic3;
	private: System::Windows::Forms::ComboBox^  persona1_magic2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->persona1_magic8 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic7 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic6 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic5 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic4 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic3 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_magic2 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->persona1_magic1 = (gcnew System::Windows::Forms::ComboBox());
			this->persona1_lu = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->persona1_ag = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->persona1_en = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->persona1_ma = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->persona1_st = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->persona1_level = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->num_mc_equip_persona = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_money = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->num_mc_courage = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_charm = (gcnew System::Windows::Forms::NumericUpDown());
			this->mc_academics = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mc_mood = (gcnew System::Windows::Forms::ComboBox());
			this->num_mc_current_mp = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_mc_current_hp = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num_mc_level = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_lu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_ag))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_en))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_ma))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_st))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_level))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_equip_persona))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_money))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_courage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_charm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mc_academics))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_mp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_hp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_level))->BeginInit();
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
			this->comboBox1->Location = System::Drawing::Point(9, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Persona Modifer";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->persona1_magic8);
			this->groupBox1->Controls->Add(this->persona1_magic7);
			this->groupBox1->Controls->Add(this->persona1_magic6);
			this->groupBox1->Controls->Add(this->persona1_magic5);
			this->groupBox1->Controls->Add(this->persona1_magic4);
			this->groupBox1->Controls->Add(this->persona1_magic3);
			this->groupBox1->Controls->Add(this->persona1_magic2);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->persona1_magic1);
			this->groupBox1->Controls->Add(this->persona1_lu);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->persona1_ag);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->persona1_en);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->persona1_ma);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->persona1_st);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->persona1_level);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(218, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 446);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1st Persona Stats";
			// 
			// persona1_magic8
			// 
			this->persona1_magic8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic8->FormattingEnabled = true;
			this->persona1_magic8->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic8->Location = System::Drawing::Point(9, 411);
			this->persona1_magic8->Name = L"persona1_magic8";
			this->persona1_magic8->Size = System::Drawing::Size(121, 21);
			this->persona1_magic8->TabIndex = 39;
			this->persona1_magic8->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic8_SelectedIndexChanged);
			// 
			// persona1_magic7
			// 
			this->persona1_magic7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic7->FormattingEnabled = true;
			this->persona1_magic7->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic7->Location = System::Drawing::Point(9, 384);
			this->persona1_magic7->Name = L"persona1_magic7";
			this->persona1_magic7->Size = System::Drawing::Size(121, 21);
			this->persona1_magic7->TabIndex = 38;
			this->persona1_magic7->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic7_SelectedIndexChanged);
			// 
			// persona1_magic6
			// 
			this->persona1_magic6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic6->FormattingEnabled = true;
			this->persona1_magic6->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic6->Location = System::Drawing::Point(9, 357);
			this->persona1_magic6->Name = L"persona1_magic6";
			this->persona1_magic6->Size = System::Drawing::Size(121, 21);
			this->persona1_magic6->TabIndex = 37;
			this->persona1_magic6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic6_SelectedIndexChanged);
			// 
			// persona1_magic5
			// 
			this->persona1_magic5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic5->FormattingEnabled = true;
			this->persona1_magic5->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic5->Location = System::Drawing::Point(9, 330);
			this->persona1_magic5->Name = L"persona1_magic5";
			this->persona1_magic5->Size = System::Drawing::Size(121, 21);
			this->persona1_magic5->TabIndex = 36;
			this->persona1_magic5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic5_SelectedIndexChanged);
			// 
			// persona1_magic4
			// 
			this->persona1_magic4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic4->FormattingEnabled = true;
			this->persona1_magic4->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic4->Location = System::Drawing::Point(9, 303);
			this->persona1_magic4->Name = L"persona1_magic4";
			this->persona1_magic4->Size = System::Drawing::Size(121, 21);
			this->persona1_magic4->TabIndex = 35;
			this->persona1_magic4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic4_SelectedIndexChanged);
			// 
			// persona1_magic3
			// 
			this->persona1_magic3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic3->FormattingEnabled = true;
			this->persona1_magic3->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic3->Location = System::Drawing::Point(9, 276);
			this->persona1_magic3->Name = L"persona1_magic3";
			this->persona1_magic3->Size = System::Drawing::Size(121, 21);
			this->persona1_magic3->TabIndex = 34;
			this->persona1_magic3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic3_SelectedIndexChanged);
			// 
			// persona1_magic2
			// 
			this->persona1_magic2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic2->FormattingEnabled = true;
			this->persona1_magic2->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic2->Location = System::Drawing::Point(9, 249);
			this->persona1_magic2->Name = L"persona1_magic2";
			this->persona1_magic2->Size = System::Drawing::Size(121, 21);
			this->persona1_magic2->TabIndex = 33;
			this->persona1_magic2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic2_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 206);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Magic (1-8)";
			// 
			// persona1_magic1
			// 
			this->persona1_magic1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->persona1_magic1->FormattingEnabled = true;
			this->persona1_magic1->Items->AddRange(gcnew cli::array< System::Object^  >(624) {L"Slash Attack", L"Agi", L"Agilao", L"Agidyne", 
				L"Maragi", L"Maragion", L"Maragidyne", L"Maralagidyne", L"0x008", L"Ragnarok", L"Garu", L"Garula", L"Garudyne", L"Magaru", L"Magarula", 
				L"Magarudyne", L"0x010", L"0x011", L"Panta Rhei", L"Bufu", L"Bufula", L"Bufudyne", L"Mabufu", L"Mabufula", L"Mabufudyne", L"0x019", 
				L"0x01A", L"Niflheim", L"Zio", L"Zionga", L"Ziodyne", L"Mazio", L"Mazionga", L"Maziodyne", L"0x022", L"0x023", L"Thunder Reign", 
				L"Megido", L"Megidola", L"Megidolaon", L"Last Resort", L"0x029", L"0x02A", L"Black Viper", L"Morning Star", L"Hama", L"Mahama", 
				L"Hamaon", L"Mahamaon", L"0x031", L"Samsara", L"Mudo", L"Mamudo", L"Mudoon", L"Mamudoon", L"0x037", L"Die for Me!", L"Marin Karin", 
				L"Sexy Dance", L"Bewilder", L"Eerie Sound", L"Pulinpa", L"Tentarafoo", L"Evil Touch", L"Evil Smile", L"Ghastly Wail", L"Provoke", 
				L"Infuriate", L"Poisma", L"Poison Mist", L"Virus Breath", L"0x047", L"0x048", L"Foul Breath", L"Stagnant Air", L"Life Drain", 
				L"Spirit Drain", L"0x04D", L"0x04E", L"0x04F", L"Maragidyne", L"Magarudyne", L"Mabufudyne", L"Maziodyne", L"Megidolaon", L"Mahamaon", 
				L"Mamudoon", L"Sexy Dance", L"Eerie Sound", L"Tentarafoo", L"Evil Smile", L"Poison Mist", L"Holy Arrow", L"Life Drain", L"Spirit Drain", 
				L"0x05F", L"Death", L"Yell", L"Yell", L"Death", L"Death", L"Death", L"Moonless Gown", L"Moonless Gown", L"Summon", L"Slash Attack", 
				L"Pierce Attack", L"Strike Attack", L"Yell", L"Pierce Attack", L"Fire Attack", L"Almighty Attack", L"Bash", L"Assault Dive", 
				L"Kill Rush", L"Swift Strike", L"Sonic Punch", L"Heat Wave", L"Gigantic Fist", L"Akasha Arts", L"God\'s Hand", L"Cleave", L"Fatal End", 
				L"Getsu-ei", L"Zan-ei", L"Mighty Swing", L"Double Fangs", L"Blade of Fury", L"Deathbound", L"Tempest Slash", L"Heaven\'s Blade", 
				L"Pralaya", L"Power Slash", L"Gale Slash", L"Brave Blade", L"Herculean Strike", L"Vicious Strike", L"Single Shot", L"Twin Shot", 
				L"Holy Arrow", L"Torrent Shot", L"Arrow Rain", L"Myriad Arrows", L"Primal Force", L"Vorpal Blade", L"Weary Thrust", L"Cruel Attack", 
				L"Vile Assault", L"Poison Arrow", L"Weary Thrust", L"Vorpal Blade", L"0x097", L"0x098", L"0x099", L"0x09A", L"0x09B", L"0x09C", 
				L"0x09D", L"0x09E", L"0x09F", L"+charm(low)", L"+charm(med)", L"+charm(high)", L"+distress(low)", L"+distress(med)", L"+distress(high)", 
				L"+panic(low)", L"+panic(med)", L"+panic(high)", L"+fear(low)", L"+fear(med)", L"+fear(high)", L"+rage(low)", L"+rage(med)", 
				L"+rage(high)", L"+poison(low)", L"0x0B0", L"0x0B1", L"0x0B2", L"0x0B3", L"0x0B4", L"0x0B5", L"0x0B6", L"0x0B7", L"0x0B8", L"0x0B9", 
				L"0x0BA", L"0x0BB", L"0x0BC", L"0x0BD", L"0x0BE", L"0x0BF", L"Dia", L"Diarama", L"Diarahan", L"Media", L"Mediarama", L"Mediarahan", 
				L"Salvation", L"Patra", L"Me Patra", L"Re Patra", L"Posumudi", L"Amrita", L"Recarm", L"Samarecarm", L"Tarunda", L"Matarunda", 
				L"Sukunda", L"Masukunda", L"Rakunda", L"Marakunda", L"Dekunda", L"0x0D5", L"Tarukaja", L"Matarukaja", L"Sukukaja", L"Masukukaja", 
				L"Rakukaja", L"Marakukaja", L"Power Charge", L"Mind Charge", L"0x0DE", L"Dekaja", L"Tetrakarn", L"Makarakarn", L"Rebellion", 
				L"Revolution", L"0x0E4", L"Fire Break", L"Ice Break", L"Wind Break", L"Elec Break", L"Traesto", L"Trafuri", L"Healing Wave", 
				L"Recarmdra", L"Charmdi", L"Enradi", L"0x0EF", L"0x0F0", L"0x0F1", L"0x0F2", L"0x0F3", L"0x0F4", L"0x0F5", L"0x0F6", L"0x0F7", 
				L"0x0F8", L"0x0F9", L"0x0FA", L"0x0FB", L"0x0FC", L"0x0FD", L"0x0FE", L"0x0FF", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", 
				L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Summer Dream", L"Jack Brothers", L"Ardhanari", L"Trickster", 
				L"Infinity", L"Valhalla", L"Summer Dream", L"Armageddon", L"Cadenza", L"Scarlet Havoc", L"Frolic", L"Dreamfest", L"King and I", 
				L"Best Friends", L"Shadow Hound", L"Thunder Call", L"Last Judge", L"Raktapaksha", L"Justice", L"Trickster", L"0x123", L"0x124", 
				L"Primal Darkness", L"Dark Embrace", L"Primal Darkness", L"Primal Darkness", L"0x129", L"0x12A", L"0x12B", L"0x12C", L"0x12D", 
				L"0x12E", L"0x12F", L"Pierce Attack", L"Fire Attack", L"Summon", L"Summon", L"Armed&Ready", L"Sacrifice", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Arcana Shift", L"Night Queen", 
				L"All-Out 2", L"All-Out 3", L"All-Out 4", L"Plume of Dusk", L"Analyze", L"Oracle", L"Full Analysis", L"Oracle", L"Oracle", L"Oracle", 
				L"Oracle", L"Oracle", L"All-Out 2L", L"All-Out 3L", L"All-Out 4L", L"Support Scan", L"Third Eye", L"Mind DJ", L"DJ Queen", L"Escape Route", 
				L"Healing Wave", L"Summon", L"Orgia Mode", L"Great Seal", L"0x158", L"0x159", L"Ice Attack", L"Wind Attack", L"Elec Attack", 
				L"Fire Attack", L"Pierce Attack", L"Strike Attack", L"Summon", L"Summon", L"Summon", L"Prophecy of Ruin", L"Heartbreaker", L"Unite", 
				L"Separate", L"Pierce Attack", L"Pierce Attack", L"Samarecarm", L"Samarecarm", L"Charge", L"Giga Spark", L"Wheel of Fortune", 
				L"Wheel of Fortune", L"Wheel of Fortune", L"Paradigm Shift", L"Wheel of Fortune", L"Wheel of Fortune", L"E Attack Up", L"P Attack Up", 
				L"E Attack Down", L"P Attack Down", L"E Defense Up", L"P Defense Up", L"E Defense Down", L"P Defense Down", L"E Panic", L"P Panic", 
				L"E Rage", L"P Rage", L"E Distress", L"P Distress", L"E Fear", L"P Fear", L"E Damage Low", L"P Damage Low", L"E Damage Mid", 
				L"P Damage Mid", L"E Damage High", L"P Damage High", L"E Heal", L"P Heal", L"Almighty Attack", L"Arcana Shift", L"Arcana Shift", 
				L"Arcana Shift", L"Arcana Shift", L"Band Aid", L"Medicine", L"Bead", L"Snuff Soul", L"Chewing Soul", L"Precious Egg", L"Soma", 
				L"0x197", L"0x198", L"0x199", L"0x19A", L"Muscle Drink", L"Odd Morsel", L"Rancid Gravy", L"Powerful Drug", L"Cold Medicine", 
				L"Energy Drink", L"0x1A1", L"0x1A2", L"0x1A3", L"0x1A4", L"0x1A5", L"0x1A6", L"0x1A7", L"0x1A8", L"0x1A9", L"0x1AA", L"0x1AB", 
				L"0x1AC", L"0x1AD", L"0x1AE", L"0x1AF", L"0x1B0", L"0x1B1", L"0x1B2", L"0x1B3", L"0x1B4", L"0x1B5", L"Homunculus", L"Plume of Dusk", 
				L"0x1B8", L"0x1B9", L"0x1BA", L"0x1BB", L"0x1BC", L"0x1BD", L"0x1BE", L"0x1BF", L"0x1C0", L"0x1C1", L"0x1C2", L"0x1C3", L"0x1C4", 
				L"0x1C5", L"0x1C6", L"0x1C7", L"0x1C8", L"0x1C9", L"0x1CA", L"0x1CB", L"0x1CC", L"0x1CD", L"0x1CE", L"0x1CF", L"Resist Slash", 
				L"Null Slash", L"Repel Slash", L"Absorb Slash", L"Resist Strike", L"Null Strike", L"Repel Strike", L"Absorb Strike", L"Resist Pierce", 
				L"Null Pierce", L"Repel Pierce", L"Absorb Pierce", L"Resist Fire", L"Null Fire", L"Repel Fire", L"Absorb Fire", L"Resist Ice", 
				L"Null Ice", L"Repel Ice", L"Absorb Ice", L"Resist Elec", L"Null Elec", L"Repel Elec", L"Absorb Elec", L"Resist Wind", L"Null Wind", 
				L"Repel Wind", L"Absorb Wind", L"Resist Light", L"Null Light", L"Repel Light", L"Resist Dark", L"Null Dark", L"Repel Dark", L"Null Charm", 
				L"Null Distress", L"Null Panic", L"Null Fear", L"Null Rage", L"Null Freeze", L"Null Shock", L"Null Poison", L"Unshaken Will", 
				L"Masakados", L"Dodge Slash", L"Evade Slash", L"Dodge Strike", L"Evade Strike", L"Dodge Pierce", L"Evade Pierce", L"Dodge Fire", 
				L"Evade Fire", L"Dodge Ice", L"Evade Ice", L"Dodge Wind", L"Evade Wind", L"Dodge Elec", L"Evade Elec", L"Stamina Up 1", L"Stamina Up 2", 
				L"Stamina Up 3", L"0x20D", L"Premonition", L"Angelic Grace", L"Fire Boost", L"Fire Amp", L"Ice Boost", L"Ice Amp", L"Elec Boost", 
				L"Elec Amp", L"Wind Boost", L"Wind Amp", L"Fast Retreat", L"HP Up 1", L"HP Up 2", L"HP Up 3", L"SP Up 1", L"SP Up 2", L"SP Up 3", 
				L"Raging Tiger", L"Counter", L"Counterstrike", L"High Counter", L"Regenerate 1", L"Regenerate 2", L"Regenerate 3", L"Invigorate 1", 
				L"Invigorate 2", L"Invigorate 3", L"Growth 1", L"Growth 2", L"Growth 3", L"0x22C", L"Auto-Tarukaja", L"Auto-Rakukaja", L"Auto-Sukukaja", 
				L"Alertness", L"Sharp Student", L"Apt Pupil", L"Ali Dance", L"Firm Stance", L"Spell Master", L"Arms Master", L"HP Up", L"SP Up", 
				L"0x239", L"Divine Grace", L"Endure", L"Enduring Soul", L"Heavy Master", L"Magic Skill Up", L"Phys Skill Up", L"0x240", L"0x240", 
				L"0x240", L"0x243", L"Rosary", L"Prayer Beads", L"Spear Master", L"Bow Master", L"1hSwd Master", L"2hSwd Master", L"Fist Master", 
				L"Survive Light", L"Survive Dark", L"Auto-Maraku", L"Auto-Mataru", L"Auto-Masuku", L"Charm Boost", L"Poison Boost", L"Distress Boost", 
				L"Panic Boost", L"Fear Boost", L"Rage Boost", L"Ailment Boost", L"Hama Boost", L"Mudo Boost", L"Endure Light", L"Endure Dark", 
				L"0x25B", L"0x25C", L"Cool Breeze", L"Victory Cry", L"Spring of Life", L"Spring of Life", L"For Debug", L"Fast-Heal", L"Insta-Heal", 
				L"Resist Charm", L"Resist Distress", L"Resist Panic", L"Resist Fear", L"Resist Rage", L"Resist Freeze", L"Resist Shock", L"Resist Poison", 
				L"HP Up High", L"SP Up High", L"0x26E", L"0x26F"});
			this->persona1_magic1->Location = System::Drawing::Point(9, 222);
			this->persona1_magic1->Name = L"persona1_magic1";
			this->persona1_magic1->Size = System::Drawing::Size(121, 21);
			this->persona1_magic1->TabIndex = 31;
			this->persona1_magic1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::persona1_magic1_SelectedIndexChanged);
			// 
			// persona1_lu
			// 
			this->persona1_lu->Location = System::Drawing::Point(86, 176);
			this->persona1_lu->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_lu->Name = L"persona1_lu";
			this->persona1_lu->Size = System::Drawing::Size(44, 20);
			this->persona1_lu->TabIndex = 30;
			this->persona1_lu->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_lu->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_lu_ValueChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(63, 178);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Lu";
			// 
			// persona1_ag
			// 
			this->persona1_ag->Location = System::Drawing::Point(86, 150);
			this->persona1_ag->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_ag->Name = L"persona1_ag";
			this->persona1_ag->Size = System::Drawing::Size(44, 20);
			this->persona1_ag->TabIndex = 28;
			this->persona1_ag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_ag->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_ag_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(63, 152);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Ag";
			// 
			// persona1_en
			// 
			this->persona1_en->Location = System::Drawing::Point(86, 124);
			this->persona1_en->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_en->Name = L"persona1_en";
			this->persona1_en->Size = System::Drawing::Size(44, 20);
			this->persona1_en->TabIndex = 26;
			this->persona1_en->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_en->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_en_ValueChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(63, 126);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"En";
			// 
			// persona1_ma
			// 
			this->persona1_ma->Location = System::Drawing::Point(86, 99);
			this->persona1_ma->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_ma->Name = L"persona1_ma";
			this->persona1_ma->Size = System::Drawing::Size(44, 20);
			this->persona1_ma->TabIndex = 24;
			this->persona1_ma->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_ma->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_ma_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(63, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Ma";
			// 
			// persona1_st
			// 
			this->persona1_st->Location = System::Drawing::Point(86, 73);
			this->persona1_st->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_st->Name = L"persona1_st";
			this->persona1_st->Size = System::Drawing::Size(44, 20);
			this->persona1_st->TabIndex = 22;
			this->persona1_st->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_st->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_st_ValueChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(63, 75);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"St";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Level";
			// 
			// persona1_level
			// 
			this->persona1_level->Location = System::Drawing::Point(9, 86);
			this->persona1_level->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->persona1_level->Name = L"persona1_level";
			this->persona1_level->Size = System::Drawing::Size(44, 20);
			this->persona1_level->TabIndex = 18;
			this->persona1_level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->persona1_level->ValueChanged += gcnew System::EventHandler(this, &Form1::persona1_level_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->num_mc_equip_persona);
			this->groupBox2->Controls->Add(this->num_mc_money);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
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
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 211);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"M.C. Stats";
			// 
			// num_mc_equip_persona
			// 
			this->num_mc_equip_persona->Location = System::Drawing::Point(39, 86);
			this->num_mc_equip_persona->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {11, 0, 0, 0});
			this->num_mc_equip_persona->Name = L"num_mc_equip_persona";
			this->num_mc_equip_persona->Size = System::Drawing::Size(56, 20);
			this->num_mc_equip_persona->TabIndex = 17;
			this->num_mc_equip_persona->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_equip_persona_ValueChanged);
			// 
			// num_mc_money
			// 
			this->num_mc_money->Location = System::Drawing::Point(113, 127);
			this->num_mc_money->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999999, 0, 0, 0});
			this->num_mc_money->Name = L"num_mc_money";
			this->num_mc_money->Size = System::Drawing::Size(81, 20);
			this->num_mc_money->TabIndex = 16;
			this->num_mc_money->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_money_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(152, 111);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Money";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Equipped Persona Slot";
			// 
			// num_mc_courage
			// 
			this->num_mc_courage->Location = System::Drawing::Point(135, 176);
			this->num_mc_courage->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->num_mc_courage->Name = L"num_mc_courage";
			this->num_mc_courage->Size = System::Drawing::Size(56, 20);
			this->num_mc_courage->TabIndex = 13;
			this->num_mc_courage->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_courage_ValueChanged);
			// 
			// num_mc_charm
			// 
			this->num_mc_charm->Location = System::Drawing::Point(73, 176);
			this->num_mc_charm->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->num_mc_charm->Name = L"num_mc_charm";
			this->num_mc_charm->Size = System::Drawing::Size(56, 20);
			this->num_mc_charm->TabIndex = 12;
			this->num_mc_charm->ValueChanged += gcnew System::EventHandler(this, &Form1::num_mc_charm_ValueChanged);
			// 
			// mc_academics
			// 
			this->mc_academics->Location = System::Drawing::Point(12, 176);
			this->mc_academics->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {260, 0, 0, 0});
			this->mc_academics->Name = L"mc_academics";
			this->mc_academics->Size = System::Drawing::Size(56, 20);
			this->mc_academics->TabIndex = 11;
			this->mc_academics->ValueChanged += gcnew System::EventHandler(this, &Form1::mc_academics_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(138, 160);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Courage";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Charm";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Academics";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Mood";
			// 
			// mc_mood
			// 
			this->mc_mood->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {L"Good", L"Normal", L"Great", 
				L"Tired"});
			this->mc_mood->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mc_mood->FormattingEnabled = true;
			this->mc_mood->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Good", L"Normal", L"Great", L"Tired"});
			this->mc_mood->Location = System::Drawing::Point(8, 127);
			this->mc_mood->Name = L"mc_mood";
			this->mc_mood->Size = System::Drawing::Size(75, 21);
			this->mc_mood->TabIndex = 6;
			this->mc_mood->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::mc_mood_SelectedIndexChanged);
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 470);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Persona 3 Trainer - PCSX 2";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_lu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_ag))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_en))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_ma))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_st))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->persona1_level))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_equip_persona))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_money))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_courage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_charm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mc_academics))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_mp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_current_hp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_mc_level))->EndInit();
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
	private: System::Void setValue(LONG pokeAddress, int value, int byteSize);
	private: System::Void mc_academics_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void num_mc_charm_ValueChanged(System::Object^  sender, System::EventArgs^  e);	
	private: System::Void num_mc_courage_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void num_mc_equip_persona_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void num_mc_money_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_level_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_st_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_ma_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_en_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_ag_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_lu_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void persona1_magic8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
};
}

