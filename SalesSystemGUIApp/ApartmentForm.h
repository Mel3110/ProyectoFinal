#pragma once
//#include "ADMIN_interfaz.h"


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
	/// Resumen de ApartmentForm
	/// </summary>
	/// 
	public ref class ApartmentForm : public System::Windows::Forms::Form
	{
	public:
		ApartmentForm(void)
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
		~ApartmentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ txtNumDep;
	private: System::Windows::Forms::TextBox^ txtPrecio;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAlterPhoto;
	private: System::Windows::Forms::DataGridView^ dgvApartment;
	private: System::Windows::Forms::Button^ Clean;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDimensiones;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtPiso;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ txtRealizado;

	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mantenimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::CheckBox^ txtHabitado;










	protected:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtNumDep = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAlterPhoto = (gcnew System::Windows::Forms::Button());
			this->dgvApartment = (gcnew System::Windows::Forms::DataGridView());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mantenimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Clean = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDimensiones = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtRealizado = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHabitado = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(541, 310);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Departamento: ";
			this->label2->Click += gcnew System::EventHandler(this, &ApartmentForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(541, 403);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precios de alquiler:";
			this->label3->Click += gcnew System::EventHandler(this, &ApartmentForm::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(541, 432);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Mantenimiento:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(581, 52);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(272, 198);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ApartmentForm::pictureBox1_Click);
			// 
			// txtNumDep
			// 
			this->txtNumDep->Location = System::Drawing::Point(758, 310);
			this->txtNumDep->Margin = System::Windows::Forms::Padding(4);
			this->txtNumDep->Name = L"txtNumDep";
			this->txtNumDep->Size = System::Drawing::Size(132, 22);
			this->txtNumDep->TabIndex = 8;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(758, 403);
			this->txtPrecio->Margin = System::Windows::Forms::Padding(4);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(132, 22);
			this->txtPrecio->TabIndex = 9;
			this->txtPrecio->TextChanged += gcnew System::EventHandler(this, &ApartmentForm::txtPric_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(564, 506);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(133, 28);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Agregar ";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ApartmentForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(732, 506);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(131, 28);
			this->btnUpdate->TabIndex = 16;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ApartmentForm::btnUpdate_Click);
			// 
			// btnAlterPhoto
			// 
			this->btnAlterPhoto->Location = System::Drawing::Point(614, 259);
			this->btnAlterPhoto->Margin = System::Windows::Forms::Padding(4);
			this->btnAlterPhoto->Name = L"btnAlterPhoto";
			this->btnAlterPhoto->Size = System::Drawing::Size(193, 28);
			this->btnAlterPhoto->TabIndex = 17;
			this->btnAlterPhoto->Text = L"Actualizar Foto";
			this->btnAlterPhoto->UseVisualStyleBackColor = true;
			this->btnAlterPhoto->Click += gcnew System::EventHandler(this, &ApartmentForm::btnAlterPhoto_Click);
			// 
			// dgvApartment
			// 
			this->dgvApartment->AllowUserToOrderColumns = true;
			this->dgvApartment->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvApartment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvApartment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NumDepa,
					this->Piso, this->Mantenimiento, this->Estado
			});
			this->dgvApartment->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvApartment->Location = System::Drawing::Point(46, 52);
			this->dgvApartment->Margin = System::Windows::Forms::Padding(4);
			this->dgvApartment->Name = L"dgvApartment";
			this->dgvApartment->RowHeadersVisible = false;
			this->dgvApartment->RowHeadersWidth = 51;
			this->dgvApartment->Size = System::Drawing::Size(441, 535);
			this->dgvApartment->TabIndex = 18;
			this->dgvApartment->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApartmentForm::dataGridView1_CellClick);
			// 
			// NumDepa
			// 
			this->NumDepa->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->NumDepa->HeaderText = L"Departamento";
			this->NumDepa->MinimumWidth = 6;
			this->NumDepa->Name = L"NumDepa";
			this->NumDepa->Width = 122;
			// 
			// Piso
			// 
			this->Piso->HeaderText = L"Piso";
			this->Piso->MinimumWidth = 6;
			this->Piso->Name = L"Piso";
			this->Piso->Width = 65;
			// 
			// Mantenimiento
			// 
			this->Mantenimiento->HeaderText = L"Mantenimiento";
			this->Mantenimiento->MinimumWidth = 6;
			this->Mantenimiento->Name = L"Mantenimiento";
			this->Mantenimiento->Width = 125;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->Width = 125;
			// 
			// Clean
			// 
			this->Clean->Location = System::Drawing::Point(564, 542);
			this->Clean->Margin = System::Windows::Forms::Padding(4);
			this->Clean->Name = L"Clean";
			this->Clean->Size = System::Drawing::Size(133, 28);
			this->Clean->TabIndex = 20;
			this->Clean->Text = L"Limpiar";
			this->Clean->UseVisualStyleBackColor = true;
			this->Clean->Click += gcnew System::EventHandler(this, &ApartmentForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(541, 373);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Metros cuadrados:";
			// 
			// txtDimensiones
			// 
			this->txtDimensiones->Location = System::Drawing::Point(758, 373);
			this->txtDimensiones->Margin = System::Windows::Forms::Padding(4);
			this->txtDimensiones->Name = L"txtDimensiones";
			this->txtDimensiones->Size = System::Drawing::Size(132, 22);
			this->txtDimensiones->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(732, 542);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 28);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ApartmentForm::button1_Click_1);
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(758, 341);
			this->txtPiso->Margin = System::Windows::Forms::Padding(4);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(132, 22);
			this->txtPiso->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(541, 341);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Piso:";
			// 
			// txtRealizado
			// 
			this->txtRealizado->AutoSize = true;
			this->txtRealizado->Location = System::Drawing::Point(758, 433);
			this->txtRealizado->Margin = System::Windows::Forms::Padding(4);
			this->txtRealizado->Name = L"txtRealizado";
			this->txtRealizado->Size = System::Drawing::Size(91, 20);
			this->txtRealizado->TabIndex = 26;
			this->txtRealizado->Text = L"Realizado";
			this->txtRealizado->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(-3, -2);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Atrás";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ApartmentForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(541, 458);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Estado:";
			// 
			// txtHabitado
			// 
			this->txtHabitado->AutoSize = true;
			this->txtHabitado->Location = System::Drawing::Point(758, 458);
			this->txtHabitado->Margin = System::Windows::Forms::Padding(4);
			this->txtHabitado->Name = L"txtHabitado";
			this->txtHabitado->Size = System::Drawing::Size(85, 20);
			this->txtHabitado->TabIndex = 29;
			this->txtHabitado->Text = L"Habitado";
			this->txtHabitado->UseVisualStyleBackColor = true;
			// 
			// ApartmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(929, 627);
			this->Controls->Add(this->txtHabitado);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtRealizado);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtDimensiones);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Clean);
			this->Controls->Add(this->dgvApartment);
			this->Controls->Add(this->btnAlterPhoto);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtNumDep);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ApartmentForm";
			this->ShowIcon = false;
			this->Text = L"Registro de departamento";
			this->Load += gcnew System::EventHandler(this, &ApartmentForm::ApartmentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ApartmentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showApartment();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void ClearControls() {
			   txtNumDep->Text = "";
			   txtPrecio->Text = "";
			   txtDimensiones->Text = "";
			   txtPiso->Text = "";
		   }

	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txtNumDep->Text);
		//int numdepartamento = Convert::ToInt32(txtNumDep->Text);
		double precio = Convert::ToDouble(txtPrecio->Text);
		int piso = Convert::ToInt32(txtPiso->Text);
		double dimensiones = Convert::ToDouble(txtDimensiones->Text);
	
		Departamento^ depa = gcnew Departamento();

		depa->Id = id; // ES EL NUMERO DE DEPARTAMENTO
		depa->Precio = precio;
		depa->Estado = txtRealizado->Checked;
		depa->Habitado = txtHabitado->Checked;
		depa->Dimensiones = dimensiones;
		depa->Piso = piso;
		//depa->NumDep = numdepartamento;

		if (pictureBox1 != nullptr && pictureBox1->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pictureBox1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			depa->Photo = ms->ToArray();
		}

		Service::AddApartment(depa);
		showApartment();
	}

		   void showApartment() {
			   List<Departamento^>^ departList = Service::ConsultaDepa();
			   dgvApartment->Rows->Clear();
			   String^ estadoDep;
			   String^ habitadoDep;
			   for (int i = 0; i < departList->Count; i++) {
				   if (departList[i]->Estado == true) {
					   estadoDep = "Realizado";
				   }
				   else {
					   estadoDep = "No realizado";
				   }
				   if (departList[i]->Habitado == true) {
					   habitadoDep = "Habitado";
				   }
				   else {
					   habitadoDep = "No habitado";
				   }

				   dgvApartment->Rows->Add(gcnew array<String^>{
					   "" + departList[i]->Id,
						   "" + departList[i]->Piso,
						   estadoDep, habitadoDep
				   });
			   }
		   }


	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		int depaId = Int32::Parse(dgvApartment->Rows[dgvApartment->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

		Departamento^ depa = Service::ConsultaDepaByID(depaId);


		if (depa != nullptr) {
			txtNumDep->Text = Convert::ToString(depa->Id);
			txtPrecio->Text = "" + depa->Precio;
			txtDimensiones->Text = "" + depa->Dimensiones;
			txtRealizado->Checked = depa->Estado;
			txtHabitado->Checked = depa->Habitado;
			txtPiso->Text = "" + depa->Piso;
			//txtNumDep->Text = "" + depa->NumDep;

			if (depa->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(depa->Photo);
				pictureBox1->Image = Image::FromStream(ms);
			}
			else {
				pictureBox1->Image = nullptr;
				pictureBox1->Invalidate();
			}
		}


	}
	private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   void SearchAndPutImageOn(PictureBox^ pb) {
			   OpenFileDialog^ opfd = gcnew OpenFileDialog();
			   opfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
			   if (opfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   pb->Image = gcnew Bitmap(opfd->FileName);
			   }
		   }
	private: System::Void btnAlterPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->Image = gcnew Bitmap(ofd->FileName);
		}
	}
	private: System::Void txtPric_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txtNumDep->Text);
		//int numDepa = Convert::ToInt32(txtNumDep->Text);
		double dimensiones = Convert::ToDouble(txtDimensiones->Text);
		double precio = Convert::ToDouble(txtPrecio->Text);
		int piso = Convert::ToInt32(txtPiso->Text);
		//double metros = Convert::ToDouble(textDimen->Text);
		//int numdepartamento = Convert::ToInt32(txtNumDep->Text);

		Departamento^ depa = gcnew Departamento();
		depa->Id = id;
		depa->Precio = precio;
		depa->Estado = txtRealizado->Checked;
		depa->Dimensiones = dimensiones;
		depa->Piso = piso;
		depa->Habitado = txtHabitado->Checked;
		//depa->NumDep = numdepartamento;

		if (pictureBox1 != nullptr && pictureBox1->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pictureBox1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			depa->Photo = ms->ToArray();
		}

		Service::ModifyApartment(depa);
		showApartment();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtNumDep->Text);
		Service::DeleteApartment(id);
		showApartment();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

