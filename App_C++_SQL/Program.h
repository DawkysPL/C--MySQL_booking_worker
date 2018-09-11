#pragma once

namespace AppCSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		Program(int numer_uzytkownika)
		{
			InitializeComponent();
			int id_uzytkownika = numer_uzytkownika;
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
			this->SuspendLayout();
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Program_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
