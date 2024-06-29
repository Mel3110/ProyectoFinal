#pragma once
#include"FORMATO_CONTRATO_II.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de FORMATO_CONTRARTO_I
	/// </summary>
	public ref class FORMATO_CONTRARTO_I : public System::Windows::Forms::Form
	{
	public:
		FORMATO_CONTRARTO_I(void)
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
		~FORMATO_CONTRARTO_I()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ txtNombreInquilino;
	protected:


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ txtSexto;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ txtQuinto;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ txtCuarta;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ txtTercero;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ txtDNIinquilino;
	private: System::Windows::Forms::Label^ txtPrimera;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ DNIInquilino;
	private: System::Windows::Forms::Label^ NombreInquilino;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ txtSegunda;
	private: System::Windows::Forms::Button^ button1;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FORMATO_CONTRARTO_I::typeid));
			this->txtNombreInquilino = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtSexto = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtQuinto = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtCuarta = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtTercero = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtDNIinquilino = (gcnew System::Windows::Forms::Label());
			this->txtPrimera = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DNIInquilino = (gcnew System::Windows::Forms::Label());
			this->NombreInquilino = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtSegunda = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNombreInquilino
			// 
			this->txtNombreInquilino->AutoSize = true;
			this->txtNombreInquilino->Location = System::Drawing::Point(244, 111);
			this->txtNombreInquilino->Name = L"txtNombreInquilino";
			this->txtNombreInquilino->Size = System::Drawing::Size(10, 16);
			this->txtNombreInquilino->TabIndex = 52;
			this->txtNombreInquilino->Text = L"f";
			this->txtNombreInquilino->Click += gcnew System::EventHandler(this, &FORMATO_CONTRARTO_I::txtNombreInquilino_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(30, 618);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(285, 17);
			this->label17->TabIndex = 48;
			this->label17->Text = L"SEXTA: Obligaciones del Arrendatario";
			// 
			// txtSexto
			// 
			this->txtSexto->AutoSize = true;
			this->txtSexto->BackColor = System::Drawing::Color::Transparent;
			this->txtSexto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSexto->Location = System::Drawing::Point(30, 638);
			this->txtSexto->Name = L"txtSexto";
			this->txtSexto->Size = System::Drawing::Size(576, 153);
			this->txtSexto->TabIndex = 49;
			this->txtSexto->Text = resources->GetString(L"txtSexto.Text");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(30, 506);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(284, 17);
			this->label15->TabIndex = 46;
			this->label15->Text = L"QUINTA: Obligaciones del Arrendador";
			// 
			// txtQuinto
			// 
			this->txtQuinto->AutoSize = true;
			this->txtQuinto->BackColor = System::Drawing::Color::Transparent;
			this->txtQuinto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtQuinto->Location = System::Drawing::Point(30, 526);
			this->txtQuinto->Name = L"txtQuinto";
			this->txtQuinto->Size = System::Drawing::Size(572, 85);
			this->txtQuinto->TabIndex = 47;
			this->txtQuinto->Text = resources->GetString(L"txtQuinto.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(29, 418);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(235, 17);
			this->label9->TabIndex = 44;
			this->label9->Text = L"CUARTA: Depósito de Garantía";
			// 
			// txtCuarta
			// 
			this->txtCuarta->AutoSize = true;
			this->txtCuarta->BackColor = System::Drawing::Color::Transparent;
			this->txtCuarta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtCuarta->Location = System::Drawing::Point(29, 438);
			this->txtCuarta->Name = L"txtCuarta";
			this->txtCuarta->Size = System::Drawing::Size(64, 17);
			this->txtCuarta->TabIndex = 45;
			this->txtCuarta->Text = L"txtCuarta";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(30, 340);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(133, 17);
			this->label13->TabIndex = 42;
			this->label13->Text = L"TERCERA: Renta";
			// 
			// txtTercero
			// 
			this->txtTercero->AutoSize = true;
			this->txtTercero->BackColor = System::Drawing::Color::Transparent;
			this->txtTercero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtTercero->Location = System::Drawing::Point(30, 360);
			this->txtTercero->Name = L"txtTercero";
			this->txtTercero->Size = System::Drawing::Size(72, 17);
			this->txtTercero->TabIndex = 43;
			this->txtTercero->Text = L"txtTercero";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(27, 265);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(227, 17);
			this->label11->TabIndex = 40;
			this->label11->Text = L"SEGUNDA: Plazo del Contrato";
			// 
			// txtDNIinquilino
			// 
			this->txtDNIinquilino->AutoSize = true;
			this->txtDNIinquilino->Location = System::Drawing::Point(63, 128);
			this->txtDNIinquilino->Name = L"txtDNIinquilino";
			this->txtDNIinquilino->Size = System::Drawing::Size(79, 16);
			this->txtDNIinquilino->TabIndex = 39;
			this->txtDNIinquilino->Text = L"DNIinquilino";
			// 
			// txtPrimera
			// 
			this->txtPrimera->AutoSize = true;
			this->txtPrimera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtPrimera->Location = System::Drawing::Point(30, 215);
			this->txtPrimera->Name = L"txtPrimera";
			this->txtPrimera->Size = System::Drawing::Size(71, 17);
			this->txtPrimera->TabIndex = 38;
			this->txtPrimera->Text = L"txtPrimera";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(30, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(228, 17);
			this->label7->TabIndex = 37;
			this->label7->Text = L"PRIMERA: Objeto del Contrato";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(29, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(567, 34);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Ambas partes acuerdan celebrar el presente contrato de arrendamiento, que\r\nse reg"
				L"irá por las siguientes cláusulas:\r\n";
			// 
			// DNIInquilino
			// 
			this->DNIInquilino->AutoSize = true;
			this->DNIInquilino->Location = System::Drawing::Point(30, 128);
			this->DNIInquilino->Name = L"DNIInquilino";
			this->DNIInquilino->Size = System::Drawing::Size(36, 16);
			this->DNIInquilino->TabIndex = 35;
			this->DNIInquilino->Text = L"DNI: ";
			// 
			// NombreInquilino
			// 
			this->NombreInquilino->AutoSize = true;
			this->NombreInquilino->Location = System::Drawing::Point(187, 111);
			this->NombreInquilino->Name = L"NombreInquilino";
			this->NombreInquilino->Size = System::Drawing::Size(62, 16);
			this->NombreInquilino->TabIndex = 34;
			this->NombreInquilino->Text = L"Nombre: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(29, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 17);
			this->label5->TabIndex = 33;
			this->label5->Text = L"2. ARRENDATARIO: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(29, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 17);
			this->label3->TabIndex = 31;
			this->label3->Text = L"1. ARRENDADOR: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(30, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Entre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(30, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 17);
			this->label1->TabIndex = 29;
			this->label1->Text = L"CONTRATO DE ARRENDAMIENTO DE INMUEBLE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label4->Location = System::Drawing::Point(30, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(303, 34);
			this->label4->TabIndex = 32;
			this->label4->Text = L"                                   Nombre: Renzo Ramírez\r\nDNI: 40365935\r\n";
			// 
			// txtSegunda
			// 
			this->txtSegunda->AutoSize = true;
			this->txtSegunda->BackColor = System::Drawing::Color::Transparent;
			this->txtSegunda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSegunda->Location = System::Drawing::Point(29, 285);
			this->txtSegunda->Name = L"txtSegunda";
			this->txtSegunda->Size = System::Drawing::Size(79, 17);
			this->txtSegunda->TabIndex = 41;
			this->txtSegunda->Text = L"txtSegunda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(508, 794);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 28);
			this->button1->TabIndex = 55;
			this->button1->Text = L"Continuar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FORMATO_CONTRARTO_I::button1_Click_1);
			// 
			// FORMATO_CONTRARTO_I
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 850);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtNombreInquilino);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txtSexto);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtQuinto);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtCuarta);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtTercero);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtDNIinquilino);
			this->Controls->Add(this->txtPrimera);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DNIInquilino);
			this->Controls->Add(this->NombreInquilino);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtSegunda);
			this->Name = L"FORMATO_CONTRARTO_I";
			this->Text = L"FORMATO_CONTRARTO_I";
			this->Load += gcnew System::EventHandler(this, &FORMATO_CONTRARTO_I::FORMATO_CONTRARTO_I_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	List<Inquilino^>^ inquilinoList = Service::ConsultaInquilino();
	List<Departamento^>^ departList = Service::ConsultaDepa();

private: System::Void FORMATO_CONTRARTO_I_Load(System::Object^ sender, System::EventArgs^ e) {
	// Variables para almacenar los datos del departamento e inquilino encontrados
	Departamento^ departamentoEncontrado = nullptr;
	Inquilino^ inquilinoEncontrado = nullptr;

	// Verificar que las listas no sean nulas
	if (inquilinoList != nullptr && departList != nullptr) {
		// Buscar el departamento con ID 101
		for (int i = 0; i < departList->Count; i++) {
			Departamento^ departamento = departList[i];
			if (departamento->Id == 101) {
				departamentoEncontrado = departamento;
				break; // Salir del bucle una vez encontrado
			}
		}

		// Buscar el inquilino asignado al departamento 101
		for (int j = 0; j < inquilinoList->Count; j++) {
			Inquilino^ inquilino = inquilinoList[j];
			if (inquilino->DepAsignado == 101) {
				inquilinoEncontrado = inquilino;
				break; // Salir del bucle una vez encontrado
			}
		}
	}

	// Verificar que ambos, el departamento y el inquilino, fueron encontrados
	if (departamentoEncontrado != nullptr && inquilinoEncontrado != nullptr) {
		int depa = departamentoEncontrado->Id;
		double area = departamentoEncontrado->Dimensiones;
		double precio = departamentoEncontrado->Precio;
		String^ dni = inquilinoEncontrado->DNI;
		String^ nombre = inquilinoEncontrado->Nombre;
		String^ apellido = inquilinoEncontrado->Apellido;
		String^ fechaInicio = "20/06/2024";
		String^ fechaFin = "20/06/2025";

		txtNombreInquilino->Text = nombre + " " + apellido;
		txtDNIinquilino->Text = dni;
		txtPrimera->Text = "El ARRENDADOR da en arrendamiento al ARRENDATARIO, " + nombre + " " + apellido + ", con\r\n	DNI " + dni + ", y este acepta, el departamento ubicado en Av. Universitaria 1801, San\r\nMiguel 15088, que consta de " + Convert::ToString(area) + " metros cuadrados.";
		txtSegunda->Text = "El plazo de este contrato será de 12 meses, comenzando el " + fechaInicio + " y terminando\r\nel " + fechaFin + ". A la finalización de este plazo, el contrato podrá ser renovado\r\nprevio acuerdo escrito entre ambas partes.";
		txtTercero->Text = "El ARRENDATARIO pagará al ARRENDADOR una renta mensual de S/." + Convert::ToString(precio) + ".\r\nEl pago deberá ser efectuadodentro de los primeros quince días de cada mes en la\r\nforma que acuerden las partes.";
		txtCuarta->Text = "El ARRENDATARIO entregará al ARRENDADOR, en concepto de depósito de garantía,\r\nla suma de S/." + Convert::ToString(precio) + ",equivalente a un mes de renta. Dicho depósito será devuelto al\r\nARRENDATARIO al término del contrato, una vez descontadas las sumas que pudieran\r\ncorresponder por daños, reparaciones o adeudos pendientes.";
	}
}
private: System::Void txtNombreInquilino_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   // Función para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
	   void FORMATO_CONTRARTO_I::FormatoContratoII(System::Object^ sender, FormClosedEventArgs^ e)
	   {
		   this->Show();
	   }

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	FORMATO_CONTRATO_II^ fORMATO_CONTRATO_II = gcnew FORMATO_CONTRATO_II();
	fORMATO_CONTRATO_II->FormClosed += gcnew FormClosedEventHandler(this, &FORMATO_CONTRARTO_I::FormatoContratoII);
	fORMATO_CONTRATO_II->Show();
	this->Hide();
}
};
}
