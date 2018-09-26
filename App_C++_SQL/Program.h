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
		int id_uzytkownika, id_teraz;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_Pracownik = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Edycja_Imie = (gcnew System::Windows::Forms::TextBox());
			this->txt_Edycja_Nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_Edycja_Login = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_siatkaPracownikow))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(32, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(692, 447);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->txt_Pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->label_pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->button_pracownicy_szukaj);
			this->tabPage1->Controls->Add(this->dataGridView_siatkaPracownikow);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(684, 421);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pracownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txt_Pracownicy_szukaj
			// 
			this->txt_Pracownicy_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txt_Pracownicy_szukaj->Location = System::Drawing::Point(94, 3);
			this->txt_Pracownicy_szukaj->Name = L"txt_Pracownicy_szukaj";
			this->txt_Pracownicy_szukaj->Size = System::Drawing::Size(123, 22);
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
			this->button_pracownicy_szukaj->Location = System::Drawing::Point(117, 31);
			this->button_pracownicy_szukaj->Name = L"button_pracownicy_szukaj";
			this->button_pracownicy_szukaj->Size = System::Drawing::Size(73, 27);
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
			this->dataGridView_siatkaPracownikow->Location = System::Drawing::Point(233, 6);
			this->dataGridView_siatkaPracownikow->Name = L"dataGridView_siatkaPracownikow";
			this->dataGridView_siatkaPracownikow->Size = System::Drawing::Size(448, 401);
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
			this->tabPage2->Size = System::Drawing::Size(684, 421);
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
			this->groupBox1->Location = System::Drawing::Point(202, 85);
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
			this->groupBox2->Size = System::Drawing::Size(209, 166);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edycja danych u¿ytkownika";
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
			// txt_Edycja_Imie
			// 
			this->txt_Edycja_Imie->Location = System::Drawing::Point(82, 37);
			this->txt_Edycja_Imie->Name = L"txt_Edycja_Imie";
			this->txt_Edycja_Imie->Size = System::Drawing::Size(100, 20);
			this->txt_Edycja_Imie->TabIndex = 2;
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
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 458);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_siatkaPracownikow))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
private: System::Void button_pracownicy_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT uzytkownicy_id,uzytkownik_nazwa AS Login,imie AS Imie,nazwisko AS Nazwisko,pracownik AS 'Czy pracownik?' FROM uzytkownicy WHERE CONCAT(imie, ' ',nazwisko,uzytkownik_nazwa) LIKE '%"+txt_Pracownicy_szukaj->Text+"%' ORDER BY uzytkownik_nazwa;", lacz_baze);
	
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
	dataGridView_siatkaPracownikow->Columns[0]->Visible = false;
}
private: System::Void dataGridView_siatkaPracownikow_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		id_teraz = Convert::ToInt32(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells[0]->Value);
		txt_Edycja_Imie->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Imie"]->Value);
		txt_Edycja_Nazwisko->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Nazwisko"]->Value);
		txt_Edycja_Login->Text = Convert::ToString(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Login"]->Value);
		checkBox_Pracownik->Checked = Convert::ToBoolean(dataGridView_siatkaPracownikow->Rows[e->RowIndex]->Cells["Czy pracownik?"]->Value);
	}
}
};
}
