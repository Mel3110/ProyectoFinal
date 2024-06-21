#pragma once

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
	/// Resumen de Contrato
	/// </summary>
	public ref class Contrato : public System::Windows::Forms::Form
	{
	public:
		Contrato(void)
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
		~Contrato()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ NombreInquilino;
	private: System::Windows::Forms::Label^ DNIInquilino;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ txtPrimera;

	private: System::Windows::Forms::Label^ txtDNIinquilino;
	private: System::Windows::Forms::Label^ txtSegunda;







	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ txtTercero;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ txtCuarta;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ txtQuinto;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ txtSexto;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ txtSeptima;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ txtOctava;

	private: System::Windows::Forms::Label^ txtNombreInquilino;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NombreInquilino = (gcnew System::Windows::Forms::Label());
			this->DNIInquilino = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPrimera = (gcnew System::Windows::Forms::Label());
			this->txtDNIinquilino = (gcnew System::Windows::Forms::Label());
			this->txtSegunda = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtTercero = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtCuarta = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtQuinto = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtSexto = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtSeptima = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtOctava = (gcnew System::Windows::Forms::Label());
			this->txtNombreInquilino = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(34, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CONTRATO DE ARRENDAMIENTO DE INMUEBLE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(35, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Entre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(34, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"1. ARRENDADOR: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label4->Location = System::Drawing::Point(35, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(303, 34);
			this->label4->TabIndex = 3;
			this->label4->Text = L"                                   Nombre: Renzo Ramírez\r\nDNI: 40365935\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(34, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"2. ARRENDATARIO: ";
			// 
			// NombreInquilino
			// 
			this->NombreInquilino->AutoSize = true;
			this->NombreInquilino->Location = System::Drawing::Point(192, 133);
			this->NombreInquilino->Name = L"NombreInquilino";
			this->NombreInquilino->Size = System::Drawing::Size(62, 16);
			this->NombreInquilino->TabIndex = 5;
			this->NombreInquilino->Text = L"Nombre: ";
			// 
			// DNIInquilino
			// 
			this->DNIInquilino->AutoSize = true;
			this->DNIInquilino->Location = System::Drawing::Point(35, 150);
			this->DNIInquilino->Name = L"DNIInquilino";
			this->DNIInquilino->Size = System::Drawing::Size(36, 16);
			this->DNIInquilino->TabIndex = 6;
			this->DNIInquilino->Text = L"DNI: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(34, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(567, 34);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Ambas partes acuerdan celebrar el presente contrato de arrendamiento, que\r\nse reg"
				L"irá por las siguientes cláusulas:\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(35, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(228, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"PRIMERA: Objeto del Contrato";
			// 
			// txtPrimera
			// 
			this->txtPrimera->AutoSize = true;
			this->txtPrimera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtPrimera->Location = System::Drawing::Point(35, 237);
			this->txtPrimera->Name = L"txtPrimera";
			this->txtPrimera->Size = System::Drawing::Size(71, 17);
			this->txtPrimera->TabIndex = 9;
			this->txtPrimera->Text = L"txtPrimera";
			// 
			// txtDNIinquilino
			// 
			this->txtDNIinquilino->AutoSize = true;
			this->txtDNIinquilino->Location = System::Drawing::Point(68, 150);
			this->txtDNIinquilino->Name = L"txtDNIinquilino";
			this->txtDNIinquilino->Size = System::Drawing::Size(79, 16);
			this->txtDNIinquilino->TabIndex = 10;
			this->txtDNIinquilino->Text = L"DNIinquilino";
			// 
			// txtSegunda
			// 
			this->txtSegunda->AutoSize = true;
			this->txtSegunda->BackColor = System::Drawing::Color::Transparent;
			this->txtSegunda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSegunda->Location = System::Drawing::Point(34, 314);
			this->txtSegunda->Name = L"txtSegunda";
			this->txtSegunda->Size = System::Drawing::Size(79, 17);
			this->txtSegunda->TabIndex = 13;
			this->txtSegunda->Text = L"txtSegunda";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(35, 298);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(227, 17);
			this->label11->TabIndex = 12;
			this->label11->Text = L"SEGUNDA: Plazo del Contrato";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(35, 375);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(133, 17);
			this->label13->TabIndex = 16;
			this->label13->Text = L"TERCERA: Renta";
			// 
			// txtTercero
			// 
			this->txtTercero->AutoSize = true;
			this->txtTercero->BackColor = System::Drawing::Color::Transparent;
			this->txtTercero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtTercero->Location = System::Drawing::Point(35, 392);
			this->txtTercero->Name = L"txtTercero";
			this->txtTercero->Size = System::Drawing::Size(72, 17);
			this->txtTercero->TabIndex = 17;
			this->txtTercero->Text = L"txtTercero";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(34, 453);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(235, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"CUARTA: Depósito de Garantía";
			// 
			// txtCuarta
			// 
			this->txtCuarta->AutoSize = true;
			this->txtCuarta->BackColor = System::Drawing::Color::Transparent;
			this->txtCuarta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtCuarta->Location = System::Drawing::Point(34, 470);
			this->txtCuarta->Name = L"txtCuarta";
			this->txtCuarta->Size = System::Drawing::Size(64, 17);
			this->txtCuarta->TabIndex = 19;
			this->txtCuarta->Text = L"txtCuarta";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(35, 548);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(284, 17);
			this->label15->TabIndex = 20;
			this->label15->Text = L"QUINTA: Obligaciones del Arrendador";
			// 
			// txtQuinto
			// 
			this->txtQuinto->AutoSize = true;
			this->txtQuinto->BackColor = System::Drawing::Color::Transparent;
			this->txtQuinto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtQuinto->Location = System::Drawing::Point(35, 565);
			this->txtQuinto->Name = L"txtQuinto";
			this->txtQuinto->Size = System::Drawing::Size(64, 17);
			this->txtQuinto->TabIndex = 21;
			this->txtQuinto->Text = L"txtQuinto";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(35, 660);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(285, 17);
			this->label17->TabIndex = 22;
			this->label17->Text = L"SEXTA: Obligaciones del Arrendatario";
			// 
			// txtSexto
			// 
			this->txtSexto->AutoSize = true;
			this->txtSexto->BackColor = System::Drawing::Color::Transparent;
			this->txtSexto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSexto->Location = System::Drawing::Point(35, 677);
			this->txtSexto->Name = L"txtSexto";
			this->txtSexto->Size = System::Drawing::Size(57, 17);
			this->txtSexto->TabIndex = 23;
			this->txtSexto->Text = L"txtSexto";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(35, 857);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(267, 17);
			this->label19->TabIndex = 24;
			this->label19->Text = L"SÉPTIMA: Terminación del Contrato";
			// 
			// txtSeptima
			// 
			this->txtSeptima->AutoSize = true;
			this->txtSeptima->BackColor = System::Drawing::Color::Transparent;
			this->txtSeptima->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSeptima->Location = System::Drawing::Point(35, 874);
			this->txtSeptima->Name = L"txtSeptima";
			this->txtSeptima->Size = System::Drawing::Size(73, 17);
			this->txtSeptima->TabIndex = 25;
			this->txtSeptima->Text = L"txtSeptima";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(35, 951);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(188, 17);
			this->label21->TabIndex = 26;
			this->label21->Text = L"OCTAVA: Cláusula Penal";
			// 
			// txtOctava
			// 
			this->txtOctava->AutoSize = true;
			this->txtOctava->BackColor = System::Drawing::Color::Transparent;
			this->txtOctava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtOctava->Location = System::Drawing::Point(35, 968);
			this->txtOctava->Name = L"txtOctava";
			this->txtOctava->Size = System::Drawing::Size(67, 17);
			this->txtOctava->TabIndex = 27;
			this->txtOctava->Text = L"txtOctava";
			// 
			// txtNombreInquilino
			// 
			this->txtNombreInquilino->AutoSize = true;
			this->txtNombreInquilino->Location = System::Drawing::Point(249, 133);
			this->txtNombreInquilino->Name = L"txtNombreInquilino";
			this->txtNombreInquilino->Size = System::Drawing::Size(105, 16);
			this->txtNombreInquilino->TabIndex = 28;
			this->txtNombreInquilino->Text = L"NombreInquilino";
			// 
			// Contrato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 1061);
			this->Controls->Add(this->txtNombreInquilino);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->txtOctava);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->txtSeptima);
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
			this->Name = L"Contrato";
			this->Text = L"Contrato";
			this->Load += gcnew System::EventHandler(this, &Contrato::Contrato_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		List<Inquilino^>^ inquilinoList = Service::ConsultaInquilino();
		List<Departamento^>^ departList = Service::ConsultaDepa();
		int depa;
		double area, precio;
		String^ dni;
		String^ nombre;
		String^ apellido;
		String^ fechaInicio = "20/06/2024";
		String^ fechaFin = "20/06/2025";

	private: System::Void Contrato_Load(System::Object^ sender, System::EventArgs^ e) {
		if (inquilinoList != nullptr && departList != nullptr) {
			for (int i = 0; i < departList->Count; i++) {
				Departamento^ departamento = departList[i];
				Inquilino^ inquilino = inquilinoList[i];
				if (departamento->Id == inquilino->DepAsignado) {
					depa = departamento->Id;
					area = departamento->Dimensiones;
					precio = departamento->Precio;
					dni = inquilino->DNI;
					nombre = inquilino->Nombre;
					apellido = inquilino->Apellido;
				}
			}
		}

		txtPrimera->Text = "El ARRENDADOR da en arrendamiento al ARRENDATARIO, y este acepta, el departamento ubicado en Av. Universitaria 1801, San Miguel 15088,\r\nque consta de " + Convert::ToString(area);
		txtSegunda->Text = "El plazo de este contrato será de 12 meses, comenzando el " + fechaInicio + " y terminando el " + fechaFin + ". A la finalización\r\nde este plazo, el contrato podrá ser renovado previo acuerdo escrito entre ambas partes.";
		txtTercero->Text = "El ARRENDATARIO pagará al ARRENDADOR una renta mensual de S/." + Convert::ToString(precio) + ". El pago deberá ser efectuado\r\ndentro de los primeros quince días de cada mes en la forma que acuerden las partes.";
		txtCuarta->Text = "El ARRENDATARIO entregará al ARRENDADOR, en concepto de depósito de garantía, la suma de S/." + Convert::ToString(precio) + ",\r\nequivalente a un mes de renta. Dicho depósito será devuelto al ARRENDATARIO al término del contrato, una vez descontadas las sumas\r\nque pudieran corresponder por daños, reparaciones o adeudos pendientes.";

	}
};
}
