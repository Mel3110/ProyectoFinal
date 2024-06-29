#pragma once
#include "ComboBoxItem.h"
#include <ctime>


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
	using namespace std;

	/// <summary>
	/// Resumen de ADMIN_inq_recibos
	/// </summary>
	public ref class ADMIN_inq_recibos : public System::Windows::Forms::Form
	{
	public:
		ADMIN_inq_recibos(void)
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
		~ADMIN_inq_recibos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textDeuda;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textAlquiler;
	private: System::Windows::Forms::TextBox^ textAgua;
	private: System::Windows::Forms::TextBox^ textLuz;
	private: System::Windows::Forms::TextBox^ textSecurity;




	private: System::Windows::Forms::TextBox^ textInternet;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgvDeudas;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textFechaVencimiento;








	private: System::Windows::Forms::Label^ label2;










	private: System::Windows::Forms::TextBox^ textId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MontoTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::TextBox^ textEstado;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textInquilino;





















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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textDeuda = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->textAgua = (gcnew System::Windows::Forms::TextBox());
			this->textLuz = (gcnew System::Windows::Forms::TextBox());
			this->textSecurity = (gcnew System::Windows::Forms::TextBox());
			this->textInternet = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvDeudas = (gcnew System::Windows::Forms::DataGridView());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MontoTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textFechaVencimiento = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->textEstado = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textInquilino = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeudas))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(486, 374);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Deuda total";
			this->label5->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::label5_Click);
			// 
			// textDeuda
			// 
			this->textDeuda->BackColor = System::Drawing::SystemColors::Control;
			this->textDeuda->Location = System::Drawing::Point(696, 374);
			this->textDeuda->Margin = System::Windows::Forms::Padding(4);
			this->textDeuda->Name = L"textDeuda";
			this->textDeuda->ReadOnly = true;
			this->textDeuda->Size = System::Drawing::Size(175, 22);
			this->textDeuda->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(486, 131);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Alquiler";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(488, 177);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Agua";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(488, 220);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Luz";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(486, 264);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Internet";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(486, 310);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 25);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Seguridad";
			// 
			// textAlquiler
			// 
			this->textAlquiler->Location = System::Drawing::Point(696, 131);
			this->textAlquiler->Margin = System::Windows::Forms::Padding(4);
			this->textAlquiler->Name = L"textAlquiler";
			this->textAlquiler->ReadOnly = true;
			this->textAlquiler->Size = System::Drawing::Size(175, 22);
			this->textAlquiler->TabIndex = 15;
			// 
			// textAgua
			// 
			this->textAgua->Location = System::Drawing::Point(696, 177);
			this->textAgua->Margin = System::Windows::Forms::Padding(4);
			this->textAgua->Name = L"textAgua";
			this->textAgua->Size = System::Drawing::Size(175, 22);
			this->textAgua->TabIndex = 16;
			// 
			// textLuz
			// 
			this->textLuz->Location = System::Drawing::Point(696, 220);
			this->textLuz->Margin = System::Windows::Forms::Padding(4);
			this->textLuz->Name = L"textLuz";
			this->textLuz->Size = System::Drawing::Size(175, 22);
			this->textLuz->TabIndex = 17;
			// 
			// textSecurity
			// 
			this->textSecurity->Location = System::Drawing::Point(696, 310);
			this->textSecurity->Margin = System::Windows::Forms::Padding(4);
			this->textSecurity->Name = L"textSecurity";
			this->textSecurity->ReadOnly = true;
			this->textSecurity->Size = System::Drawing::Size(175, 22);
			this->textSecurity->TabIndex = 18;
			// 
			// textInternet
			// 
			this->textInternet->Location = System::Drawing::Point(696, 264);
			this->textInternet->Margin = System::Windows::Forms::Padding(4);
			this->textInternet->Name = L"textInternet";
			this->textInternet->ReadOnly = true;
			this->textInternet->Size = System::Drawing::Size(175, 22);
			this->textInternet->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12));
			this->button1->Location = System::Drawing::Point(491, 488);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 37);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12));
			this->button2->Location = System::Drawing::Point(570, 533);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 37);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Limpiar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button2_Click);
			// 
			// dgvDeudas
			// 
			this->dgvDeudas->AllowUserToOrderColumns = true;
			this->dgvDeudas->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvDeudas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDeudas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->NumDepa, this->MontoTotal,
					this->Estado
			});
			this->dgvDeudas->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvDeudas->Location = System::Drawing::Point(25, 42);
			this->dgvDeudas->Margin = System::Windows::Forms::Padding(4);
			this->dgvDeudas->Name = L"dgvDeudas";
			this->dgvDeudas->RowHeadersVisible = false;
			this->dgvDeudas->RowHeadersWidth = 51;
			this->dgvDeudas->Size = System::Drawing::Size(379, 528);
			this->dgvDeudas->TabIndex = 23;
			this->dgvDeudas->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ADMIN_inq_recibos::dataGridView1_CellClick);
			// 
			// NumDepa
			// 
			this->NumDepa->HeaderText = L"N° Departamento";
			this->NumDepa->MinimumWidth = 6;
			this->NumDepa->Name = L"NumDepa";
			this->NumDepa->Width = 125;
			// 
			// MontoTotal
			// 
			this->MontoTotal->HeaderText = L"Monto Total";
			this->MontoTotal->MinimumWidth = 6;
			this->MontoTotal->Name = L"MontoTotal";
			this->MontoTotal->Width = 125;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(486, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 25);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Departamento";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(-3, -1);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Atrás";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button3_Click);
			// 
			// textFechaVencimiento
			// 
			this->textFechaVencimiento->Location = System::Drawing::Point(696, 408);
			this->textFechaVencimiento->Margin = System::Windows::Forms::Padding(4);
			this->textFechaVencimiento->Name = L"textFechaVencimiento";
			this->textFechaVencimiento->Size = System::Drawing::Size(175, 22);
			this->textFechaVencimiento->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(486, 404);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 25);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Fecha vencimiento";
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(642, 47);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(144, 22);
			this->textId->TabIndex = 32;
			// 
			// textEstado
			// 
			this->textEstado->BackColor = System::Drawing::SystemColors::Control;
			this->textEstado->Location = System::Drawing::Point(696, 438);
			this->textEstado->Margin = System::Windows::Forms::Padding(4);
			this->textEstado->Name = L"textEstado";
			this->textEstado->ReadOnly = true;
			this->textEstado->Size = System::Drawing::Size(175, 22);
			this->textEstado->TabIndex = 34;
			this->textEstado->Text = L"Sin Pagar";
			this->textEstado->TextChanged += gcnew System::EventHandler(this, &ADMIN_inq_recibos::textBox1_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(486, 434);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 25);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Estado";
			this->label11->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::label3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12));
			this->button4->Location = System::Drawing::Point(659, 488);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 37);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Modificar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12));
			this->button5->Location = System::Drawing::Point(752, 533);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 37);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(488, 76);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Inquilino";
			this->label3->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::label3_Click_1);
			// 
			// textInquilino
			// 
			this->textInquilino->Location = System::Drawing::Point(642, 76);
			this->textInquilino->Name = L"textInquilino";
			this->textInquilino->ReadOnly = true;
			this->textInquilino->Size = System::Drawing::Size(229, 22);
			this->textInquilino->TabIndex = 38;
			this->textInquilino->TextChanged += gcnew System::EventHandler(this, &ADMIN_inq_recibos::textBox1_TextChanged_1);
			// 
			// ADMIN_inq_recibos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(959, 604);
			this->Controls->Add(this->textInquilino);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textEstado);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->textFechaVencimiento);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvDeudas);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textInternet);
			this->Controls->Add(this->textSecurity);
			this->Controls->Add(this->textLuz);
			this->Controls->Add(this->textAgua);
			this->Controls->Add(this->textAlquiler);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textDeuda);
			this->Controls->Add(this->label5);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ADMIN_inq_recibos";
			this->Text = L"Agregar Recibo";
			this->Load += gcnew System::EventHandler(this, &ADMIN_inq_recibos::ADMIN_inq_recibos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeudas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		List<Departamento^>^ departList = Service::ConsultaDepa();
		List<Inquilino^>^ inquilinoList = Service::ConsultaInquilino();

		static int ConvertirFecha(String^ fecha) {
			// Extrae día, mes y año de la cadena
			String^ dia = fecha->Substring(0, 2);
			String^ mes = fecha->Substring(3, 2);
			String^ año = fecha->Substring(6, 4);

			// Concatena día, mes y año
			String^ fechaConcatenada = dia + mes + año;

			// Convierte la cadena concatenada a un entero
			int fechaEntera = Convert::ToInt32(fechaConcatenada);

			return fechaEntera;
		}

		static String^ SepararFecha(int fecha) {
			// Convertir el entero a una cadena con formato "DDMMYYYY"
			String^ fechaStr = fecha.ToString("D8");

			// Extraer día, mes y año de la cadena
			String^ dia = fechaStr->Substring(0, 2);
			String^ mes = fechaStr->Substring(2, 2);
			String^ año = fechaStr->Substring(4, 4);

			// Formatear la fecha en "DD/MM/YYYY"
			return dia + "/" + mes + "/" + año;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(textId->Text);
		double alquiler = Convert::ToDouble(textAlquiler->Text);
		double agua = Convert::ToDouble(textAgua->Text);
		double luz = Convert::ToDouble(textLuz->Text);
		double internet = Convert::ToDouble(textInternet->Text);
		double security = Convert::ToDouble(textSecurity->Text);
		// Sumar los valores
		double deuda = alquiler + agua + luz + internet + security;
		// Mostrar la deuda en el TextBox correspondiente
		textDeuda->Text = deuda.ToString();
		int fecha = ConvertirFecha(textFechaVencimiento->Text);
		String^ estado = textEstado->Text;

		Deudas^ recibo = gcnew Deudas();
		recibo->Id = id;
		recibo->Deuda = deuda;
		recibo->Alquiler = alquiler;
		recibo->Agua = agua;
		recibo->Luz = luz;
		recibo->Internet = internet;
		recibo->Seguridad = security;
		recibo->Fecha = fecha;
		recibo->Estado = estado;

		Service::AddDeuda(recibo);
		showDeudas();
	}

		   void showDeudas() {
			   List<Deudas^>^ deudaList = Service::ConsultaDeuda();
			   dgvDeudas->Rows->Clear();
			   for (int i = 0; i < deudaList->Count; i++) {
				   dgvDeudas->Rows->Add(gcnew array<String^>{
					   "" + deudaList[i]->Id,
						   "" + deudaList[i]->Deuda,
						   deudaList[i]->Estado
				   });
			   }
		   }

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
	}

		   void ClearControls() {
			   textId->Text = "";
			   textDeuda->Text = "";
			   textAlquiler->Text = "";
			   textAgua->Text = "";
			   textLuz->Text = "";
			   textInternet->Text = "";
			   textSecurity->Text = "";
			   textFechaVencimiento->Text = "";
		   }

	private: System::Void ADMIN_inq_recibos_Load(System::Object^ sender, System::EventArgs^ e) {
		showDeudas();
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int depa = Int32::Parse(dgvDeudas->Rows[dgvDeudas->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

		Deudas^ deuda = Service::ConsultaDeudaByID(depa);
		Inquilino^ inquilino = Service::ConsultaInquilinoByNumDep(depa);

		if (deuda != nullptr) {
			textId->Text = "" + deuda->Id;
			for (int i = 0; i < inquilinoList->Count; i++) {
				Inquilino^ inquilino = inquilinoList[i];
				if (inquilino->DepAsignado == deuda->Id) {
					textInquilino->Text = inquilino->Nombre + " " + inquilino->Apellido;
				}
			}
			textDeuda->Text = "" + deuda->Deuda;
			textAlquiler->Text = "" + deuda->Alquiler;
			textAgua->Text = "" + deuda->Agua;
			textLuz->Text = "" + deuda->Luz;
			textInternet->Text = "" + deuda->Internet;
			textSecurity->Text = "" + deuda->Seguridad;
			int deudaConvertir = deuda->Fecha;
			textFechaVencimiento->Text = SepararFecha(deudaConvertir);
			textEstado->Text = deuda->Estado;
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(textId->Text);
  
		double alquiler = Convert::ToDouble(textAlquiler->Text);
		double agua = Convert::ToDouble(textAgua->Text);
		double luz = Convert::ToDouble(textLuz->Text);
		double internet = Convert::ToDouble(textInternet->Text);
		double security = Convert::ToDouble(textSecurity->Text);
		// Sumar los valores
		double deuda = alquiler + agua + luz + internet + security;
		// Mostrar la deuda en el TextBox correspondiente
		textDeuda->Text = deuda.ToString();
		int fecha = ConvertirFecha(textFechaVencimiento->Text);
		String^ estado = textEstado->Text;

		Deudas^ recibo = gcnew Deudas();
		recibo->Id = id;
		recibo->Deuda = deuda;
		recibo->Alquiler = alquiler;
		recibo->Agua = agua;
		recibo->Luz = luz;
		recibo->Internet = internet;
		recibo->Seguridad = security;
		recibo->Fecha = fecha;
		recibo->Estado = estado;

		Service::ModifyDeuda(recibo);
		showDeudas();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(textId->Text);
		Service::DeleteDeuda(id);
		showDeudas();

	}
	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}