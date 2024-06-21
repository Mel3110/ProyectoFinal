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
	/// Resumen de CrudPersonal
	/// </summary>
	public ref class CrudPersonal : public System::Windows::Forms::Form
	{
	public:
		CrudPersonal(void)
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
		~CrudPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::DataGridView^ dgvPersonal;
	protected:

	protected:





	private: System::Windows::Forms::TextBox^ textDNI;
	private: System::Windows::Forms::TextBox^ textCorreo;
	private: System::Windows::Forms::TextBox^ textTelefono;

	private: System::Windows::Forms::TextBox^ textApellido;
	private: System::Windows::Forms::TextBox^ textNombre;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreCompletoPersonal;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ button2;


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
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->dgvPersonal = (gcnew System::Windows::Forms::DataGridView());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreCompletoPersonal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textDNI = (gcnew System::Windows::Forms::TextBox());
			this->textCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textTelefono = (gcnew System::Windows::Forms::TextBox());
			this->textApellido = (gcnew System::Windows::Forms::TextBox());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(44, 288);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(134, 28);
			this->btnAgregar->TabIndex = 60;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &CrudPersonal::btnAgregar_Click);
			// 
			// dgvPersonal
			// 
			this->dgvPersonal->AllowUserToOrderColumns = true;
			this->dgvPersonal->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvPersonal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersonal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->DNI, this->NombreCompletoPersonal });
			this->dgvPersonal->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvPersonal->Location = System::Drawing::Point(397, 61);
			this->dgvPersonal->Margin = System::Windows::Forms::Padding(4);
			this->dgvPersonal->Name = L"dgvPersonal";
			this->dgvPersonal->RowHeadersVisible = false;
			this->dgvPersonal->RowHeadersWidth = 51;
			this->dgvPersonal->Size = System::Drawing::Size(264, 325);
			this->dgvPersonal->TabIndex = 58;
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			this->DNI->Width = 125;
			// 
			// NombreCompletoPersonal
			// 
			this->NombreCompletoPersonal->HeaderText = L"Personal";
			this->NombreCompletoPersonal->MinimumWidth = 6;
			this->NombreCompletoPersonal->Name = L"NombreCompletoPersonal";
			this->NombreCompletoPersonal->Width = 125;
			// 
			// textDNI
			// 
			this->textDNI->Location = System::Drawing::Point(150, 239);
			this->textDNI->Margin = System::Windows::Forms::Padding(4);
			this->textDNI->Name = L"textDNI";
			this->textDNI->Size = System::Drawing::Size(185, 22);
			this->textDNI->TabIndex = 56;
			// 
			// textCorreo
			// 
			this->textCorreo->Location = System::Drawing::Point(150, 204);
			this->textCorreo->Margin = System::Windows::Forms::Padding(4);
			this->textCorreo->Name = L"textCorreo";
			this->textCorreo->Size = System::Drawing::Size(185, 22);
			this->textCorreo->TabIndex = 55;
			// 
			// textTelefono
			// 
			this->textTelefono->Location = System::Drawing::Point(150, 166);
			this->textTelefono->Margin = System::Windows::Forms::Padding(4);
			this->textTelefono->Name = L"textTelefono";
			this->textTelefono->Size = System::Drawing::Size(185, 22);
			this->textTelefono->TabIndex = 54;
			// 
			// textApellido
			// 
			this->textApellido->Location = System::Drawing::Point(150, 129);
			this->textApellido->Margin = System::Windows::Forms::Padding(4);
			this->textApellido->Name = L"textApellido";
			this->textApellido->Size = System::Drawing::Size(185, 22);
			this->textApellido->TabIndex = 53;
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(150, 94);
			this->textNombre->Margin = System::Windows::Forms::Padding(4);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(185, 22);
			this->textNombre->TabIndex = 52;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13));
			this->label6->Location = System::Drawing::Point(36, 239);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 24);
			this->label6->TabIndex = 51;
			this->label6->Text = L"DNI:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13));
			this->label5->Location = System::Drawing::Point(36, 204);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 24);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13));
			this->label4->Location = System::Drawing::Point(36, 166);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 24);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Teléfono:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13));
			this->label3->Location = System::Drawing::Point(36, 129);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 24);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Apellido:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13));
			this->label2->Location = System::Drawing::Point(36, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 24);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Nombre:";
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(203, 288);
			this->btnModify->Margin = System::Windows::Forms::Padding(4);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(134, 28);
			this->btnModify->TabIndex = 61;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &CrudPersonal::btnModify_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(125, 324);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(134, 28);
			this->btnEliminar->TabIndex = 62;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &CrudPersonal::btnEliminar_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(1, 1);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Atrás";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CrudPersonal::button2_Click);
			// 
			// CrudPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 463);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->dgvPersonal);
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
			this->Name = L"CrudPersonal";
			this->Text = L"CrudPersonal";
			this->Load += gcnew System::EventHandler(this, &CrudPersonal::CrudPersonal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void showPersonal() {
			List<Personal^>^ personalList = Service::ConsultaPersonal();
			dgvPersonal->Rows->Clear();

			for (int i = 0; i < personalList->Count; i++) {
				dgvPersonal->Rows->Add(gcnew array<String^>{
					"" + personalList[i]->Id,
						personalList[i]->Nombre + " " + personalList[i]->Apellido,
				});
			}
		}

	private: System::Void CrudPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = textNombre->Text;
	String^ apellido = textApellido->Text;
	String^ telefono = textTelefono->Text;
	String^ correo = textCorreo->Text;
	String^ dni = textDNI->Text;
	int id = Convert::ToInt32(textDNI->Text);

	Personal^ personal = gcnew Personal();

	personal->Nombre = nombre;
	personal->Apellido = apellido;
	personal->Telefono = telefono;
	personal->Correo = correo;
	personal->DNI = dni;
	personal->Id = id;

	Service::AddPersonal(personal);
	showPersonal();
}
private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = textNombre->Text;
	String^ apellido = textApellido->Text;
	String^ telefono = textTelefono->Text;
	String^ correo = textCorreo->Text;
	String^ dni = textDNI->Text;
	int id = Convert::ToInt32(textDNI->Text);

	Personal^ personal = gcnew Personal();

	personal->Nombre = nombre;
	personal->Apellido = apellido;
	personal->Telefono = telefono;
	personal->Correo = correo;
	personal->DNI = dni;
	personal->Id = id;

	Service::ModifyPersonal(personal);
	showPersonal();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int personalID = Convert::ToInt32(textDNI->Text);
	Service::DeleteInquilino(personalID);
	showPersonal();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
