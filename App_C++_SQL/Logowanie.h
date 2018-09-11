#pragma once
#include "Program.h"

namespace AppCSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Podsumowanie informacji o Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Anuluj;
	protected:
	private: System::Windows::Forms::Button^  button_Logowanie;
	private: System::Windows::Forms::TextBox^  txt_ID_uzytkownika;
	private: System::Windows::Forms::TextBox^  txt_Haslo;
	private: System::Windows::Forms::Label^  label_napis_uzytkownik;
	private: System::Windows::Forms::Label^  label_napis_haslo;

	protected:

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
			this->button_Anuluj = (gcnew System::Windows::Forms::Button());
			this->button_Logowanie = (gcnew System::Windows::Forms::Button());
			this->txt_ID_uzytkownika = (gcnew System::Windows::Forms::TextBox());
			this->txt_Haslo = (gcnew System::Windows::Forms::TextBox());
			this->label_napis_uzytkownik = (gcnew System::Windows::Forms::Label());
			this->label_napis_haslo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_Anuluj
			// 
			this->button_Anuluj->Location = System::Drawing::Point(35, 192);
			this->button_Anuluj->Name = L"button_Anuluj";
			this->button_Anuluj->Size = System::Drawing::Size(75, 23);
			this->button_Anuluj->TabIndex = 0;
			this->button_Anuluj->Text = L"Anuluj";
			this->button_Anuluj->UseVisualStyleBackColor = true;
			this->button_Anuluj->Click += gcnew System::EventHandler(this, &Logowanie::button_Anuluj_Click);
			// 
			// button_Logowanie
			// 
			this->button_Logowanie->Location = System::Drawing::Point(180, 192);
			this->button_Logowanie->Name = L"button_Logowanie";
			this->button_Logowanie->Size = System::Drawing::Size(75, 23);
			this->button_Logowanie->TabIndex = 1;
			this->button_Logowanie->Text = L"Zaloguj";
			this->button_Logowanie->UseVisualStyleBackColor = true;
			this->button_Logowanie->Click += gcnew System::EventHandler(this, &Logowanie::button_Logowanie_Click);
			// 
			// txt_ID_uzytkownika
			// 
			this->txt_ID_uzytkownika->Location = System::Drawing::Point(155, 43);
			this->txt_ID_uzytkownika->Name = L"txt_ID_uzytkownika";
			this->txt_ID_uzytkownika->Size = System::Drawing::Size(100, 20);
			this->txt_ID_uzytkownika->TabIndex = 2;
			// 
			// txt_Haslo
			// 
			this->txt_Haslo->Location = System::Drawing::Point(155, 77);
			this->txt_Haslo->Name = L"txt_Haslo";
			this->txt_Haslo->PasswordChar = '*';
			this->txt_Haslo->Size = System::Drawing::Size(100, 20);
			this->txt_Haslo->TabIndex = 3;
			// 
			// label_napis_uzytkownik
			// 
			this->label_napis_uzytkownik->AutoSize = true;
			this->label_napis_uzytkownik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label_napis_uzytkownik->Location = System::Drawing::Point(32, 48);
			this->label_napis_uzytkownik->Name = L"label_napis_uzytkownik";
			this->label_napis_uzytkownik->Size = System::Drawing::Size(117, 15);
			this->label_napis_uzytkownik->TabIndex = 4;
			this->label_napis_uzytkownik->Text = L"Nazwa uzytkownika:";
			// 
			// label_napis_haslo
			// 
			this->label_napis_haslo->AutoSize = true;
			this->label_napis_haslo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_napis_haslo->Location = System::Drawing::Point(33, 84);
			this->label_napis_haslo->Name = L"label_napis_haslo";
			this->label_napis_haslo->Size = System::Drawing::Size(42, 15);
			this->label_napis_haslo->TabIndex = 5;
			this->label_napis_haslo->Text = L"Haslo:";
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label_napis_haslo);
			this->Controls->Add(this->label_napis_uzytkownik);
			this->Controls->Add(this->txt_Haslo);
			this->Controls->Add(this->txt_ID_uzytkownika);
			this->Controls->Add(this->button_Logowanie);
			this->Controls->Add(this->button_Anuluj);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Zmienne globalne

		//===================================

		//Funkcje w ciele Logowanie
	private: System::Void button_Anuluj_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button_Logowanie_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ konfig = L"datasource = localhost; port = 3306; username = root; password = 506b0edf;database = bazadanych_c++_sql";
	MySqlConnection^ lacz_baze = gcnew MySqlConnection(konfig);
	MySqlCommand^ zapytanie_do_bazy = gcnew MySqlCommand("SELECT * FROM uzytkownicy WHERE uzytkownik_nazwa = '"+txt_ID_uzytkownika->Text+"' AND haslo = md5('"+txt_Haslo->Text+"');", lacz_baze);
	MySqlDataReader^ odczytanie_zapytania;
	try
	{
		lacz_baze->Open();
		odczytanie_zapytania = zapytanie_do_bazy->ExecuteReader();
		
		if (odczytanie_zapytania->Read())
		{
			int numer_uzytkownika = odczytanie_zapytania->GetInt32(0);
			lacz_baze->Close();
			this->Hide();
			Program^ Program_forma = gcnew Program(numer_uzytkownika);
			Program_forma->ShowDialog();
			this->Close();
		}
		else
		{
			MessageBox::Show("Bledna nazwa uzytkownika lub niepoprawne haslo");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
		 //===================================
};
}
