#pragma once

namespace AppCSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		String^ konfig = L"datasource = 127.0.0.1; port = 3306; username = root; password = 234aaa;database = baza_danych";
		int id_uzytkownika, id_teraz, czy_pracownik;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  txtPON_koniec;
	public:

	private: System::Windows::Forms::Label^  label_pon;
	private: System::Windows::Forms::TextBox^  txtPON_poczatek;
	private: System::Windows::Forms::TextBox^  txtWT_koniec;


	private: System::Windows::Forms::Label^  label_wt;
	private: System::Windows::Forms::TextBox^  txtWT_poczatek;
	private: System::Windows::Forms::TextBox^  txtSR_koniec;


	private: System::Windows::Forms::Label^  label_sr;
	private: System::Windows::Forms::TextBox^  txtSR_poczatek;
	private: System::Windows::Forms::TextBox^  txtCZ_koniec;


	private: System::Windows::Forms::Label^  label_czw;
	private: System::Windows::Forms::TextBox^  txtCZ_poczatek;
	private: System::Windows::Forms::TextBox^  txtPT_koniec;


	private: System::Windows::Forms::Label^  label_pt;
	private: System::Windows::Forms::TextBox^  txtPT_poczatek;
	private: System::Windows::Forms::TextBox^  txtSO_koniec;


	private: System::Windows::Forms::Label^  label_sob;
	private: System::Windows::Forms::TextBox^  txtSO_poczatek;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button_szablon3;
	private: System::Windows::Forms::Button^  button_szablon2;
	private: System::Windows::Forms::Button^  button_szablon1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button_DodajUzytkownika;
	public:
			 Program(int numer_uzytkownika)
		{
			InitializeComponent();
			id_uzytkownika = numer_uzytkownika;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_UsunUzytkownika;
	private: System::Windows::Forms::Button^  button_ModyfikujUzytkownika;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txt_Edycja_Login;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txt_Edycja_Nazwisko;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_Edycja_Imie;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox_Pracownik;
	private: System::Windows::Forms::TextBox^  txt_Pracownicy_szukaj;
	private: System::Windows::Forms::Label^  label_pracownicy_szukaj;
	private: System::Windows::Forms::Button^  button_pracownicy_szukaj;
	private: System::Windows::Forms::DataGridView^  dataGridView_siatkaPracownikow;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txt_Nowe_haslo2;
	private: System::Windows::Forms::TextBox^  txt_Nowe_haslo;
	private: System::Windows::Forms::TextBox^  txt_Stare_haslo;
	private: System::Windows::Forms::Label^  label_noweHaslo2;
	private: System::Windows::Forms::Label^  label_noweHaslo;
	private: System::Windows::Forms::Label^  label_stareHaslo;
	private: System::Windows::Forms::Button^  button_Zmien_haslo;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button_szablon3 = (gcnew System::Windows::Forms::Button());
			this->button_szablon2 = (gcnew System::Windows::Forms::Button());
			this->button_szablon1 = (gcnew System::Windows::Forms::Button());
			this->txtPON_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_pon = (gcnew System::Windows::Forms::Label());
			this->txtPON_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->txtWT_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_wt = (gcnew System::Windows::Forms::Label());
			this->txtWT_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->txtSR_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_sr = (gcnew System::Windows::Forms::Label());
			this->txtSR_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->txtCZ_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_czw = (gcnew System::Windows::Forms::Label());
			this->txtCZ_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->txtPT_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_pt = (gcnew System::Windows::Forms::Label());
			this->txtPT_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->txtSO_koniec = (gcnew System::Windows::Forms::TextBox());
			this->label_sob = (gcnew System::Windows::Forms::Label());
			this->txtSO_poczatek = (gcnew System::Windows::Forms::TextBox());
			this->button_DodajUzytkownika = (gcnew System::Windows::Forms::Button());
			this->button_UsunUzytkownika = (gcnew System::Windows::Forms::Button());
			this->button_ModyfikujUzytkownika = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_Edycja_Login = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Edycja_Nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_Edycja_Imie = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox_Pracownik = (gcnew System::Windows::Forms::CheckBox());
			this->txt_Pracownicy_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->label_pracownicy_szukaj = (gcnew System::Windows::Forms::Label());
			this->button_pracownicy_szukaj = (gcnew System::Windows::Forms::Button());
			this->dataGridView_siatkaPracownikow = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_Nowe_haslo2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nowe_haslo = (gcnew System::Windows::Forms::TextBox());
			this->txt_Stare_haslo = (gcnew System::Windows::Forms::TextBox());
			this->label_noweHaslo2 = (gcnew System::Windows::Forms::Label());
			this->label_noweHaslo = (gcnew System::Windows::Forms::Label());
			this->label_stareHaslo = (gcnew System::Windows::Forms::Label());
			this->button_Zmien_haslo = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_siatkaPracownikow))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(973, 451);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->button_DodajUzytkownika);
			this->tabPage1->Controls->Add(this->button_UsunUzytkownika);
			this->tabPage1->Controls->Add(this->button_ModyfikujUzytkownika);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->txt_Pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->label_pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->button_pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->dataGridView_siatkaPracownikow);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(965, 425);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pracownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Program::tabPage1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->txtPON_koniec);
			this->groupBox3->Controls->Add(this->label_pon);
			this->groupBox3->Controls->Add(this->txtPON_poczatek);
			this->groupBox3->Controls->Add(this->txtWT_koniec);
			this->groupBox3->Controls->Add(this->label_wt);
			this->groupBox3->Controls->Add(this->txtWT_poczatek);
			this->groupBox3->Controls->Add(this->txtSR_koniec);
			this->groupBox3->Controls->Add(this->label_sr);
			this->groupBox3->Controls->Add(this->txtSR_poczatek);
			this->groupBox3->Controls->Add(this->txtCZ_koniec);
			this->groupBox3->Controls->Add(this->label_czw);
			this->groupBox3->Controls->Add(this->txtCZ_poczatek);
			this->groupBox3->Controls->Add(this->txtPT_koniec);
			this->groupBox3->Controls->Add(this->label_pt);
			this->groupBox3->Controls->Add(this->txtPT_poczatek);
			this->groupBox3->Controls->Add(this->txtSO_koniec);
			this->groupBox3->Controls->Add(this->label_sob);
			this->groupBox3->Controls->Add(this->txtSO_poczatek);
			this->groupBox3->Location = System::Drawing::Point(707, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(252, 401);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Godziny pracy";
			this->groupBox3->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button_szablon3);
			this->groupBox4->Controls->Add(this->button_szablon2);
			this->groupBox4->Controls->Add(this->button_szablon1);
			this->groupBox4->Location = System::Drawing::Point(6, 330);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(240, 65);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Szablony godzin";
			// 
			// button_szablon3
			// 
			this->button_szablon3->Location = System::Drawing::Point(161, 18);
			this->button_szablon3->Name = L"button_szablon3";
			this->button_szablon3->Size = System::Drawing::Size(73, 41);
			this->button_szablon3->TabIndex = 2;
			this->button_szablon3->Text = L"9 - 17";
			this->button_szablon3->UseVisualStyleBackColor = true;
			this->button_szablon3->Click += gcnew System::EventHandler(this, &Program::button_szablon3_Click);
			// 
			// button_szablon2
			// 
			this->button_szablon2->Location = System::Drawing::Point(86, 18);
			this->button_szablon2->Name = L"button_szablon2";
			this->button_szablon2->Size = System::Drawing::Size(69, 41);
			this->button_szablon2->TabIndex = 1;
			this->button_szablon2->Text = L"8 - 16";
			this->button_szablon2->UseVisualStyleBackColor = true;
			this->button_szablon2->Click += gcnew System::EventHandler(this, &Program::button_szablon2_Click);
			// 
			// button_szablon1
			// 
			this->button_szablon1->Location = System::Drawing::Point(0, 18);
			this->button_szablon1->Name = L"button_szablon1";
			this->button_szablon1->Size = System::Drawing::Size(80, 41);
			this->button_szablon1->TabIndex = 0;
			this->button_szablon1->Text = L"7 - 15";
			this->button_szablon1->UseVisualStyleBackColor = true;
			this->button_szablon1->Click += gcnew System::EventHandler(this, &Program::button_szablon1_Click);
			// 
			// txtPON_koniec
			// 
			this->txtPON_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPON_koniec->Location = System::Drawing::Point(176, 21);
			this->txtPON_koniec->Name = L"txtPON_koniec";
			this->txtPON_koniec->Size = System::Drawing::Size(59, 29);
			this->txtPON_koniec->TabIndex = 24;
			// 
			// label_pon
			// 
			this->label_pon->AutoSize = true;
			this->label_pon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_pon->Location = System::Drawing::Point(12, 24);
			this->label_pon->Name = L"label_pon";
			this->label_pon->Size = System::Drawing::Size(49, 24);
			this->label_pon->TabIndex = 23;
			this->label_pon->Text = L"Pon:";
			// 
			// txtPON_poczatek
			// 
			this->txtPON_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txtPON_poczatek->Location = System::Drawing::Point(92, 21);
			this->txtPON_poczatek->Name = L"txtPON_poczatek";
			this->txtPON_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtPON_poczatek->TabIndex = 22;
			// 
			// txtWT_koniec
			// 
			this->txtWT_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtWT_koniec->Location = System::Drawing::Point(176, 76);
			this->txtWT_koniec->Name = L"txtWT_koniec";
			this->txtWT_koniec->Size = System::Drawing::Size(59, 29);
			this->txtWT_koniec->TabIndex = 21;
			// 
			// label_wt
			// 
			this->label_wt->AutoSize = true;
			this->label_wt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_wt->Location = System::Drawing::Point(12, 79);
			this->label_wt->Name = L"label_wt";
			this->label_wt->Size = System::Drawing::Size(37, 24);
			this->label_wt->TabIndex = 20;
			this->label_wt->Text = L"Wt:";
			// 
			// txtWT_poczatek
			// 
			this->txtWT_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtWT_poczatek->Location = System::Drawing::Point(92, 76);
			this->txtWT_poczatek->Name = L"txtWT_poczatek";
			this->txtWT_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtWT_poczatek->TabIndex = 19;
			// 
			// txtSR_koniec
			// 
			this->txtSR_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSR_koniec->Location = System::Drawing::Point(176, 130);
			this->txtSR_koniec->Name = L"txtSR_koniec";
			this->txtSR_koniec->Size = System::Drawing::Size(59, 29);
			this->txtSR_koniec->TabIndex = 18;
			// 
			// label_sr
			// 
			this->label_sr->AutoSize = true;
			this->label_sr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_sr->Location = System::Drawing::Point(12, 133);
			this->label_sr->Name = L"label_sr";
			this->label_sr->Size = System::Drawing::Size(33, 24);
			this->label_sr->TabIndex = 17;
			this->label_sr->Text = L"Œr:";
			// 
			// txtSR_poczatek
			// 
			this->txtSR_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSR_poczatek->Location = System::Drawing::Point(92, 130);
			this->txtSR_poczatek->Name = L"txtSR_poczatek";
			this->txtSR_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtSR_poczatek->TabIndex = 16;
			// 
			// txtCZ_koniec
			// 
			this->txtCZ_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtCZ_koniec->Location = System::Drawing::Point(176, 182);
			this->txtCZ_koniec->Name = L"txtCZ_koniec";
			this->txtCZ_koniec->Size = System::Drawing::Size(59, 29);
			this->txtCZ_koniec->TabIndex = 15;
			// 
			// label_czw
			// 
			this->label_czw->AutoSize = true;
			this->label_czw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_czw->Location = System::Drawing::Point(12, 185);
			this->label_czw->Name = L"label_czw";
			this->label_czw->Size = System::Drawing::Size(51, 24);
			this->label_czw->TabIndex = 14;
			this->label_czw->Text = L"Czw:";
			// 
			// txtCZ_poczatek
			// 
			this->txtCZ_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtCZ_poczatek->Location = System::Drawing::Point(92, 182);
			this->txtCZ_poczatek->Name = L"txtCZ_poczatek";
			this->txtCZ_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtCZ_poczatek->TabIndex = 13;
			// 
			// txtPT_koniec
			// 
			this->txtPT_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPT_koniec->Location = System::Drawing::Point(176, 239);
			this->txtPT_koniec->Name = L"txtPT_koniec";
			this->txtPT_koniec->Size = System::Drawing::Size(59, 29);
			this->txtPT_koniec->TabIndex = 12;
			// 
			// label_pt
			// 
			this->label_pt->AutoSize = true;
			this->label_pt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_pt->Location = System::Drawing::Point(12, 242);
			this->label_pt->Name = L"label_pt";
			this->label_pt->Size = System::Drawing::Size(31, 24);
			this->label_pt->TabIndex = 11;
			this->label_pt->Text = L"Pt:";
			// 
			// txtPT_poczatek
			// 
			this->txtPT_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtPT_poczatek->Location = System::Drawing::Point(92, 239);
			this->txtPT_poczatek->Name = L"txtPT_poczatek";
			this->txtPT_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtPT_poczatek->TabIndex = 10;
			// 
			// txtSO_koniec
			// 
			this->txtSO_koniec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSO_koniec->Location = System::Drawing::Point(176, 293);
			this->txtSO_koniec->Name = L"txtSO_koniec";
			this->txtSO_koniec->Size = System::Drawing::Size(59, 29);
			this->txtSO_koniec->TabIndex = 9;
			// 
			// label_sob
			// 
			this->label_sob->AutoSize = true;
			this->label_sob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_sob->Location = System::Drawing::Point(12, 296);
			this->label_sob->Name = L"label_sob";
			this->label_sob->Size = System::Drawing::Size(49, 24);
			this->label_sob->TabIndex = 8;
			this->label_sob->Text = L"Sob:";
			// 
			// txtSO_poczatek
			// 
			this->txtSO_poczatek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSO_poczatek->Location = System::Drawing::Point(92, 293);
			this->txtSO_poczatek->Name = L"txtSO_poczatek";
			this->txtSO_poczatek->Size = System::Drawing::Size(59, 29);
			this->txtSO_poczatek->TabIndex = 3;
			// 
			// button_DodajUzytkownika
			// 
			this->button_DodajUzytkownika->Location = System::Drawing::Point(8, 354);
			this->button_DodajUzytkownika->Name = L"button_DodajUzytkownika";
			this->button_DodajUzytkownika->Size = System::Drawing::Size(219, 53);
			this->button_DodajUzytkownika->TabIndex = 7;
			this->button_DodajUzytkownika->Text = L"Dodaj u¿ytkownika";
			this->button_DodajUzytkownika->UseVisualStyleBackColor = true;
			this->button_DodajUzytkownika->Click += gcnew System::EventHandler(this, &Program::button_DodajUzytkownika_Click);
			// 
			// button_UsunUzytkownika
			// 
			this->button_UsunUzytkownika->Enabled = false;
			this->button_UsunUzytkownika->Location = System::Drawing::Point(8, 299);
			this->button_UsunUzytkownika->Name = L"button_UsunUzytkownika";
			this->button_UsunUzytkownika->Size = System::Drawing::Size(219, 49);
			this->button_UsunUzytkownika->TabIndex = 6;
			this->button_UsunUzytkownika->Text = L"Usuñ u¿ytkwonika";
			this->button_UsunUzytkownika->UseVisualStyleBackColor = true;
			this->button_UsunUzytkownika->Click += gcnew System::EventHandler(this, &Program::button_UsunUzytkownika_Click);
			// 
			// button_ModyfikujUzytkownika
			// 
			this->button_ModyfikujUzytkownika->Enabled = false;
			this->button_ModyfikujUzytkownika->Location = System::Drawing::Point(8, 245);
			this->button_ModyfikujUzytkownika->Name = L"button_ModyfikujUzytkownika";
			this->button_ModyfikujUzytkownika->Size = System::Drawing::Size(219, 48);
			this->button_ModyfikujUzytkownika->TabIndex = 5;
			this->button_ModyfikujUzytkownika->Text = L"Modyfikuj u¿ytkownika";
			this->button_ModyfikujUzytkownika->UseVisualStyleBackColor = true;
			this->button_ModyfikujUzytkownika->Click += gcnew System::EventHandler(this, &Program::button_ModyfikujUzytkownika_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txt_Edycja_Login);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txt_Edycja_Nazwisko);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txt_Edycja_Imie);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->checkBox_Pracownik);
			this->groupBox2->Location = System::Drawing::Point(8, 73);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(219, 166);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edycja danych u¿ytkownika";
			// 
			// txt_Edycja_Login
			// 
			this->txt_Edycja_Login->Location = System::Drawing::Point(82, 89);
			this->txt_Edycja_Login->Name = L"txt_Edycja_Login";
			this->txt_Edycja_Login->Size = System::Drawing::Size(100, 20);
			this->txt_Edycja_Login->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Login";
			// 
			// txt_Edycja_Nazwisko
			// 
			this->txt_Edycja_Nazwisko->Location = System::Drawing::Point(82, 63);
			this->txt_Edycja_Nazwisko->Name = L"txt_Edycja_Nazwisko";
			this->txt_Edycja_Nazwisko->Size = System::Drawing::Size(100, 20);
			this->txt_Edycja_Nazwisko->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nazwisko";
			// 
			// txt_Edycja_Imie
			// 
			this->txt_Edycja_Imie->Location = System::Drawing::Point(82, 37);
			this->txt_Edycja_Imie->Name = L"txt_Edycja_Imie";
			this->txt_Edycja_Imie->Size = System::Drawing::Size(100, 20);
			this->txt_Edycja_Imie->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Imiê";
			// 
			// checkBox_Pracownik
			// 
			this->checkBox_Pracownik->AutoSize = true;
			this->checkBox_Pracownik->Location = System::Drawing::Point(109, 115);
			this->checkBox_Pracownik->Name = L"checkBox_Pracownik";
			this->checkBox_Pracownik->Size = System::Drawing::Size(76, 17);
			this->checkBox_Pracownik->TabIndex = 0;
			this->checkBox_Pracownik->Text = L"Pracownik";
			this->checkBox_Pracownik->UseVisualStyleBackColor = true;
			this->checkBox_Pracownik->CheckedChanged += gcnew System::EventHandler(this, &Program::checkBox_Pracownik_CheckedChanged);
			// 
			// txt_Pracownicy_szukaj
			// 
			this->txt_Pracownicy_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_Pracownicy_szukaj->Location = System::Drawing::Point(94, 3);
			this->txt_Pracownicy_szukaj->Name = L"txt_Pracownicy_szukaj";
			this->txt_Pracownicy_szukaj->Size = System::Drawing::Size(133, 22);
			this->txt_Pracownicy_szukaj->TabIndex = 3;
			// 
			// label_pracownicy_szukaj
			// 
			this->label_pracownicy_szukaj->AutoSize = true;
			this->label_pracownicy_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label_pracownicy_szukaj->Location = System::Drawing::Point(5, 6);
			this->label_pracownicy_szukaj->Name = L"label_pracownicy_szukaj";
			this->label_pracownicy_szukaj->Size = System::Drawing::Size(83, 16);
			this->label_pracownicy_szukaj->TabIndex = 2;
			this->label_pracownicy_szukaj->Text = L"Pracownik:";
			// 
			// button_pracownicy_szukaj
			// 
			this->button_pracownicy_szukaj->Location = System::Drawing::Point(8, 31);
			this->button_pracownicy_szukaj->Name = L"button_pracownicy_szukaj";
			this->button_pracownicy_szukaj->Size = System::Drawing::Size(219, 27);
			this->button_pracownicy_szukaj->TabIndex = 1;
			this->button_pracownicy_szukaj->Text = L"Szukaj";
			this->button_pracownicy_szukaj->UseVisualStyleBackColor = true;
			this->button_pracownicy_szukaj->Click += gcnew System::EventHandler(this, &Program::button_pracownicy_szukaj_Click);
			// 
			// dataGridView_siatkaPracownikow
			// 
			this->dataGridView_siatkaPracownikow->AllowUserToAddRows = false;
			this->dataGridView_siatkaPracownikow->AllowUserToOrderColumns = true;
			this->dataGridView_siatkaPracownikow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_siatkaPracownikow->Location = System::Drawing::Point(266, 6);
			this->dataGridView_siatkaPracownikow->Name = L"dataGridView_siatkaPracownikow";
			this->dataGridView_siatkaPracownikow->Size = System::Drawing::Size(415, 401);
			this->dataGridView_siatkaPracownikow->TabIndex = 0;
			this->dataGridView_siatkaPracownikow->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_siatkaPracownikow_CellDoubleClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(965, 425);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmiana has³a";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkGray;
			this->groupBox1->Controls->Add(this->txt_Nowe_haslo2);
			this->groupBox1->Controls->Add(this->txt_Nowe_haslo);
			this->groupBox1->Controls->Add(this->txt_Stare_haslo);
			this->groupBox1->Controls->Add(this->label_noweHaslo2);
			this->groupBox1->Controls->Add(this->label_noweHaslo);
			this->groupBox1->Controls->Add(this->label_stareHaslo);
			this->groupBox1->Controls->Add(this->button_Zmien_haslo);
			this->groupBox1->Location = System::Drawing::Point(344, 93);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(272, 235);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana has³a u¿ytkownika";
			// 
			// txt_Nowe_haslo2
			// 
			this->txt_Nowe_haslo2->BackColor = System::Drawing::Color::DarkGray;
			this->txt_Nowe_haslo2->Location = System::Drawing::Point(133, 130);
			this->txt_Nowe_haslo2->Margin = System::Windows::Forms::Padding(2);
			this->txt_Nowe_haslo2->Name = L"txt_Nowe_haslo2";
			this->txt_Nowe_haslo2->Size = System::Drawing::Size(117, 20);
			this->txt_Nowe_haslo2->TabIndex = 6;
			this->txt_Nowe_haslo2->TextChanged += gcnew System::EventHandler(this, &Program::txt_Nowe_haslo2_TextChanged);
			// 
			// txt_Nowe_haslo
			// 
			this->txt_Nowe_haslo->BackColor = System::Drawing::Color::DarkGray;
			this->txt_Nowe_haslo->Location = System::Drawing::Point(133, 91);
			this->txt_Nowe_haslo->Margin = System::Windows::Forms::Padding(2);
			this->txt_Nowe_haslo->Name = L"txt_Nowe_haslo";
			this->txt_Nowe_haslo->Size = System::Drawing::Size(117, 20);
			this->txt_Nowe_haslo->TabIndex = 5;
			this->txt_Nowe_haslo->TextChanged += gcnew System::EventHandler(this, &Program::txt_Nowe_haslo_TextChanged);
			// 
			// txt_Stare_haslo
			// 
			this->txt_Stare_haslo->BackColor = System::Drawing::Color::DarkGray;
			this->txt_Stare_haslo->Location = System::Drawing::Point(133, 54);
			this->txt_Stare_haslo->Margin = System::Windows::Forms::Padding(2);
			this->txt_Stare_haslo->Name = L"txt_Stare_haslo";
			this->txt_Stare_haslo->Size = System::Drawing::Size(117, 20);
			this->txt_Stare_haslo->TabIndex = 4;
			this->txt_Stare_haslo->TextChanged += gcnew System::EventHandler(this, &Program::txt_Stare_haslo_TextChanged);
			// 
			// label_noweHaslo2
			// 
			this->label_noweHaslo2->AutoSize = true;
			this->label_noweHaslo2->Location = System::Drawing::Point(24, 125);
			this->label_noweHaslo2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_noweHaslo2->Name = L"label_noweHaslo2";
			this->label_noweHaslo2->Size = System::Drawing::Size(88, 26);
			this->label_noweHaslo2->TabIndex = 3;
			this->label_noweHaslo2->Text = L"Wpisz ponownie \r\nnowe has³o";
			this->label_noweHaslo2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_noweHaslo
			// 
			this->label_noweHaslo->AutoSize = true;
			this->label_noweHaslo->Location = System::Drawing::Point(24, 93);
			this->label_noweHaslo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_noweHaslo->Name = L"label_noweHaslo";
			this->label_noweHaslo->Size = System::Drawing::Size(95, 13);
			this->label_noweHaslo->TabIndex = 2;
			this->label_noweHaslo->Text = L"Wpisz nowe has³o";
			// 
			// label_stareHaslo
			// 
			this->label_stareHaslo->AutoSize = true;
			this->label_stareHaslo->Location = System::Drawing::Point(24, 58);
			this->label_stareHaslo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_stareHaslo->Name = L"label_stareHaslo";
			this->label_stareHaslo->Size = System::Drawing::Size(92, 13);
			this->label_stareHaslo->TabIndex = 1;
			this->label_stareHaslo->Text = L"Wpisz stare has³o";
			// 
			// button_Zmien_haslo
			// 
			this->button_Zmien_haslo->Enabled = false;
			this->button_Zmien_haslo->Location = System::Drawing::Point(66, 177);
			this->button_Zmien_haslo->Margin = System::Windows::Forms::Padding(2);
			this->button_Zmien_haslo->Name = L"button_Zmien_haslo";
			this->button_Zmien_haslo->Size = System::Drawing::Size(136, 43);
			this->button_Zmien_haslo->TabIndex = 0;
			this->button_Zmien_haslo->Text = L"Zmieñ has³o";
			this->button_Zmien_haslo->UseVisualStyleBackColor = true;
			this->button_Zmien_haslo->Click += gcnew System::EventHandler(this, &Program::button_Zmien_haslo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 164);
			this->button1->TabIndex = 9;
			this->button1->Text = L"W\r\nY\r\nC\r\nZ\r\nY\r\nŒ\r\nÆ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 454);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_siatkaPracownikow))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Program_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: Void zanik_przycisku_do_zmiany_hasla()
	{
		if (txt_Stare_haslo->Text != "" && txt_Nowe_haslo->Text != "" && txt_Nowe_haslo->Text == txt_Nowe_haslo2->Text && txt_Nowe_haslo->Text != txt_Stare_haslo->Text)
		{
			button_Zmien_haslo->Enabled = true;
		}
		else
		{
			button_Zmien_haslo->Enabled = false;
		}
	}
private: System::Void txt_Stare_haslo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	zanik_przycisku_do_zmiany_hasla();
}
private: System::Void txt_Nowe_haslo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	zanik_przycisku_do_zmiany_hasla();
}
private: System::Void txt_Nowe_haslo2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	zanik_przycisku_do_zmiany_hasla();
}
	private: System::Void button_Zmien_haslo_Click(System::Object^  sender, System::EventArgs^  e) {

		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("UPDATE uzytkownicy SET haslo = md5('"+txt_Nowe_haslo->Text+"') WHERE uzytkownicy_id = "+id_uzytkownika+" AND haslo = md5('"+txt_Stare_haslo->Text+"');", lacz_baze);

		try
		{
			lacz_baze->Open();
			if (zapytanie_do_bazy->ExecuteNonQuery())
			{
				MessageBox::Show("Zmienione zosta³o has³o");
			}
			else
			{
				MessageBox::Show("Stare has³o jest z³e");
			}
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
		}



}
			 private: Void odswiez_siatke()
			 {
				 MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
				 MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uzytkownicy_id,uzytkownik_nazwa AS Login,imie AS Imie,nazwisko AS Nazwisko,pracownik AS 'Czy pracownik?' FROM uzytkownicy WHERE CONCAT(imie, ' ',nazwisko,uzytkownik_nazwa) LIKE '%" + txt_Pracownicy_szukaj->Text + "%' ORDER BY uzytkownik_nazwa;", lacz_baze);

				 try
				 {
					 MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
					 moja_baza->SelectCommand = zapytanie_do_bazy;
					 DataTable^ tabela = gcnew DataTable();
					 moja_baza->Fill(tabela);

					 BindingSource^ zrodlo_siatki = gcnew BindingSource();
					 zrodlo_siatki->DataSource = tabela;
					 dataGridView_siatkaPracownikow->DataSource = zrodlo_siatki;

				 }
				 catch (Exception^ komunikat_bledu)
				 {
					 MessageBox::Show(komunikat_bledu->Message);
				 }
			 }

private: System::Void button_pracownicy_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	odswiez_siatke();
	dataGridView_siatkaPracownikow->Columns[0]->Visible = false;
}
		 private: Void wyswietl_godziny()
		 {
			 if (checkBox_Pracownik->Checked)
			 {
				 groupBox3->Visible = true;
			 }
			 else
			 {
				 groupBox3->Visible = false;
			 }
		 }
private: System::Void dataGridView_siatkaPracownikow_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		wyczysc_tekst(groupBox2, 0);
		wyczysc_tekst(groupBox3, 1);
		button_ModyfikujUzytkownika->Enabled = true;
		button_UsunUzytkownika->Enabled = true;
		id_teraz = Convert::ToInt32(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells[0]->Value);
		txt_Edycja_Imie->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Imie"]->Value);
		txt_Edycja_Nazwisko->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Nazwisko"]->Value);
		txt_Edycja_Login->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Login"]->Value);
		checkBox_Pracownik->Checked = Convert::ToBoolean(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Czy pracownik?"]->Value);

		if (checkBox_Pracownik->Checked)
		{
			MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
			MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT * FROM baza_danych.godziny_pracy WHERE godziny_uzytkownicy_id = '"+id_teraz+"';", lacz_baze);
			MySqlDataReader^ dane;

			try
			{
				lacz_baze->Open();
				dane = zapytanie_do_bazy->ExecuteReader();
				while (dane->Read())
				{
					txtPON_poczatek->Text = dane->GetString("pon_od");
					txtPON_koniec->Text = dane->GetString("pon_do");

					txtWT_poczatek->Text = dane->GetString("wt_od");
					txtWT_koniec->Text = dane->GetString("wt_do");

					txtSR_poczatek->Text = dane->GetString("sr_od");
					txtSR_koniec->Text = dane->GetString("sr_do");

					txtCZ_poczatek->Text = dane->GetString("cz_od");
					txtCZ_koniec->Text = dane->GetString("cz_do");

					txtPT_poczatek->Text = dane->GetString("pt_od");
					txtPT_koniec->Text = dane->GetString("pt_do");

					txtSO_poczatek->Text = dane->GetString("sob_od");
					txtSO_koniec->Text = dane->GetString("sob_do");
				}
			}
			catch (Exception^ komunikat_bledu)
			{
				MessageBox::Show(komunikat_bledu->Message);
			}
		}	
	}
}
		 private: Void sprawdz_pracownika()
		 {
			 if (checkBox_Pracownik->Checked)
			 {
				 czy_pracownik = 1;
			 }
			 else
			 {
				 czy_pracownik = 0;
			 }
		 }
private: System::Void button_DodajUzytkownika_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (txt_Edycja_Imie->Text->Length <= 1 || txt_Edycja_Nazwisko->Text->Length <= 1 || txt_Edycja_Login->Text->Length <= 3)
	{
		MessageBox::Show("Imie albo nazwisko musi byæ wiêksze ni¿ 1 litera.\nLogin > 3 liter");
	}
	else
	{
		sprawdz_pracownika();
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
	MySqlTransaction^ transakcja;
	lacz_baze->Open();

	transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

	zapytanie->Connection = lacz_baze;
	zapytanie->Transaction = transakcja;

	try {
		zapytanie->CommandText = "INSERT into baza_danych.uzytkownicy SET uzytkownik_nazwa='"+txt_Edycja_Login->Text+"', imie='" + txt_Edycja_Imie->Text + "',nazwisko='" + txt_Edycja_Nazwisko->Text + "',haslo=md5(uzytkownik_nazwa),pracownik="+czy_pracownik+";";
		zapytanie->ExecuteNonQuery();
		if(checkBox_Pracownik->Checked)
		{
			zapytanie->CommandText = "INSERT into baza_danych.godziny_pracy SET godziny_uzytkownicy_id = last_insert_id(),pon_od = '" + txtPON_poczatek->Text + "',pon_do = '" + txtPON_koniec->Text + "',wt_od = '" + txtWT_poczatek->Text + "',wt_do = '" + txtWT_koniec->Text + "', sr_od = '" + txtSR_poczatek->Text + "', sr_do = '" + txtSR_koniec->Text + "',cz_od = '" + txtCZ_poczatek->Text + "',cz_do = '" + txtCZ_koniec->Text + "',pt_od = '" + txtPT_poczatek->Text + "',pt_do = '" + txtPT_koniec->Text + "',sob_od = '" + txtSO_poczatek->Text + "',sob_do = '" + txtSO_koniec->Text + "';";
			zapytanie->ExecuteNonQuery();
		}
		transakcja->Commit();
		MessageBox::Show("Dodanie u¿ytkownika pomyœlne.\nDomyœlne haslo takie jak login.\nProszê je zmieniæ!");
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
		transakcja->Rollback();
	}
	lacz_baze->Close();
	}
	wyczysc_tekst(groupBox2, 0);
	wyczysc_tekst(groupBox3, 1);
	odswiez_siatke();
}
private: System::Void button_ModyfikujUzytkownika_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_Edycja_Imie->Text->Length <= 1 || txt_Edycja_Nazwisko->Text->Length <= 1 || txt_Edycja_Login->Text->Length <= 3)
	{
		MessageBox::Show("Imie albo nazwisko musi byæ wiêksze ni¿ 1 litera.\nLogin > 3 liter");
	}
	else
	{
		sprawdz_pracownika();
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		MySqlDataReader^ dane;
		lacz_baze->Open();

		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			zapytanie->CommandText = "SELECT * FROM baza_danych.godziny_pracy WHERE godziny_uzytkownicy_id = "+id_teraz+"";
			dane = zapytanie->ExecuteReader();
			dane->Close();
			
			if (checkBox_Pracownik->Checked && dane->HasRows)
			{
				zapytanie->CommandText = "UPDATE baza_danych.godziny_pracy SET pon_od = '" + txtPON_poczatek->Text + "',pon_do = '" + txtPON_koniec->Text + "',wt_od = '" + txtWT_poczatek->Text + "',wt_do = '" + txtWT_koniec->Text + "', sr_od = '" + txtSR_poczatek->Text + "', sr_do = '" + txtSR_koniec->Text + "',cz_od = '" + txtCZ_poczatek->Text + "',cz_do = '" + txtCZ_koniec->Text + "',pt_od = '" + txtPT_poczatek->Text + "',pt_do = '" + txtPT_koniec->Text + "',sob_od = '" + txtSO_poczatek->Text + "',sob_do = '" + txtSO_koniec->Text + "' WHERE godziny_uzytkownicy_id = '"+id_teraz+"';";
				zapytanie->ExecuteNonQuery();
			}
			else if (checkBox_Pracownik->Checked)
			{
				zapytanie->CommandText = "INSERT into baza_danych.godziny_pracy SET godziny_uzytkownicy_id = '"+id_teraz+"',pon_od = '" + txtPON_poczatek->Text + "',pon_do = '" + txtPON_koniec->Text + "',wt_od = '" + txtWT_poczatek->Text + "',wt_do = '" + txtWT_koniec->Text + "', sr_od = '" + txtSR_poczatek->Text + "', sr_do = '" + txtSR_koniec->Text + "',cz_od = '" + txtCZ_poczatek->Text + "',cz_do = '" + txtCZ_koniec->Text + "',pt_od = '" + txtPT_poczatek->Text + "',pt_do = '" + txtPT_koniec->Text + "',sob_od = '" + txtSO_poczatek->Text + "',sob_do = '" + txtSO_koniec->Text + "';";
				zapytanie->ExecuteNonQuery();
			}
			else
			{
				zapytanie->CommandText = "DELETE FROM baza_danych.godziny_pracy WHERE godziny_uzytkownicy_id = " + id_teraz + ";";
				zapytanie->ExecuteNonQuery();
			}
			zapytanie->CommandText = "UPDATE baza_danych.uzytkownicy SET uzytkownik_nazwa = '"+txt_Edycja_Login->Text +"',imie = '" +txt_Edycja_Imie->Text +"',nazwisko='" + txt_Edycja_Nazwisko->Text+"',pracownik =" + czy_pracownik+" WHERE uzytkownicy_id = " +id_teraz +";";
			zapytanie->ExecuteNonQuery();
			MessageBox::Show("Modyfikacja zosta³a wykonana pomyœlnie.");
			transakcja->Commit();
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
	odswiez_siatke();
}
		 private: Void wyczysc_tekst(Control^ zbior,int pomoc)
		 {
			 for each(Control^ element in zbior->Controls)
			 {
				 if (element->GetType() == TextBox::typeid)
				 {
					 if (pomoc == 0)
					 {
						 element->Text = "";
					 }
					 else
					 {
						 element->Text = "00:00";
					 }
				 } 
			 }
		 }
	private: System::Void button_UsunUzytkownika_Click(System::Object^  sender, System::EventArgs^  e) {

		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		lacz_baze->Open();

		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;
		if(id_teraz != 1 && id_uzytkownika != id_teraz)
		{
			if (MessageBox::Show("Czy chcesz usunac u¿ytkownika", "UWAGA !!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
			{
				try {
					zapytanie->CommandText = "DELETE FROM baza_danych.godziny_pracy WHERE godziny_uzytkownicy_id = " + id_teraz + ";";
					zapytanie->ExecuteNonQuery();
					zapytanie->CommandText = "DELETE FROM baza_danych.uzytkownicy WHERE uzytkownicy_id = " + id_teraz + ";";
					zapytanie->ExecuteNonQuery();
					transakcja->Commit();
					MessageBox::Show("U¿ytkownik zosta³ usuniêty z bazy");
				}
				catch (Exception^ komunikat_bledu)
				{
					MessageBox::Show(komunikat_bledu->Message);
					transakcja->Rollback();
				}
				lacz_baze->Close();
				wyczysc_tekst(groupBox2,0);
				wyczysc_tekst(groupBox3,1);
				checkBox_Pracownik->Checked = false;
				wyswietl_godziny();
				button_ModyfikujUzytkownika->Enabled = false;
				button_UsunUzytkownika->Enabled = false;
			}
		}
		else
		{
			MessageBox::Show("Nie mo¿na usun¹æ samego siebie lub Admina!");
		}
		 odswiez_siatke();
		 
}

private: System::Void checkBox_Pracownik_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	wyswietl_godziny();
}
private: void szablonuj_godziny(int godzina)
{
	array<TextBox^>^ czas_poczatek = {txtPON_poczatek,txtWT_poczatek,txtSR_poczatek,txtCZ_poczatek,txtPT_poczatek,txtSO_poczatek};
	array<TextBox^>^ czas_koniec  = { txtPON_koniec,txtWT_koniec,txtSR_koniec,txtCZ_koniec,txtPT_koniec,txtSO_koniec };

	for (int i = 0; i < czas_koniec->Length; i++)
	{
		czas_poczatek[i]->Text = godzina + ":00";
		czas_koniec[i]->Text = godzina+ 8 + ":00";
	}
}
private: System::Void button_szablon1_Click(System::Object^  sender, System::EventArgs^  e) {
	szablonuj_godziny(7);
}
private: System::Void button_szablon2_Click(System::Object^  sender, System::EventArgs^  e) {
	szablonuj_godziny(8);
}
private: System::Void button_szablon3_Click(System::Object^  sender, System::EventArgs^  e) {
	szablonuj_godziny(9);
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	wyczysc_tekst(groupBox2, 0);
	wyczysc_tekst(groupBox3, 1);
	checkBox_Pracownik->Checked = false;
	wyswietl_godziny();
}
};
}
