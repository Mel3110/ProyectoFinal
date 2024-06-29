#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FORMATO_CONTRATO_II
	/// </summary>
	public ref class FORMATO_CONTRATO_II : public System::Windows::Forms::Form
	{
	public:
		FORMATO_CONTRATO_II(void)
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
		~FORMATO_CONTRATO_II()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ txtOctava;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ txtSeptima;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ txtNombreArrendatario;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FORMATO_CONTRATO_II::typeid));
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtOctava = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtSeptima = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNombreArrendatario = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(24, 120);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(188, 17);
			this->label21->TabIndex = 58;
			this->label21->Text = L"OCTAVA: Cláusula Penal";
			// 
			// txtOctava
			// 
			this->txtOctava->AutoSize = true;
			this->txtOctava->BackColor = System::Drawing::Color::Transparent;
			this->txtOctava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtOctava->Location = System::Drawing::Point(24, 137);
			this->txtOctava->Name = L"txtOctava";
			this->txtOctava->Size = System::Drawing::Size(540, 51);
			this->txtOctava->TabIndex = 59;
			this->txtOctava->Text = L"En caso de incumplimiento de cualquiera de las partes, la parte perjudicada podrá"
				L"\r\nexigir una indemnización por daños y perjuicios, sin perjuicio de las acciones"
				L" legales\r\ncorrespondientes.\r\n";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(24, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(267, 17);
			this->label19->TabIndex = 56;
			this->label19->Text = L"SÉPTIMA: Terminación del Contrato";
			// 
			// txtSeptima
			// 
			this->txtSeptima->AutoSize = true;
			this->txtSeptima->BackColor = System::Drawing::Color::Transparent;
			this->txtSeptima->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtSeptima->Location = System::Drawing::Point(24, 39);
			this->txtSeptima->Name = L"txtSeptima";
			this->txtSeptima->Size = System::Drawing::Size(549, 68);
			this->txtSeptima->TabIndex = 57;
			this->txtSeptima->Text = resources->GetString(L"txtSeptima.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(24, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 17);
			this->label1->TabIndex = 61;
			this->label1->Text = L"NOVENA: Jurisdicción y Ley Aplicable";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(24, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(527, 68);
			this->label2->TabIndex = 62;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(24, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 17);
			this->label3->TabIndex = 63;
			this->label3->Text = L"DÉCIMA: Domicilios";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label4->Location = System::Drawing::Point(24, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(541, 85);
			this->label4->TabIndex = 64;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 566);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 28);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Atrás";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label5->Location = System::Drawing::Point(24, 420);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(538, 17);
			this->label5->TabIndex = 66;
			this->label5->Text = L"---------------------------------------------------------------------------------"
				L"-------------------------\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label6->Location = System::Drawing::Point(26, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 34);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Renzo Ramírez\r\nARRENDADOR\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label7->Location = System::Drawing::Point(24, 473);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(538, 17);
			this->label7->TabIndex = 68;
			this->label7->Text = L"---------------------------------------------------------------------------------"
				L"-------------------------\r\n";
			// 
			// txtNombreArrendatario
			// 
			this->txtNombreArrendatario->AutoSize = true;
			this->txtNombreArrendatario->BackColor = System::Drawing::Color::Transparent;
			this->txtNombreArrendatario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->txtNombreArrendatario->Location = System::Drawing::Point(26, 493);
			this->txtNombreArrendatario->Name = L"txtNombreArrendatario";
			this->txtNombreArrendatario->Size = System::Drawing::Size(172, 34);
			this->txtNombreArrendatario->TabIndex = 69;
			this->txtNombreArrendatario->Text = L"[Nombre del Arrendatario]\r\nARRENDATARIO\r\n";
			// 
			// FORMATO_CONTRATO_II
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 652);
			this->Controls->Add(this->txtNombreArrendatario);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->txtOctava);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->txtSeptima);
			this->Name = L"FORMATO_CONTRATO_II";
			this->Text = L"FORMATO_CONTRATO_II";
			this->Load += gcnew System::EventHandler(this, &FORMATO_CONTRATO_II::FORMATO_CONTRATO_II_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void FORMATO_CONTRATO_II_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
