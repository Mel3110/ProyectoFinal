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
	/// Resumen de MOD_Inqui
	/// </summary>
	public ref class MOD_Inqui : public System::Windows::Forms::Form
	{
	public:
		MOD_Inqui(void)
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
		~MOD_Inqui()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


















	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textNombre;
	private: System::Windows::Forms::TextBox^ textApellido;
	private: System::Windows::Forms::TextBox^ textTelefono;
	private: System::Windows::Forms::TextBox^ textCorreo;
	private: System::Windows::Forms::TextBox^ textDNI;
	private: System::Windows::Forms::TextBox^ textDepAsignado;






	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::DataGridView^ dgvInquilino;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Arrendatario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;













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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->textApellido = (gcnew System::Windows::Forms::TextBox());
			this->textTelefono = (gcnew System::Windows::Forms::TextBox());
			this->textCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textDNI = (gcnew System::Windows::Forms::TextBox());
			this->textDepAsignado = (gcnew System::Windows::Forms::TextBox());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvInquilino = (gcnew System::Windows::Forms::DataGridView());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Arrendatario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilino))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(-1, -2);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 46;
			this->button6->Text = L"Atrás";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MOD_Inqui::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(92, 48);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(190, 25);
			this->label8->TabIndex = 62;
			this->label8->Text = L"Lista de Inquilinos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(433, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 64;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(433, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(433, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Teléfono:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(433, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Correo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(433, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 16);
			this->label5->TabIndex = 68;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(433, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 16);
			this->label6->TabIndex = 69;
			this->label6->Text = L"Departamento asignado:";
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(498, 130);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(190, 22);
			this->textNombre->TabIndex = 70;
			// 
			// textApellido
			// 
			this->textApellido->Location = System::Drawing::Point(498, 168);
			this->textApellido->Name = L"textApellido";
			this->textApellido->Size = System::Drawing::Size(190, 22);
			this->textApellido->TabIndex = 71;
			// 
			// textTelefono
			// 
			this->textTelefono->Location = System::Drawing::Point(498, 208);
			this->textTelefono->Name = L"textTelefono";
			this->textTelefono->Size = System::Drawing::Size(190, 22);
			this->textTelefono->TabIndex = 72;
			// 
			// textCorreo
			// 
			this->textCorreo->Location = System::Drawing::Point(498, 245);
			this->textCorreo->Name = L"textCorreo";
			this->textCorreo->Size = System::Drawing::Size(190, 22);
			this->textCorreo->TabIndex = 73;
			// 
			// textDNI
			// 
			this->textDNI->Location = System::Drawing::Point(498, 280);
			this->textDNI->Name = L"textDNI";
			this->textDNI->Size = System::Drawing::Size(190, 22);
			this->textDNI->TabIndex = 74;
			// 
			// textDepAsignado
			// 
			this->textDepAsignado->Location = System::Drawing::Point(595, 316);
			this->textDepAsignado->Name = L"textDepAsignado";
			this->textDepAsignado->Size = System::Drawing::Size(93, 22);
			this->textDepAsignado->TabIndex = 75;
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(403, 367);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(148, 30);
			this->btnModificar->TabIndex = 76;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MOD_Inqui::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(585, 367);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(148, 30);
			this->btnEliminar->TabIndex = 77;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MOD_Inqui::btnEliminar_Click);
			// 
			// dgvInquilino
			// 
			this->dgvInquilino->AllowUserToOrderColumns = true;
			this->dgvInquilino->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvInquilino->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInquilino->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->DNI, this->Arrendatario,
					this->NumDepa
			});
			this->dgvInquilino->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvInquilino->Location = System::Drawing::Point(34, 101);
			this->dgvInquilino->Margin = System::Windows::Forms::Padding(4);
			this->dgvInquilino->Name = L"dgvInquilino";
			this->dgvInquilino->RowHeadersVisible = false;
			this->dgvInquilino->RowHeadersWidth = 51;
			this->dgvInquilino->Size = System::Drawing::Size(336, 325);
			this->dgvInquilino->TabIndex = 78;
			this->dgvInquilino->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MOD_Inqui::dgvInquilino_CellClick);
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			this->DNI->Width = 125;
			// 
			// Arrendatario
			// 
			this->Arrendatario->HeaderText = L"Inquilino";
			this->Arrendatario->MinimumWidth = 6;
			this->Arrendatario->Name = L"Arrendatario";
			this->Arrendatario->Width = 125;
			// 
			// NumDepa
			// 
			this->NumDepa->HeaderText = L"Departamento";
			this->NumDepa->MinimumWidth = 6;
			this->NumDepa->Name = L"NumDepa";
			this->NumDepa->Width = 125;
			// 
			// MOD_Inqui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(812, 629);
			this->Controls->Add(this->dgvInquilino);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->textDepAsignado);
			this->Controls->Add(this->textDNI);
			this->Controls->Add(this->textCorreo);
			this->Controls->Add(this->textTelefono);
			this->Controls->Add(this->textApellido);
			this->Controls->Add(this->textNombre);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MOD_Inqui";
			this->Text = L"MOD_Inqui";
			this->Load += gcnew System::EventHandler(this, &MOD_Inqui::MOD_Inqui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilino))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void showInquilino() {
			List<Inquilino^>^ inquilinoList = Service::ConsultaInquilino();
			dgvInquilino->Rows->Clear();
			for (int i = 0; i < inquilinoList->Count; i++) {
				dgvInquilino->Rows->Add(gcnew array<String^>{
					inquilinoList[i]->DNI,
					inquilinoList[i]->Nombre + " " + inquilinoList[i]->Apellido,
					"" + inquilinoList[i]->DepAsignado
				});
			}
		}

		static void UpdateHabitado(int id, bool habitado) {
			// Actualiza el estado Habitado de un departamento específico
			Departamento^ depa = Service::ConsultaDepaByID(id);
			if (depa != nullptr) {
				depa->Habitado = habitado;
				Service::ModifyApartment(depa); // Asegura que el cambio se persista en la base de datos
			}
		}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = textNombre->Text;
		String^ apellido = textApellido->Text;
		String^ telefono = textTelefono->Text;
		String^ correo = textCorreo->Text;
		String^ dni = textDNI->Text;
		int depAsignado = Convert::ToInt32(textDepAsignado->Text);

		Inquilino^ inquilino = gcnew Inquilino();

		inquilino->Nombre = nombre;
		inquilino->Apellido = apellido;
		inquilino->Telefono = telefono;
		inquilino->Correo = correo;
		inquilino->DNI = dni;
		inquilino->DepAsignado = depAsignado;

		Service::ModifyInquilino(inquilino);
		showInquilino();
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		int depa = Convert::ToInt32(textDepAsignado->Text);
		Service::DeleteInquilino(depa);
		int depAsignado = Convert::ToInt32(textDepAsignado->Text);
		UpdateHabitado(depAsignado, false);
		showInquilino();
	}
	private: System::Void dgvInquilino_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int depa = Int32::Parse(dgvInquilino->Rows[dgvInquilino->SelectedCells[0]->RowIndex]->Cells[2]->Value->ToString());
		Inquilino^ inquilino = Service::ConsultaInquilinoByNumDep(depa);
		if (inquilino != nullptr) {
			textNombre->Text = "" + inquilino->Nombre;
			textApellido->Text = "" + inquilino->Apellido;
			textTelefono->Text = "" + inquilino->Telefono;
			textCorreo->Text = inquilino->Correo;
			textDNI->Text = inquilino->DNI;
			textDepAsignado->Text = Convert::ToString(inquilino->DepAsignado);
		}
	}
private: System::Void MOD_Inqui_Load(System::Object^ sender, System::EventArgs^ e) {
	showInquilino();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
}
};
}