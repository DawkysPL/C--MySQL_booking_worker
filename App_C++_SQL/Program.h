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
		int id_uzytkownika = -1, id_teraz, czy_pracownik, id_uslugi = -1, id_klient = -1;
		String ^ data_wizyty="", ^godzina_wizyty="";
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
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::GroupBox^  groupBox_Uslugi;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button_modyfikuj_usluge;
	private: System::Windows::Forms::Button^  button_usun_usluge;
	private: System::Windows::Forms::Button^  button_dodaj_usluge;
	private: System::Windows::Forms::TextBox^  txt_opis_uslugi;
	private: System::Windows::Forms::TextBox^  txt_czas_uslugi;



	private: System::Windows::Forms::TextBox^  txt_cena_uslugi;

	private: System::Windows::Forms::TextBox^  txt_nazwa_uslugi;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  txt_szukaj_usluge;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView_uslugi;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  txt_pokaz_nazwisko_pracownika;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txt_pokaz_imie_pracownika;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button_szukaj_pracownika_uslugi;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Button^  button_klient_modyfikacja;
	private: System::Windows::Forms::Button^  button_klient_usun;
	private: System::Windows::Forms::Button^  button_klient_dodaj;
	private: System::Windows::Forms::GroupBox^  groupBox_klient;
	private: System::Windows::Forms::MaskedTextBox^  txt_kodpocztowy;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  txt_miejscowosc;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  txt_numer;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  txt_ulica;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  txt_telefon;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  txt_email;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  txt_nazwisko;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  txt_imie;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::DataGridView^  dataGridView_klient;
	private: System::Windows::Forms::TextBox^  txt_klient_szukaj;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button_klient_szukaj;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::TextBox^  txt_wizyta_uslugaszukaj;

private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Button^  button_wizyta_uslugaszukaj;

private: System::Windows::Forms::TextBox^  txt_wizyta_termin;
private: System::Windows::Forms::TextBox^  txt_wizyta_usluga;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  txt_wizyta_klient;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Button^  button_wizyta_dodaj;
private: System::Windows::Forms::Button^  button_wizyta_modyfikacja;
private: System::Windows::Forms::Button^  button_wizyta_usun;
private: System::Windows::Forms::GroupBox^  groupBox_wizyty;

private: System::Windows::Forms::DataGridView^  dataGridView_wizyta_pracownik;

private: System::Windows::Forms::TextBox^  txt_wizyta_pracownikszukaj;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Button^  button_wizyta_pracownikszukaj;
private: System::Windows::Forms::DataGridView^  dataGridView_wizyta_klient;


private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
private: System::Windows::Forms::DataGridView^  dataGridView_wizyta_usluga;

private: System::Windows::Forms::TextBox^  txt_wizyta_klientszukaj;

private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Button^  button_wizyta_klientszukaj;










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
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->txt_wizyta_termin = (gcnew System::Windows::Forms::TextBox());
			this->txt_wizyta_usluga = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txt_wizyta_klient = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button_wizyta_dodaj = (gcnew System::Windows::Forms::Button());
			this->button_wizyta_modyfikacja = (gcnew System::Windows::Forms::Button());
			this->button_wizyta_usun = (gcnew System::Windows::Forms::Button());
			this->groupBox_wizyty = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_wizyta_pracownik = (gcnew System::Windows::Forms::DataGridView());
			this->txt_wizyta_pracownikszukaj = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button_wizyta_pracownikszukaj = (gcnew System::Windows::Forms::Button());
			this->dataGridView_wizyta_klient = (gcnew System::Windows::Forms::DataGridView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView_wizyta_usluga = (gcnew System::Windows::Forms::DataGridView());
			this->txt_wizyta_klientszukaj = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button_wizyta_klientszukaj = (gcnew System::Windows::Forms::Button());
			this->txt_wizyta_uslugaszukaj = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button_wizyta_uslugaszukaj = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button_klient_modyfikacja = (gcnew System::Windows::Forms::Button());
			this->button_klient_usun = (gcnew System::Windows::Forms::Button());
			this->button_klient_dodaj = (gcnew System::Windows::Forms::Button());
			this->groupBox_klient = (gcnew System::Windows::Forms::GroupBox());
			this->txt_kodpocztowy = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_miejscowosc = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txt_numer = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txt_ulica = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_telefon = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txt_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_imie = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dataGridView_klient = (gcnew System::Windows::Forms::DataGridView());
			this->txt_klient_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button_klient_szukaj = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->txt_pokaz_nazwisko_pracownika = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_pokaz_imie_pracownika = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button_szukaj_pracownika_uslugi = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox_Uslugi = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_modyfikuj_usluge = (gcnew System::Windows::Forms::Button());
			this->button_usun_usluge = (gcnew System::Windows::Forms::Button());
			this->button_dodaj_usluge = (gcnew System::Windows::Forms::Button());
			this->txt_opis_uslugi = (gcnew System::Windows::Forms::TextBox());
			this->txt_czas_uslugi = (gcnew System::Windows::Forms::TextBox());
			this->txt_cena_uslugi = (gcnew System::Windows::Forms::TextBox());
			this->txt_nazwa_uslugi = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_szukaj_usluge = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView_uslugi = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_pracownik))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_klient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_usluga))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox_klient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_klient))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox_Uslugi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_uslugi))->BeginInit();
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
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(973, 451);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->txt_wizyta_termin);
			this->tabPage6->Controls->Add(this->txt_wizyta_usluga);
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Controls->Add(this->label28);
			this->tabPage6->Controls->Add(this->txt_wizyta_klient);
			this->tabPage6->Controls->Add(this->label24);
			this->tabPage6->Controls->Add(this->button_wizyta_dodaj);
			this->tabPage6->Controls->Add(this->button_wizyta_modyfikacja);
			this->tabPage6->Controls->Add(this->button_wizyta_usun);
			this->tabPage6->Controls->Add(this->groupBox_wizyty);
			this->tabPage6->Controls->Add(this->dataGridView_wizyta_pracownik);
			this->tabPage6->Controls->Add(this->txt_wizyta_pracownikszukaj);
			this->tabPage6->Controls->Add(this->label27);
			this->tabPage6->Controls->Add(this->button_wizyta_pracownikszukaj);
			this->tabPage6->Controls->Add(this->dataGridView_wizyta_klient);
			this->tabPage6->Controls->Add(this->monthCalendar1);
			this->tabPage6->Controls->Add(this->dataGridView_wizyta_usluga);
			this->tabPage6->Controls->Add(this->txt_wizyta_klientszukaj);
			this->tabPage6->Controls->Add(this->label25);
			this->tabPage6->Controls->Add(this->button_wizyta_klientszukaj);
			this->tabPage6->Controls->Add(this->txt_wizyta_uslugaszukaj);
			this->tabPage6->Controls->Add(this->label26);
			this->tabPage6->Controls->Add(this->button_wizyta_uslugaszukaj);
			this->tabPage6->Location = System::Drawing::Point(4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(965, 425);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Wizyty";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// txt_wizyta_termin
			// 
			this->txt_wizyta_termin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txt_wizyta_termin->Location = System::Drawing::Point(775, 273);
			this->txt_wizyta_termin->Name = L"txt_wizyta_termin";
			this->txt_wizyta_termin->Size = System::Drawing::Size(178, 26);
			this->txt_wizyta_termin->TabIndex = 40;
			// 
			// txt_wizyta_usluga
			// 
			this->txt_wizyta_usluga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txt_wizyta_usluga->Location = System::Drawing::Point(775, 241);
			this->txt_wizyta_usluga->Name = L"txt_wizyta_usluga";
			this->txt_wizyta_usluga->Size = System::Drawing::Size(178, 26);
			this->txt_wizyta_usluga->TabIndex = 39;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label29->Location = System::Drawing::Point(708, 279);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(61, 20);
			this->label29->TabIndex = 38;
			this->label29->Text = L"Termin:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label28->Location = System::Drawing::Point(708, 248);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(64, 20);
			this->label28->TabIndex = 37;
			this->label28->Text = L"Us³uga:";
			// 
			// txt_wizyta_klient
			// 
			this->txt_wizyta_klient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txt_wizyta_klient->Location = System::Drawing::Point(775, 209);
			this->txt_wizyta_klient->Name = L"txt_wizyta_klient";
			this->txt_wizyta_klient->Size = System::Drawing::Size(178, 26);
			this->txt_wizyta_klient->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label24->Location = System::Drawing::Point(708, 215);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(52, 20);
			this->label24->TabIndex = 35;
			this->label24->Text = L"Klient:";
			// 
			// button_wizyta_dodaj
			// 
			this->button_wizyta_dodaj->Location = System::Drawing::Point(678, 380);
			this->button_wizyta_dodaj->Name = L"button_wizyta_dodaj";
			this->button_wizyta_dodaj->Size = System::Drawing::Size(139, 39);
			this->button_wizyta_dodaj->TabIndex = 34;
			this->button_wizyta_dodaj->Text = L"Dodaj wizyte";
			this->button_wizyta_dodaj->UseVisualStyleBackColor = true;
			this->button_wizyta_dodaj->Click += gcnew System::EventHandler(this, &Program::button_wizyta_dodaj_Click);
			// 
			// button_wizyta_modyfikacja
			// 
			this->button_wizyta_modyfikacja->Location = System::Drawing::Point(678, 324);
			this->button_wizyta_modyfikacja->Name = L"button_wizyta_modyfikacja";
			this->button_wizyta_modyfikacja->Size = System::Drawing::Size(275, 50);
			this->button_wizyta_modyfikacja->TabIndex = 33;
			this->button_wizyta_modyfikacja->Text = L"Modyfikuj wizyte";
			this->button_wizyta_modyfikacja->UseVisualStyleBackColor = true;
			// 
			// button_wizyta_usun
			// 
			this->button_wizyta_usun->Location = System::Drawing::Point(823, 380);
			this->button_wizyta_usun->Name = L"button_wizyta_usun";
			this->button_wizyta_usun->Size = System::Drawing::Size(130, 39);
			this->button_wizyta_usun->TabIndex = 32;
			this->button_wizyta_usun->Text = L"Usuñ wizyte";
			this->button_wizyta_usun->UseVisualStyleBackColor = true;
			// 
			// groupBox_wizyty
			// 
			this->groupBox_wizyty->Location = System::Drawing::Point(467, 6);
			this->groupBox_wizyty->Name = L"groupBox_wizyty";
			this->groupBox_wizyty->Size = System::Drawing::Size(205, 413);
			this->groupBox_wizyty->TabIndex = 31;
			this->groupBox_wizyty->TabStop = false;
			this->groupBox_wizyty->Text = L"Godziny:";
			// 
			// dataGridView_wizyta_pracownik
			// 
			this->dataGridView_wizyta_pracownik->AllowUserToAddRows = false;
			this->dataGridView_wizyta_pracownik->AllowUserToOrderColumns = true;
			this->dataGridView_wizyta_pracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_wizyta_pracownik->Location = System::Drawing::Point(11, 344);
			this->dataGridView_wizyta_pracownik->Name = L"dataGridView_wizyta_pracownik";
			this->dataGridView_wizyta_pracownik->Size = System::Drawing::Size(450, 75);
			this->dataGridView_wizyta_pracownik->TabIndex = 30;
			this->dataGridView_wizyta_pracownik->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_wizyta_pracownik_CellDoubleClick);
			// 
			// txt_wizyta_pracownikszukaj
			// 
			this->txt_wizyta_pracownikszukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_wizyta_pracownikszukaj->Location = System::Drawing::Point(97, 283);
			this->txt_wizyta_pracownikszukaj->Name = L"txt_wizyta_pracownikszukaj";
			this->txt_wizyta_pracownikszukaj->Size = System::Drawing::Size(133, 22);
			this->txt_wizyta_pracownikszukaj->TabIndex = 29;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label27->Location = System::Drawing::Point(8, 283);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 16);
			this->label27->TabIndex = 28;
			this->label27->Text = L"Pracownik:";
			// 
			// button_wizyta_pracownikszukaj
			// 
			this->button_wizyta_pracownikszukaj->Location = System::Drawing::Point(11, 311);
			this->button_wizyta_pracownikszukaj->Name = L"button_wizyta_pracownikszukaj";
			this->button_wizyta_pracownikszukaj->Size = System::Drawing::Size(219, 36);
			this->button_wizyta_pracownikszukaj->TabIndex = 27;
			this->button_wizyta_pracownikszukaj->Text = L"Szukaj";
			this->button_wizyta_pracownikszukaj->UseVisualStyleBackColor = true;
			this->button_wizyta_pracownikszukaj->Click += gcnew System::EventHandler(this, &Program::button_wizyta_pracownikszukaj_Click);
			// 
			// dataGridView_wizyta_klient
			// 
			this->dataGridView_wizyta_klient->AllowUserToAddRows = false;
			this->dataGridView_wizyta_klient->AllowUserToOrderColumns = true;
			this->dataGridView_wizyta_klient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_wizyta_klient->Location = System::Drawing::Point(11, 191);
			this->dataGridView_wizyta_klient->Name = L"dataGridView_wizyta_klient";
			this->dataGridView_wizyta_klient->Size = System::Drawing::Size(450, 86);
			this->dataGridView_wizyta_klient->TabIndex = 26;
			this->dataGridView_wizyta_klient->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_wizyta_klient_CellDoubleClick);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(684, 3);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 21;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Program::monthCalendar1_DateSelected);
			// 
			// dataGridView_wizyta_usluga
			// 
			this->dataGridView_wizyta_usluga->AllowUserToAddRows = false;
			this->dataGridView_wizyta_usluga->AllowUserToOrderColumns = true;
			this->dataGridView_wizyta_usluga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_wizyta_usluga->Location = System::Drawing::Point(11, 61);
			this->dataGridView_wizyta_usluga->Name = L"dataGridView_wizyta_usluga";
			this->dataGridView_wizyta_usluga->Size = System::Drawing::Size(450, 66);
			this->dataGridView_wizyta_usluga->TabIndex = 20;
			this->dataGridView_wizyta_usluga->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_wizyta_usluga_CellDoubleClick);
			// 
			// txt_wizyta_klientszukaj
			// 
			this->txt_wizyta_klientszukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_wizyta_klientszukaj->Location = System::Drawing::Point(97, 130);
			this->txt_wizyta_klientszukaj->Name = L"txt_wizyta_klientszukaj";
			this->txt_wizyta_klientszukaj->Size = System::Drawing::Size(133, 22);
			this->txt_wizyta_klientszukaj->TabIndex = 15;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(8, 130);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(50, 16);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Klient:";
			// 
			// button_wizyta_klientszukaj
			// 
			this->button_wizyta_klientszukaj->Location = System::Drawing::Point(11, 158);
			this->button_wizyta_klientszukaj->Name = L"button_wizyta_klientszukaj";
			this->button_wizyta_klientszukaj->Size = System::Drawing::Size(219, 27);
			this->button_wizyta_klientszukaj->TabIndex = 13;
			this->button_wizyta_klientszukaj->Text = L"Szukaj";
			this->button_wizyta_klientszukaj->UseVisualStyleBackColor = true;
			this->button_wizyta_klientszukaj->Click += gcnew System::EventHandler(this, &Program::button_wizyta_klientszukaj_Click);
			// 
			// txt_wizyta_uslugaszukaj
			// 
			this->txt_wizyta_uslugaszukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_wizyta_uslugaszukaj->Location = System::Drawing::Point(97, 0);
			this->txt_wizyta_uslugaszukaj->Name = L"txt_wizyta_uslugaszukaj";
			this->txt_wizyta_uslugaszukaj->Size = System::Drawing::Size(133, 22);
			this->txt_wizyta_uslugaszukaj->TabIndex = 12;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label26->Location = System::Drawing::Point(8, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(64, 16);
			this->label26->TabIndex = 11;
			this->label26->Text = L"Us³uga:";
			// 
			// button_wizyta_uslugaszukaj
			// 
			this->button_wizyta_uslugaszukaj->Location = System::Drawing::Point(11, 28);
			this->button_wizyta_uslugaszukaj->Name = L"button_wizyta_uslugaszukaj";
			this->button_wizyta_uslugaszukaj->Size = System::Drawing::Size(219, 27);
			this->button_wizyta_uslugaszukaj->TabIndex = 10;
			this->button_wizyta_uslugaszukaj->Text = L"Szukaj";
			this->button_wizyta_uslugaszukaj->UseVisualStyleBackColor = true;
			this->button_wizyta_uslugaszukaj->Click += gcnew System::EventHandler(this, &Program::button_wizyta_uslugaszukaj_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button_klient_modyfikacja);
			this->tabPage5->Controls->Add(this->button_klient_usun);
			this->tabPage5->Controls->Add(this->button_klient_dodaj);
			this->tabPage5->Controls->Add(this->groupBox_klient);
			this->tabPage5->Controls->Add(this->dataGridView_klient);
			this->tabPage5->Controls->Add(this->txt_klient_szukaj);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->button_klient_szukaj);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(965, 425);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Klienci";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button_klient_modyfikacja
			// 
			this->button_klient_modyfikacja->Enabled = false;
			this->button_klient_modyfikacja->Location = System::Drawing::Point(572, 6);
			this->button_klient_modyfikacja->Name = L"button_klient_modyfikacja";
			this->button_klient_modyfikacja->Size = System::Drawing::Size(158, 49);
			this->button_klient_modyfikacja->TabIndex = 10;
			this->button_klient_modyfikacja->Text = L"Modyfikuj dane klienta";
			this->button_klient_modyfikacja->UseVisualStyleBackColor = true;
			this->button_klient_modyfikacja->Click += gcnew System::EventHandler(this, &Program::button_klient_modyfikacja_Click);
			// 
			// button_klient_usun
			// 
			this->button_klient_usun->Enabled = false;
			this->button_klient_usun->Location = System::Drawing::Point(425, 6);
			this->button_klient_usun->Name = L"button_klient_usun";
			this->button_klient_usun->Size = System::Drawing::Size(116, 49);
			this->button_klient_usun->TabIndex = 9;
			this->button_klient_usun->Text = L"Usuñ klienta";
			this->button_klient_usun->UseVisualStyleBackColor = true;
			this->button_klient_usun->Click += gcnew System::EventHandler(this, &Program::button_klient_usun_Click);
			// 
			// button_klient_dodaj
			// 
			this->button_klient_dodaj->Location = System::Drawing::Point(266, 6);
			this->button_klient_dodaj->Name = L"button_klient_dodaj";
			this->button_klient_dodaj->Size = System::Drawing::Size(116, 49);
			this->button_klient_dodaj->TabIndex = 4;
			this->button_klient_dodaj->Text = L"Dodaj klienta";
			this->button_klient_dodaj->UseVisualStyleBackColor = true;
			this->button_klient_dodaj->Click += gcnew System::EventHandler(this, &Program::button_klient_dodaj_Click);
			// 
			// groupBox_klient
			// 
			this->groupBox_klient->Controls->Add(this->txt_kodpocztowy);
			this->groupBox_klient->Controls->Add(this->label23);
			this->groupBox_klient->Controls->Add(this->txt_miejscowosc);
			this->groupBox_klient->Controls->Add(this->label22);
			this->groupBox_klient->Controls->Add(this->txt_numer);
			this->groupBox_klient->Controls->Add(this->label21);
			this->groupBox_klient->Controls->Add(this->txt_ulica);
			this->groupBox_klient->Controls->Add(this->label20);
			this->groupBox_klient->Controls->Add(this->txt_telefon);
			this->groupBox_klient->Controls->Add(this->label19);
			this->groupBox_klient->Controls->Add(this->txt_email);
			this->groupBox_klient->Controls->Add(this->label18);
			this->groupBox_klient->Controls->Add(this->txt_nazwisko);
			this->groupBox_klient->Controls->Add(this->label17);
			this->groupBox_klient->Controls->Add(this->txt_imie);
			this->groupBox_klient->Controls->Add(this->label16);
			this->groupBox_klient->Location = System::Drawing::Point(0, 244);
			this->groupBox_klient->Name = L"groupBox_klient";
			this->groupBox_klient->Size = System::Drawing::Size(835, 175);
			this->groupBox_klient->TabIndex = 8;
			this->groupBox_klient->TabStop = false;
			this->groupBox_klient->Text = L"Dane klienta:";
			// 
			// txt_kodpocztowy
			// 
			this->txt_kodpocztowy->Location = System::Drawing::Point(484, 112);
			this->txt_kodpocztowy->Mask = L"00-999";
			this->txt_kodpocztowy->Name = L"txt_kodpocztowy";
			this->txt_kodpocztowy->Size = System::Drawing::Size(100, 20);
			this->txt_kodpocztowy->TabIndex = 15;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(402, 112);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(76, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"kod pocztowy:";
			// 
			// txt_miejscowosc
			// 
			this->txt_miejscowosc->Location = System::Drawing::Point(484, 140);
			this->txt_miejscowosc->Name = L"txt_miejscowosc";
			this->txt_miejscowosc->Size = System::Drawing::Size(100, 20);
			this->txt_miejscowosc->TabIndex = 13;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(402, 143);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 13);
			this->label22->TabIndex = 12;
			this->label22->Text = L"miejscowoœæ:";
			// 
			// txt_numer
			// 
			this->txt_numer->Location = System::Drawing::Point(484, 77);
			this->txt_numer->Name = L"txt_numer";
			this->txt_numer->Size = System::Drawing::Size(100, 20);
			this->txt_numer->TabIndex = 11;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(424, 80);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(39, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"numer:";
			// 
			// txt_ulica
			// 
			this->txt_ulica->Location = System::Drawing::Point(484, 42);
			this->txt_ulica->Name = L"txt_ulica";
			this->txt_ulica->Size = System::Drawing::Size(100, 20);
			this->txt_ulica->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(424, 45);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"ulica:";
			// 
			// txt_telefon
			// 
			this->txt_telefon->Location = System::Drawing::Point(130, 144);
			this->txt_telefon->Name = L"txt_telefon";
			this->txt_telefon->Size = System::Drawing::Size(100, 20);
			this->txt_telefon->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(70, 147);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 13);
			this->label19->TabIndex = 6;
			this->label19->Text = L"telefon:";
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(130, 109);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(100, 20);
			this->txt_email->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(70, 112);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"email:";
			// 
			// txt_nazwisko
			// 
			this->txt_nazwisko->Location = System::Drawing::Point(130, 74);
			this->txt_nazwisko->Name = L"txt_nazwisko";
			this->txt_nazwisko->Size = System::Drawing::Size(100, 20);
			this->txt_nazwisko->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(70, 77);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Nazwisko:";
			// 
			// txt_imie
			// 
			this->txt_imie->Location = System::Drawing::Point(130, 39);
			this->txt_imie->Name = L"txt_imie";
			this->txt_imie->Size = System::Drawing::Size(100, 20);
			this->txt_imie->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(70, 42);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Imiê:";
			// 
			// dataGridView_klient
			// 
			this->dataGridView_klient->AllowUserToAddRows = false;
			this->dataGridView_klient->AllowUserToOrderColumns = true;
			this->dataGridView_klient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_klient->Location = System::Drawing::Point(-28, 85);
			this->dataGridView_klient->Name = L"dataGridView_klient";
			this->dataGridView_klient->Size = System::Drawing::Size(863, 153);
			this->dataGridView_klient->TabIndex = 7;
			this->dataGridView_klient->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_klient_CellDoubleClick);
			// 
			// txt_klient_szukaj
			// 
			this->txt_klient_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_klient_szukaj->Location = System::Drawing::Point(59, 3);
			this->txt_klient_szukaj->Name = L"txt_klient_szukaj";
			this->txt_klient_szukaj->Size = System::Drawing::Size(133, 22);
			this->txt_klient_szukaj->TabIndex = 6;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(3, 3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 16);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Klient:";
			// 
			// button_klient_szukaj
			// 
			this->button_klient_szukaj->Location = System::Drawing::Point(6, 28);
			this->button_klient_szukaj->Name = L"button_klient_szukaj";
			this->button_klient_szukaj->Size = System::Drawing::Size(186, 27);
			this->button_klient_szukaj->TabIndex = 4;
			this->button_klient_szukaj->Text = L"Szukaj";
			this->button_klient_szukaj->UseVisualStyleBackColor = true;
			this->button_klient_szukaj->Click += gcnew System::EventHandler(this, &Program::button_klient_szukaj_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->txt_pokaz_nazwisko_pracownika);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->txt_pokaz_imie_pracownika);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->button_szukaj_pracownika_uslugi);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(965, 425);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pracownicy i us³ugi";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// txt_pokaz_nazwisko_pracownika
			// 
			this->txt_pokaz_nazwisko_pracownika->Location = System::Drawing::Point(329, 32);
			this->txt_pokaz_nazwisko_pracownika->Name = L"txt_pokaz_nazwisko_pracownika";
			this->txt_pokaz_nazwisko_pracownika->Size = System::Drawing::Size(100, 20);
			this->txt_pokaz_nazwisko_pracownika->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(253, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Nazwisko";
			// 
			// txt_pokaz_imie_pracownika
			// 
			this->txt_pokaz_imie_pracownika->Location = System::Drawing::Point(329, 6);
			this->txt_pokaz_imie_pracownika->Name = L"txt_pokaz_imie_pracownika";
			this->txt_pokaz_imie_pracownika->Size = System::Drawing::Size(100, 20);
			this->txt_pokaz_imie_pracownika->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(253, 6);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Imiê";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(92, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 22);
			this->textBox1->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(3, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 16);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Pracownik:";
			// 
			// button_szukaj_pracownika_uslugi
			// 
			this->button_szukaj_pracownika_uslugi->Location = System::Drawing::Point(6, 28);
			this->button_szukaj_pracownika_uslugi->Name = L"button_szukaj_pracownika_uslugi";
			this->button_szukaj_pracownika_uslugi->Size = System::Drawing::Size(219, 27);
			this->button_szukaj_pracownika_uslugi->TabIndex = 6;
			this->button_szukaj_pracownika_uslugi->Text = L"Szukaj";
			this->button_szukaj_pracownika_uslugi->UseVisualStyleBackColor = true;
			this->button_szukaj_pracownika_uslugi->Click += gcnew System::EventHandler(this, &Program::button_szukaj_pracownika_uslugi_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(553, 235);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(192, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Us³ugi wykonywane przez pracownika:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(553, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Pracownik:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Wszystkie us³ugi firmy:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(0, 172);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(366, 253);
			this->dataGridView3->TabIndex = 2;
			this->dataGridView3->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView3_CellDoubleClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(556, 251);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(409, 174);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView2_CellDoubleClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(556, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(409, 174);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView1_CellDoubleClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox_Uslugi);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->txt_szukaj_usluge);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->dataGridView_uslugi);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(965, 425);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Us³ugi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox_Uslugi
			// 
			this->groupBox_Uslugi->Controls->Add(this->button3);
			this->groupBox_Uslugi->Controls->Add(this->button_modyfikuj_usluge);
			this->groupBox_Uslugi->Controls->Add(this->button_usun_usluge);
			this->groupBox_Uslugi->Controls->Add(this->button_dodaj_usluge);
			this->groupBox_Uslugi->Controls->Add(this->txt_opis_uslugi);
			this->groupBox_Uslugi->Controls->Add(this->txt_czas_uslugi);
			this->groupBox_Uslugi->Controls->Add(this->txt_cena_uslugi);
			this->groupBox_Uslugi->Controls->Add(this->txt_nazwa_uslugi);
			this->groupBox_Uslugi->Controls->Add(this->label8);
			this->groupBox_Uslugi->Controls->Add(this->label7);
			this->groupBox_Uslugi->Controls->Add(this->label6);
			this->groupBox_Uslugi->Controls->Add(this->label5);
			this->groupBox_Uslugi->Location = System::Drawing::Point(0, 0);
			this->groupBox_Uslugi->Name = L"groupBox_Uslugi";
			this->groupBox_Uslugi->Size = System::Drawing::Size(609, 422);
			this->groupBox_Uslugi->TabIndex = 4;
			this->groupBox_Uslugi->TabStop = false;
			this->groupBox_Uslugi->Text = L"Us³ugi";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(528, 366);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 53);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Czyœæ pola";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Program::button3_Click);
			// 
			// button_modyfikuj_usluge
			// 
			this->button_modyfikuj_usluge->Enabled = false;
			this->button_modyfikuj_usluge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button_modyfikuj_usluge->Location = System::Drawing::Point(328, 366);
			this->button_modyfikuj_usluge->Name = L"button_modyfikuj_usluge";
			this->button_modyfikuj_usluge->Size = System::Drawing::Size(195, 56);
			this->button_modyfikuj_usluge->TabIndex = 10;
			this->button_modyfikuj_usluge->Text = L"Modyfikuj us³ugê";
			this->button_modyfikuj_usluge->UseVisualStyleBackColor = true;
			this->button_modyfikuj_usluge->Click += gcnew System::EventHandler(this, &Program::button_modyfikuj_usluge_Click);
			// 
			// button_usun_usluge
			// 
			this->button_usun_usluge->Enabled = false;
			this->button_usun_usluge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button_usun_usluge->Location = System::Drawing::Point(165, 366);
			this->button_usun_usluge->Name = L"button_usun_usluge";
			this->button_usun_usluge->Size = System::Drawing::Size(157, 56);
			this->button_usun_usluge->TabIndex = 9;
			this->button_usun_usluge->Text = L"Usuñ us³ugê";
			this->button_usun_usluge->UseVisualStyleBackColor = true;
			this->button_usun_usluge->Click += gcnew System::EventHandler(this, &Program::button_usun_usluge_Click);
			// 
			// button_dodaj_usluge
			// 
			this->button_dodaj_usluge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button_dodaj_usluge->Location = System::Drawing::Point(2, 366);
			this->button_dodaj_usluge->Name = L"button_dodaj_usluge";
			this->button_dodaj_usluge->Size = System::Drawing::Size(157, 56);
			this->button_dodaj_usluge->TabIndex = 8;
			this->button_dodaj_usluge->Text = L"Dodaj us³ugê";
			this->button_dodaj_usluge->UseVisualStyleBackColor = true;
			this->button_dodaj_usluge->Click += gcnew System::EventHandler(this, &Program::button_dodaj_usluge_Click);
			// 
			// txt_opis_uslugi
			// 
			this->txt_opis_uslugi->Location = System::Drawing::Point(116, 148);
			this->txt_opis_uslugi->Multiline = true;
			this->txt_opis_uslugi->Name = L"txt_opis_uslugi";
			this->txt_opis_uslugi->Size = System::Drawing::Size(229, 170);
			this->txt_opis_uslugi->TabIndex = 7;
			// 
			// txt_czas_uslugi
			// 
			this->txt_czas_uslugi->Location = System::Drawing::Point(116, 110);
			this->txt_czas_uslugi->Name = L"txt_czas_uslugi";
			this->txt_czas_uslugi->Size = System::Drawing::Size(100, 20);
			this->txt_czas_uslugi->TabIndex = 6;
			// 
			// txt_cena_uslugi
			// 
			this->txt_cena_uslugi->Location = System::Drawing::Point(116, 70);
			this->txt_cena_uslugi->Name = L"txt_cena_uslugi";
			this->txt_cena_uslugi->Size = System::Drawing::Size(100, 20);
			this->txt_cena_uslugi->TabIndex = 5;
			// 
			// txt_nazwa_uslugi
			// 
			this->txt_nazwa_uslugi->Location = System::Drawing::Point(116, 30);
			this->txt_nazwa_uslugi->Name = L"txt_nazwa_uslugi";
			this->txt_nazwa_uslugi->Size = System::Drawing::Size(229, 20);
			this->txt_nazwa_uslugi->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Opis us³ugi:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Czas wykonania:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Cena us³ugi:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Nazwa us³ugi:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(852, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Szukaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// txt_szukaj_usluge
			// 
			this->txt_szukaj_usluge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_szukaj_usluge->Location = System::Drawing::Point(694, 6);
			this->txt_szukaj_usluge->Name = L"txt_szukaj_usluge";
			this->txt_szukaj_usluge->Size = System::Drawing::Size(152, 29);
			this->txt_szukaj_usluge->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(611, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Us³uga:";
			// 
			// dataGridView_uslugi
			// 
			this->dataGridView_uslugi->AllowUserToAddRows = false;
			this->dataGridView_uslugi->AllowUserToOrderColumns = true;
			this->dataGridView_uslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_uslugi->Location = System::Drawing::Point(615, 43);
			this->dataGridView_uslugi->Name = L"dataGridView_uslugi";
			this->dataGridView_uslugi->Size = System::Drawing::Size(350, 382);
			this->dataGridView_uslugi->TabIndex = 0;
			this->dataGridView_uslugi->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dataGridView_uslugi_CellDoubleClick);
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
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 454);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_pracownik))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_klient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_wizyta_usluga))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox_klient->ResumeLayout(false);
			this->groupBox_klient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_klient))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox_Uslugi->ResumeLayout(false);
			this->groupBox_Uslugi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_uslugi))->EndInit();
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
			 private: Void odswiez_siatke(Windows::Forms::DataGridView^ siatka)
			 {
				 MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
				 MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uzytkownicy_id,uzytkownik_nazwa AS Login,imie AS Imie,nazwisko AS Nazwisko,pracownik AS 'Czy pracownik?' FROM uzytkownicy WHERE CONCAT(imie, ' ',nazwisko,uzytkownik_nazwa) LIKE '%" + txt_Pracownicy_szukaj->Text + "%' ORDER BY uzytkownik_nazwa;", lacz_baze);

				 try
				 {
					 lacz_baze->Open();
					 MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
					 moja_baza->SelectCommand = zapytanie_do_bazy;
					 DataTable^ tabela = gcnew DataTable();
					 moja_baza->Fill(tabela);

					 BindingSource^ zrodlo_siatki = gcnew BindingSource();
					 zrodlo_siatki->DataSource = tabela;
					 siatka->DataSource = zrodlo_siatki;
					 lacz_baze->Close();
				 }
				 catch (Exception^ komunikat_bledu)
				 {
					 MessageBox::Show(komunikat_bledu->Message);
				 }
			 }
					  private: void szukaj_uslug(System::Windows::Forms::TextBox^ txt_co_szukasz, System::Windows::Forms::DataGridView^ tab)
					  {
						  MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
						  MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uslugi_id, nazwa_uslugi AS 'Nazwa uslugi',czas_trwania AS 'Czas wykonania',cena AS 'Cena [zl]',opis_uslugi AS 'Opis' FROM baza_danych.uslugi WHERE nazwa_uslugi LIKE '%" + txt_co_szukasz->Text + "%' ORDER BY nazwa_uslugi;", lacz_baze);

						  try
						  {
							  lacz_baze->Open();
							  MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
							  moja_baza->SelectCommand = zapytanie_do_bazy;
							  DataTable^ tabela = gcnew DataTable();
							  moja_baza->Fill(tabela);

							  BindingSource^ zrodlo_siatki = gcnew BindingSource();
							  zrodlo_siatki->DataSource = tabela;
							  tab->DataSource = zrodlo_siatki;
							  lacz_baze->Close();
						  }
						  catch (Exception^ komunikat_bledu)
						  {
							  MessageBox::Show(komunikat_bledu->Message);
						  }
						  tab->Columns[0]->Visible = false;
					  }

private: System::Void button_pracownicy_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	odswiez_siatke(dataGridView_siatkaPracownikow);
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
	odswiez_siatke(dataGridView_siatkaPracownikow);
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
			bool rezultat = dane->HasRows;
			dane->Close();
			
			if (checkBox_Pracownik->Checked && dane->HasRows)
			{
				zapytanie->CommandText = "UPDATE baza_danych.godziny_pracy SET pon_od = '" + txtPON_poczatek->Text + "',pon_do = '" + txtPON_koniec->Text + "',wt_od = '" + txtWT_poczatek->Text + "',wt_do = '" + txtWT_koniec->Text + "', sr_od = '" + txtSR_poczatek->Text + "', sr_do = '" + txtSR_koniec->Text + "',cz_od = '" + txtCZ_poczatek->Text + "',cz_do = '" + txtCZ_koniec->Text + "',pt_od = '" + txtPT_poczatek->Text + "',pt_do = '" + txtPT_koniec->Text + "',sob_od = '" + txtSO_poczatek->Text + "',sob_do = '" + txtSO_koniec->Text + "' WHERE godziny_uzytkownicy_id = '"+id_teraz+"';";
				zapytanie->ExecuteNonQuery();
			}
			else if (checkBox_Pracownik->Checked && rezultat == false)
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
	odswiez_siatke(dataGridView_siatkaPracownikow);
}
		 private: Void wyczysc_tekst(Control^ zbior,int pomoc)
		 {
			 for each(Control^ element in zbior->Controls)
			 {
				 if (element->GetType() == TextBox::typeid || element->GetType() == MaskedTextBox::typeid)
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
		 odswiez_siatke(dataGridView_siatkaPracownikow);
		 
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj_uslug(txt_szukaj_usluge, dataGridView_uslugi);
}
private: System::Void button_dodaj_usluge_Click(System::Object^  sender, System::EventArgs^  e) {


	if (txt_nazwa_uslugi->Text->Length < 2 || txt_cena_uslugi->Text->Length < 1 || txt_czas_uslugi->Text->Length < 5)
	{
		MessageBox::Show("BL¥D!! Nazwa us³ugi < 2 znaki, cena < 1 znak , czas uslugi <5 format: 00:00");
	}
	else
	{
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		
		String ^ zmiana_przecinka = txt_cena_uslugi->Text->Replace(",",".");
		lacz_baze->Open();

		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			zapytanie->CommandText = "INSERT into baza_danych.uslugi SET nazwa_uslugi='" + txt_nazwa_uslugi->Text + "', czas_trwania ='" + txt_czas_uslugi->Text + "',cena='" + zmiana_przecinka + "',opis_uslugi = '"+ txt_opis_uslugi->Text +"';";
			zapytanie->ExecuteNonQuery();
			
			transakcja->Commit();
			MessageBox::Show("Dodanie us³ugi do opcji pomyœlne!");
			wyczysc_tekst(groupBox_Uslugi, 0);
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
	szukaj_uslug(txt_szukaj_usluge, dataGridView_uslugi);

}
private: System::Void dataGridView_uslugi_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		button_modyfikuj_usluge->Enabled = true;
		button_usun_usluge->Enabled = true;
		id_teraz = Convert::ToInt32(dataGridView_uslugi->Rows[e->RowIndex]->Cells[0]->Value);
		txt_nazwa_uslugi->Text = Convert::ToString(dataGridView_uslugi->Rows[e->RowIndex]->Cells["Nazwa uslugi"]->Value);
		txt_czas_uslugi->Text = Convert::ToString(dataGridView_uslugi->Rows[e->RowIndex]->Cells["Czas wykonania"]->Value);
		txt_cena_uslugi->Text = Convert::ToString(dataGridView_uslugi->Rows[e->RowIndex]->Cells["Cena [zl]"]->Value);
		txt_opis_uslugi->Text = Convert::ToString(dataGridView_uslugi->Rows[e->RowIndex]->Cells["Opis"]->Value);
	}
}
private: System::Void button_modyfikuj_usluge_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_nazwa_uslugi->Text->Length < 2 || txt_cena_uslugi->Text->Length < 1 || txt_czas_uslugi->Text->Length < 5)
	{
		MessageBox::Show("BL¥D!! Nazwa us³ugi < 2 znaki, cena < 1 znak , czas uslugi <5 format: 00:00");
	}
	else
	{
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		//MySqlDataReader^ dane;
		lacz_baze->Open();
		String ^ zmiana_przecinka = txt_cena_uslugi->Text->Replace(",", ".");
		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			//zapytanie->CommandText = "SELECT * FROM baza_danych.uslugi WHERE uslugi_id = " + id_teraz + "";
			//dane = zapytanie->ExecuteReader();
			//dane->Close();

			zapytanie->CommandText = "UPDATE baza_danych.uslugi SET nazwa_uslugi='" + txt_nazwa_uslugi->Text + "', czas_trwania ='" + txt_czas_uslugi->Text + "',cena='" + zmiana_przecinka + "',opis_uslugi = '" + txt_opis_uslugi->Text + "'WHERE uslugi_id = '"+id_teraz+"';";
			zapytanie->ExecuteNonQuery();
			MessageBox::Show("Modyfikacja zosta³a wykonana pomyœlnie.");
			wyczysc_tekst(groupBox_Uslugi, 0);
			transakcja->Commit();
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
	szukaj_uslug(txt_szukaj_usluge,dataGridView_uslugi);
}
private: System::Void button_usun_usluge_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
	MySqlTransaction^ transakcja;
	lacz_baze->Open();

	transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

	zapytanie->Connection = lacz_baze;
	zapytanie->Transaction = transakcja;

if (MessageBox::Show("Czy chcesz usunac wybrana usluge?", "UWAGA !!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
{
	try {
		zapytanie->CommandText = "DELETE FROM baza_danych.uslugi WHERE uslugi_id = " + id_teraz + ";";
		zapytanie->ExecuteNonQuery();
		transakcja->Commit();
		MessageBox::Show("Us³uga zosta³a usuniêta z bazy");
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
		transakcja->Rollback();
	}
	lacz_baze->Close();
	wyczysc_tekst(groupBox_Uslugi, 0);
	button_modyfikuj_usluge->Enabled = false;
	button_usun_usluge->Enabled = false;
}
szukaj_uslug(txt_szukaj_usluge, dataGridView_uslugi);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	wyczysc_tekst(groupBox_Uslugi, 0);
	txt_szukaj_usluge->Text = "";
}

private: System::Void button_szukaj_pracownika_uslugi_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uzytkownicy_id,uzytkownik_nazwa AS Login,imie AS Imie,nazwisko AS Nazwisko,pracownik FROM uzytkownicy WHERE CONCAT(imie, ' ',nazwisko,uzytkownik_nazwa) LIKE '%" + textBox1->Text + "%' AND pracownik = '1' ORDER BY uzytkownik_nazwa;", lacz_baze);

	try
	{
		lacz_baze->Open();
		MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
		moja_baza->SelectCommand = zapytanie_do_bazy;
		DataTable^ tabela = gcnew DataTable();
		moja_baza->Fill(tabela);

		BindingSource^ zrodlo_siatki = gcnew BindingSource();
		zrodlo_siatki->DataSource = tabela;
		dataGridView1->DataSource = zrodlo_siatki;
		lacz_baze->Close();
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
	}
	dataGridView1->Columns[0]->Visible = false;
}
		 private: void odswiez_siatke_uslug_pracownika()
		 {
			 MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
			 MySqlCommand ^zapytanie_do_bazy = gcnew MySqlCommand("SELECT uslugi.uslugi_id,uslugi.nazwa_uslugi,uslugi.czas_trwania,uslugi.cena,uslugi.opis_uslugi FROM uslugi,pracownik_usluga WHERE  pracownik_usluga.uzytkownicy_uzytkownicy_id = '" + id_teraz + "' ORDER BY uslugi.nazwa_uslugi;   ", lacz_baze);
			 try
			 {
				 lacz_baze->Open();
				 MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
				 moja_baza->SelectCommand = zapytanie_do_bazy;
				 DataTable^ tabela = gcnew DataTable();
				 moja_baza->Fill(tabela);

				 BindingSource^ zrodlo_siatki = gcnew BindingSource();
				 zrodlo_siatki->DataSource = tabela;
				 dataGridView2->DataSource = zrodlo_siatki;
				 lacz_baze->Close();
			 }
			 catch (Exception^ komunikat_bledu)
			 {
				 MessageBox::Show(komunikat_bledu->Message);
			 }
		 }



private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	id_teraz = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
	txt_pokaz_imie_pracownika->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Imie"]->Value);
	txt_pokaz_nazwisko_pracownika->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Nazwisko"]->Value);

	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uslugi_id, nazwa_uslugi AS 'Nazwa uslugi',czas_trwania AS 'Czas wykonania',cena AS 'Cena [zl]',opis_uslugi AS 'Opis' FROM baza_danych.uslugi ORDER BY nazwa_uslugi;", lacz_baze);

	try
	{
		lacz_baze->Open();
		MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
		moja_baza->SelectCommand = zapytanie_do_bazy;
		DataTable^ tabela = gcnew DataTable();
		moja_baza->Fill(tabela);

		BindingSource^ zrodlo_siatki = gcnew BindingSource();
		zrodlo_siatki->DataSource = tabela;
		dataGridView3->DataSource = zrodlo_siatki;
		lacz_baze->Close();
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
	}
	//dataGridView3->Columns[0]->Visible = false;
	odswiez_siatke_uslug_pracownika();
	//dataGridView2->Columns[0]->Visible = false;

}
private: System::Void dataGridView3_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	if (MessageBox::Show("Czy chcesz dodaæ wybran¹ us³ugê do pracownika?", "UWAGA!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
		id_uslugi = Convert::ToInt32(dataGridView3->Rows[e->RowIndex]->Cells[0]->Value);
		
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("INSERT into pracownik_usluga SET uzytkownicy_uzytkownicy_id = " +id_teraz+ ", uslugi_uslugi_id = "+id_uslugi+";", lacz_baze);

		try
		{
			lacz_baze->Open();
			MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
			moja_baza->SelectCommand = zapytanie_do_bazy;
			DataTable^ tabela = gcnew DataTable();
			moja_baza->Fill(tabela);

			BindingSource^ zrodlo_siatki = gcnew BindingSource();
			zrodlo_siatki->DataSource = tabela;
			dataGridView3->DataSource = zrodlo_siatki;
			lacz_baze->Close();
			MessageBox::Show("Dodanie us³ugi pomyœlne");
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
		}
		odswiez_siatke_uslug_pracownika();
		}
}
private: System::Void dataGridView2_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	//DELETE FROM baza_danych.uslugi WHERE uslugi_id
	
	if (MessageBox::Show("Czy chcesz usun¹æ wybran¹ us³ugê od pracownika?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
		id_uslugi = Convert::ToInt32(dataGridView3->Rows[e->RowIndex]->Cells[0]->Value);

		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("DELETE FROM baza_danych.pracownik_usluga WHERE uslugi_uslugi_id = "+id_uslugi+" and uzytkownicy_uzytkownicy_id = "+id_teraz +";", lacz_baze);

		try
		{
			lacz_baze->Open();
			MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
			moja_baza->SelectCommand = zapytanie_do_bazy;
			DataTable^ tabela = gcnew DataTable();
			moja_baza->Fill(tabela);

			BindingSource^ zrodlo_siatki = gcnew BindingSource();
			zrodlo_siatki->DataSource = tabela;
			dataGridView3->DataSource = zrodlo_siatki;
			lacz_baze->Close();
			MessageBox::Show("Usuniêcie us³ugi pomyœlne");
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
		}
		odswiez_siatke_uslug_pracownika();
	}
}


		 // KIENCI @@@@@@@@@@@@@@@@@@@@@
		 private: void odswiez_klientow(Windows::Forms::DataGridView^ siatka)
		 {
			 MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
			 MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT * FROM klienci ORDER BY nazwisko;", lacz_baze);

			 try
			 {
				 lacz_baze->Open();
				 MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
				 moja_baza->SelectCommand = zapytanie_do_bazy;
				 DataTable^ tabela = gcnew DataTable();
				 moja_baza->Fill(tabela);

				 BindingSource^ zrodlo_siatki = gcnew BindingSource();
				 zrodlo_siatki->DataSource = tabela;
				 siatka->DataSource = zrodlo_siatki;
				 lacz_baze->Close();
			 }
			 catch (Exception^ komunikat_bledu)
			 {
				 MessageBox::Show(komunikat_bledu->Message);
			 }
			 siatka->Columns[0]->Visible = false;
			 wyczysc_tekst(groupBox_klient, 0);
			 //siatka->Columns["modyfikacja"]->Visible = false;
		 }

private: System::Void button_klient_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT * FROM klienci WHERE CONCAT(imie, ' ',nazwisko, ' ', miejscowosc) LIKE '%" + txt_klient_szukaj->Text + "%' ORDER BY nazwisko;", lacz_baze);

	try
	{
		lacz_baze->Open();
		MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
		moja_baza->SelectCommand = zapytanie_do_bazy;
		DataTable^ tabela = gcnew DataTable();
		moja_baza->Fill(tabela);

		BindingSource^ zrodlo_siatki = gcnew BindingSource();
		zrodlo_siatki->DataSource = tabela;
		dataGridView_klient->DataSource = zrodlo_siatki;
		lacz_baze->Close();
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
	}
	dataGridView_klient->Columns[0]->Visible = false;
	//siatka->Columns["modyfikacja"]->Visible = false;
}
private: System::Void button_klient_dodaj_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_imie->Text->Length < 2 || txt_nazwisko->Text->Length < 2)
	{
		MessageBox::Show("Imie albo nazwisko musi byæ wiêksze ni¿ 1 litera.");
	}
	else
	{
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		lacz_baze->Open();

		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			zapytanie->CommandText = "INSERT into baza_danych.klienci SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "',email='" + txt_email->Text + "',telefon='" + txt_telefon->Text + "',ulica='" + txt_ulica->Text + "',numer='" + txt_numer->Text + "',miejscowosc='" + txt_miejscowosc->Text + "',kod_pocztowy='" + txt_kodpocztowy->Text + "';";
			zapytanie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Dodanie klienta: "+ txt_imie->Text +" "+ txt_nazwisko->Text + " pomyœlne.");
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
	odswiez_klientow(dataGridView_klient);
}
private: System::Void dataGridView_klient_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (e->RowIndex >= 0)
	{
		id_teraz = Convert::ToInt32(dataGridView_klient->Rows[e->RowIndex]->Cells[0]->Value);
		txt_imie->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["imie"]->Value);
		txt_nazwisko->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["nazwisko"]->Value);
		txt_email->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["email"]->Value);
		txt_telefon->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["telefon"]->Value);
		txt_ulica->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["ulica"]->Value);
		txt_numer->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["numer"]->Value);
		txt_miejscowosc->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["miejscowosc"]->Value);
		txt_kodpocztowy->Text = Convert::ToString(dataGridView_klient->Rows[e->RowIndex]->Cells["kod_pocztowy"]->Value);
		button_klient_modyfikacja->Enabled = true;
		button_klient_usun->Enabled = true;
	}
}
private: System::Void button_klient_usun_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Czy chcesz usun¹æ wybranego klienta?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{

		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("DELETE FROM baza_danych.klienci WHERE klienci_id = " + id_teraz + ";", lacz_baze);

		try
		{
			lacz_baze->Open();
			MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
			moja_baza->SelectCommand = zapytanie_do_bazy;
			DataTable^ tabela = gcnew DataTable();
			moja_baza->Fill(tabela);

			BindingSource^ zrodlo_siatki = gcnew BindingSource();
			zrodlo_siatki->DataSource = tabela;
			dataGridView_klient->DataSource = zrodlo_siatki;
			lacz_baze->Close();
			MessageBox::Show("Usuniêcie us³ugi pomyœlne");
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
		}
		odswiez_klientow(dataGridView_klient);
		button_klient_usun->Enabled = false;
		button_klient_modyfikacja->Enabled = false;
	}
}
private: System::Void button_klient_modyfikacja_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_imie->Text->Length < 2 || txt_nazwisko->Text->Length < 2)
	{
		MessageBox::Show("Imie albo nazwisko musi byæ wiêksze ni¿ 1 litera.");
	}
	else
	{
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		//MySqlDataReader^ dane;
		lacz_baze->Open();
		String ^ zmiana_przecinka = txt_cena_uslugi->Text->Replace(",", ".");
		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			//zapytanie->CommandText = "SELECT * FROM baza_danych.uslugi WHERE uslugi_id = " + id_teraz + "";
			//dane = zapytanie->ExecuteReader();
			//dane->Close();

			zapytanie->CommandText = "UPDATE baza_danych.klienci SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "',email='" + txt_email->Text + "',telefon='" + txt_telefon->Text + "',ulica='" + txt_ulica->Text + "',numer='" + txt_numer->Text + "',miejscowosc='" + txt_miejscowosc->Text + "',kod_pocztowy='" + txt_kodpocztowy->Text + "' WHERE klienci_id = '"+id_teraz +"';";
			zapytanie->ExecuteNonQuery();
			MessageBox::Show("Modyfikacja zosta³a wykonana pomyœlnie.");
			wyczysc_tekst(groupBox_Uslugi, 0);
			transakcja->Commit();
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
	odswiez_klientow(dataGridView_klient);
	button_klient_usun->Enabled = false;
	button_klient_modyfikacja->Enabled = false;
}
private: System::Void button_wizyta_uslugaszukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj_uslug(txt_wizyta_uslugaszukaj, dataGridView_wizyta_usluga);
}
private: System::Void dataGridView_wizyta_usluga_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		id_uslugi = Convert::ToInt32(dataGridView_wizyta_usluga->Rows[e->RowIndex]->Cells[0]->Value);
		txt_wizyta_usluga->Text = Convert::ToString(dataGridView_wizyta_usluga->Rows[e->RowIndex]->Cells["Nazwa uslugi"]->Value);
	}
}
private: System::Void button_wizyta_klientszukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT * FROM klienci WHERE CONCAT(imie, ' ',nazwisko, ' ', miejscowosc) LIKE '%" + txt_wizyta_klientszukaj->Text + "%' ORDER BY nazwisko;", lacz_baze);

	try
	{
		lacz_baze->Open();
		MySqlDataAdapter^ moja_baza = gcnew MySqlDataAdapter();
		moja_baza->SelectCommand = zapytanie_do_bazy;
		DataTable^ tabela = gcnew DataTable();
		moja_baza->Fill(tabela);

		BindingSource^ zrodlo_siatki = gcnew BindingSource();
		zrodlo_siatki->DataSource = tabela;
		dataGridView_wizyta_klient->DataSource = zrodlo_siatki;
		lacz_baze->Close();
	}
	catch (Exception^ komunikat_bledu)
	{
		MessageBox::Show(komunikat_bledu->Message);
	}
	dataGridView_wizyta_klient->Columns[0]->Visible = false;
}

private: System::Void dataGridView_wizyta_klient_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		id_klient = Convert::ToInt32(dataGridView_wizyta_klient->Rows[e->RowIndex]->Cells[0]->Value);
		txt_wizyta_klient->Text = Convert::ToString(dataGridView_wizyta_klient->Rows[e->RowIndex]->Cells["imie"]->Value)+ "  "+ Convert::ToString(dataGridView_wizyta_klient->Rows[e->RowIndex]->Cells["nazwisko"]->Value);
		
	}
}
private: System::Void button_wizyta_pracownikszukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	odswiez_siatke(dataGridView_wizyta_pracownik);
	dataGridView_wizyta_pracownik->Columns[0]->Visible = false;
}
private: System::Void dataGridView_wizyta_pracownik_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String ^ minuty;
	int licznik = 0;
	
	int pomoc = 0;
	int g_start, g_stop;
	String^ praca_od,^ praca_do;
	
	groupBox_wizyty->Controls->Clear();
	
	DateTime^ dzien_tygodnia = Convert::ToDateTime(data_wizyty);
	int dzien = Convert::ToInt32(dzien_tygodnia->DayOfWeek);
	
	if (e->RowIndex >= 0)
	{
		id_uzytkownika = Convert::ToInt32(dataGridView_wizyta_pracownik->Rows[e->RowIndex]->Cells[0]->Value);
	}

	switch (dzien)
	{
	case 1:
		praca_od = "pon_od";
		praca_do = "pon_do";
		break;
	case 2:
		praca_od = "wt_od";
		praca_do = "wt_do";
		break;
	case 3:
		praca_od = "sr_od";
		praca_do = "sr_do";
		break;
	case 4:
		praca_od = "cz_od";
		praca_do = "cz_do";
		break;
	case 5:
		praca_od = "pt_od";
		praca_do = "pt_do";
		break;
	case 6:
		praca_od = "sob_od";
		praca_do = "sob_do";
		break;
	}
		
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	lacz_baze->Open();

	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT date_format("+praca_od+",'%H') AS g_start, date_format("+praca_do+",'%H') AS g_stop FROM godziny_pracy WHERE godziny_uzytkownicy_id = "+id_uzytkownika+"",lacz_baze);
	MySqlDataReader^ dane;
	dane = zapytanie->ExecuteReader();
	dane->Read();

	if (dane->HasRows)
	{
		g_start = Convert::ToInt32(dane->GetInt32("g_start"));
		g_stop = Convert::ToInt32(dane->GetInt32("g_stop"));
	}
	
	
	int godziny = g_start;
	if(data_wizyty != "")
	for (int i = 0; i <= g_stop; i++)
	{
		if (licznik >= 1)
		{
			minuty = "30";
			licznik = 0;
		}
		else
		{
			minuty = "00";
			licznik++;
		}
		Windows::Forms::TextBox^ txt_godziny = gcnew Windows::Forms::TextBox();
		groupBox_wizyty->Controls->Add(txt_godziny);
		godzina_wizyty = " " + Convert::ToString(godziny) + ":" + Convert::ToString(minuty);
		txt_godziny->Text = godzina_wizyty;
		txt_godziny->Click += gcnew System::EventHandler(this, &Program::txt_klik);
		txt_godziny->Width = 180;
		txt_godziny->Location = System::Drawing::Point(10, 15 + 25 * i);
		
		if (pomoc)
		{
			godziny++;
			pomoc = 0;
		}
		else
		{
			pomoc = 1;
		}	
	}
	else
	{
		MessageBox::Show("Wybierz najpierw termin");
	}
}
private: void txt_klik(System::Object^  sender, System::EventArgs^  e)
{
	TextBox^ pole = safe_cast<TextBox^>(sender);
	godzina_wizyty = pole->Text;
	txt_wizyta_termin->Text = data_wizyty + " " + godzina_wizyty;
}



private: System::Void monthCalendar1_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	//data_wizyty = Char::Format(e->Start.ToChar());
	txt_wizyta_termin->Text = data_wizyty->Replace(".","-");
	
}
private: System::Void button_wizyta_dodaj_Click(System::Object^  sender, System::EventArgs^  e) {
	if (id_uslugi == -1 || id_klient == -1 || id_uzytkownika == -1 || txt_wizyta_klient->Text->Length < 2 ||txt_wizyta_usluga->Text->Length < 2 || txt_wizyta_termin->Text->Length < 2 )
	{
		MessageBox::Show("Nie wybrane w siatce uslugi lub klient lub pracownik");
	}
	else
	{
		MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
		MySqlCommand^ zapytanie = lacz_baze->CreateCommand();
		MySqlTransaction^ transakcja;
		lacz_baze->Open();

		transakcja = lacz_baze->BeginTransaction(IsolationLevel::ReadCommitted);

		zapytanie->Connection = lacz_baze;
		zapytanie->Transaction = transakcja;

		try {
			DateTime^ rezerwacja_od = Convert::ToDateTime(txt_wizyta_termin->Text);
			zapytanie->CommandText = "INSERT INTO wizyty SET klienci_id = "+id_klient +", uslugi_id = "+id_uslugi +", uzytkownicy_id = "+id_uzytkownika +",rezerwacja_od = '"+rezerwacja_od+"', rezerwacja_do = '"+rezerwacja_od+"',status = 'oczekuje';";
			zapytanie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Dodanie rezerwacji pomyœlne.");
		}
		catch (Exception^ komunikat_bledu)
		{
			MessageBox::Show(komunikat_bledu->Message);
			transakcja->Rollback();
		}
		lacz_baze->Close();
	}
}
};
}
