#pragma once
#include "ADMIN_inquilino.h"
#include "ApartmentForm.h"
#include "PersonalForm.h"
#include "LoginForm.h"
#include "CrudPersonal.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ADMIN_interfaz
	/// </summary>
	public ref class ADMIN_interfaz : public System::Windows::Forms::Form
	{
	public:
		ADMIN_interfaz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ADMIN_interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ bttnLogout;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->bttnLogout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido ...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¿Qué desea administrar\?";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(109, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Inquilino";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(109, 250);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 53);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Departamento";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::button3_Click);
			// 
			// bttnLogout
			// 
			this->bttnLogout->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttnLogout->Location = System::Drawing::Point(312, 2);
			this->bttnLogout->Name = L"bttnLogout";
			this->bttnLogout->Size = System::Drawing::Size(82, 23);
			this->bttnLogout->TabIndex = 30;
			this->bttnLogout->Text = L"Cerrar sesión";
			this->bttnLogout->UseVisualStyleBackColor = false;
			this->bttnLogout->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::bttnLogout_Click);
			// 
			// ADMIN_interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(395, 368);
			this->Controls->Add(this->bttnLogout);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ADMIN_interfaz";
			this->Text = L"ADMIN_interfaz";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_inquilino^ inquilino = gcnew ADMIN_inquilino();
		inquilino->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ADMIN_inquilinoClosed);
		inquilino->Show();
		this->Hide();
	}

		   // Función para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_interfaz::ADMIN_inquilinoClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ApartmentForm^ apartmentForm = gcnew ApartmentForm();
		apartmentForm->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ApartmentFormClosed);
		apartmentForm->Show();
		this->Hide();
	}

		   // Función para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_interfaz::ApartmentFormClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		CrudPersonal^ crudpersonal = gcnew CrudPersonal();
		crudpersonal->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ApartmentFormClosed);
		crudpersonal->Show();
		this->Hide();

	}

	private: System::Void bttnLogout_Click(System::Object^ sender, System::EventArgs^ e) {

		// Crear una instancia de LoginForm y pasar una referencia a esta forma (this)
		SalesSystemGUIApp::LoginForm^ loginform = gcnew SalesSystemGUIApp::LoginForm(this);

		// Mostrar el formulario de login
		loginform->Show();

		// Cerrar el formulario actual
		this->Close();

	}
};
}

