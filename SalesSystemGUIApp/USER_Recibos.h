#pragma once
#include "ComboBoxItem.h"

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
	/// Resumen de USER_Recibos
	/// </summary>
	public ref class USER_Recibos : public System::Windows::Forms::Form
	{
	public:
		USER_Recibos(void)
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
		~USER_Recibos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ textFechaPago;

	private: System::Windows::Forms::Label^ textSeguridad;

	private: System::Windows::Forms::Label^ textInternet;

	private: System::Windows::Forms::Label^ textLuz;

	private: System::Windows::Forms::Label^ textAgua;

	private: System::Windows::Forms::Label^ textAlquiler;
	private: System::Windows::Forms::Label^ textDeuda;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ DeudaMonto;
	private: System::Windows::Forms::Label^ AlquilerMonto;
	private: System::Windows::Forms::Label^ AguaMonto;
	private: System::Windows::Forms::Label^ LuzMonto;
	private: System::Windows::Forms::Label^ InternetMonto;
	private: System::Windows::Forms::Label^ SeguridadMonto;
	private: System::Windows::Forms::Label^ FechaPago;
	private: System::Windows::Forms::Label^ textServicios;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Panel^ panelRecibo;

	private: System::Windows::Forms::Button^ btnPagar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ EstadoPago;





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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textFechaPago = (gcnew System::Windows::Forms::Label());
			this->textSeguridad = (gcnew System::Windows::Forms::Label());
			this->textInternet = (gcnew System::Windows::Forms::Label());
			this->textLuz = (gcnew System::Windows::Forms::Label());
			this->textAgua = (gcnew System::Windows::Forms::Label());
			this->textAlquiler = (gcnew System::Windows::Forms::Label());
			this->textDeuda = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DeudaMonto = (gcnew System::Windows::Forms::Label());
			this->AlquilerMonto = (gcnew System::Windows::Forms::Label());
			this->AguaMonto = (gcnew System::Windows::Forms::Label());
			this->LuzMonto = (gcnew System::Windows::Forms::Label());
			this->InternetMonto = (gcnew System::Windows::Forms::Label());
			this->SeguridadMonto = (gcnew System::Windows::Forms::Label());
			this->FechaPago = (gcnew System::Windows::Forms::Label());
			this->textServicios = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->panelRecibo = (gcnew System::Windows::Forms::Panel());
			this->btnPagar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->EstadoPago = (gcnew System::Windows::Forms::Label());
			this->panelRecibo->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Enero", L"Febrero", L"Marzo", L"Abril ", L"Mayo",
					L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octubre", L"Noviembre", L"Diciembre"
			});
			this->comboBox1->Location = System::Drawing::Point(146, 78);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &USER_Recibos::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2022", L"2023", L"2024" });
			this->comboBox2->Location = System::Drawing::Point(414, 78);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 24);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &USER_Recibos::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mes:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(409, 36);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Año:";
			// 
			// textFechaPago
			// 
			this->textFechaPago->AutoSize = true;
			this->textFechaPago->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textFechaPago->Location = System::Drawing::Point(302, 130);
			this->textFechaPago->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textFechaPago->Name = L"textFechaPago";
			this->textFechaPago->Size = System::Drawing::Size(159, 25);
			this->textFechaPago->TabIndex = 36;
			this->textFechaPago->Text = L"Fecha de pago:";
			// 
			// textSeguridad
			// 
			this->textSeguridad->AutoSize = true;
			this->textSeguridad->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textSeguridad->Location = System::Drawing::Point(29, 203);
			this->textSeguridad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textSeguridad->Name = L"textSeguridad";
			this->textSeguridad->Size = System::Drawing::Size(116, 25);
			this->textSeguridad->TabIndex = 35;
			this->textSeguridad->Text = L"Seguridad:";
			// 
			// textInternet
			// 
			this->textInternet->AutoSize = true;
			this->textInternet->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textInternet->Location = System::Drawing::Point(29, 169);
			this->textInternet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textInternet->Name = L"textInternet";
			this->textInternet->Size = System::Drawing::Size(95, 25);
			this->textInternet->TabIndex = 34;
			this->textInternet->Text = L"Internet:";
			// 
			// textLuz
			// 
			this->textLuz->AutoSize = true;
			this->textLuz->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLuz->Location = System::Drawing::Point(31, 134);
			this->textLuz->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textLuz->Name = L"textLuz";
			this->textLuz->Size = System::Drawing::Size(57, 25);
			this->textLuz->TabIndex = 33;
			this->textLuz->Text = L"Luz:";
			// 
			// textAgua
			// 
			this->textAgua->AutoSize = true;
			this->textAgua->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAgua->Location = System::Drawing::Point(31, 94);
			this->textAgua->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAgua->Name = L"textAgua";
			this->textAgua->Size = System::Drawing::Size(71, 25);
			this->textAgua->TabIndex = 32;
			this->textAgua->Text = L"Agua:";
			// 
			// textAlquiler
			// 
			this->textAlquiler->AutoSize = true;
			this->textAlquiler->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAlquiler->Location = System::Drawing::Point(29, 58);
			this->textAlquiler->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textAlquiler->Name = L"textAlquiler";
			this->textAlquiler->Size = System::Drawing::Size(97, 25);
			this->textAlquiler->TabIndex = 31;
			this->textAlquiler->Text = L"Alquiler:";
			// 
			// textDeuda
			// 
			this->textDeuda->AutoSize = true;
			this->textDeuda->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDeuda->Location = System::Drawing::Point(302, 90);
			this->textDeuda->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textDeuda->Name = L"textDeuda";
			this->textDeuda->Size = System::Drawing::Size(131, 25);
			this->textDeuda->TabIndex = 30;
			this->textDeuda->Text = L"Deuda total:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(457, 90);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 37;
			// 
			// DeudaMonto
			// 
			this->DeudaMonto->AutoSize = true;
			this->DeudaMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DeudaMonto->Location = System::Drawing::Point(484, 94);
			this->DeudaMonto->Name = L"DeudaMonto";
			this->DeudaMonto->Size = System::Drawing::Size(62, 20);
			this->DeudaMonto->TabIndex = 38;
			this->DeudaMonto->Text = L"label11";
			// 
			// AlquilerMonto
			// 
			this->AlquilerMonto->AutoSize = true;
			this->AlquilerMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->AlquilerMonto->Location = System::Drawing::Point(173, 62);
			this->AlquilerMonto->Name = L"AlquilerMonto";
			this->AlquilerMonto->Size = System::Drawing::Size(62, 20);
			this->AlquilerMonto->TabIndex = 39;
			this->AlquilerMonto->Text = L"label12";
			// 
			// AguaMonto
			// 
			this->AguaMonto->AutoSize = true;
			this->AguaMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->AguaMonto->Location = System::Drawing::Point(173, 97);
			this->AguaMonto->Name = L"AguaMonto";
			this->AguaMonto->Size = System::Drawing::Size(62, 20);
			this->AguaMonto->TabIndex = 40;
			this->AguaMonto->Text = L"label12";
			// 
			// LuzMonto
			// 
			this->LuzMonto->AutoSize = true;
			this->LuzMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->LuzMonto->Location = System::Drawing::Point(175, 138);
			this->LuzMonto->Name = L"LuzMonto";
			this->LuzMonto->Size = System::Drawing::Size(62, 20);
			this->LuzMonto->TabIndex = 41;
			this->LuzMonto->Text = L"label12";
			// 
			// InternetMonto
			// 
			this->InternetMonto->AutoSize = true;
			this->InternetMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->InternetMonto->Location = System::Drawing::Point(175, 172);
			this->InternetMonto->Name = L"InternetMonto";
			this->InternetMonto->Size = System::Drawing::Size(62, 20);
			this->InternetMonto->TabIndex = 42;
			this->InternetMonto->Text = L"label12";
			// 
			// SeguridadMonto
			// 
			this->SeguridadMonto->AutoSize = true;
			this->SeguridadMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SeguridadMonto->Location = System::Drawing::Point(175, 207);
			this->SeguridadMonto->Name = L"SeguridadMonto";
			this->SeguridadMonto->Size = System::Drawing::Size(62, 20);
			this->SeguridadMonto->TabIndex = 43;
			this->SeguridadMonto->Text = L"label12";
			// 
			// FechaPago
			// 
			this->FechaPago->AutoSize = true;
			this->FechaPago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->FechaPago->Location = System::Drawing::Point(484, 134);
			this->FechaPago->Name = L"FechaPago";
			this->FechaPago->Size = System::Drawing::Size(62, 20);
			this->FechaPago->TabIndex = 44;
			this->FechaPago->Text = L"label11";
			// 
			// textServicios
			// 
			this->textServicios->AutoSize = true;
			this->textServicios->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textServicios->Location = System::Drawing::Point(87, 18);
			this->textServicios->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textServicios->Name = L"textServicios";
			this->textServicios->Size = System::Drawing::Size(100, 25);
			this->textServicios->TabIndex = 45;
			this->textServicios->Text = L"Servicios";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(276, 120);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(169, 32);
			this->btnBuscar->TabIndex = 46;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &USER_Recibos::btnBuscar_Click);
			// 
			// panelRecibo
			// 
			this->panelRecibo->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelRecibo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelRecibo->Controls->Add(this->EstadoPago);
			this->panelRecibo->Controls->Add(this->label4);
			this->panelRecibo->Controls->Add(this->btnPagar);
			this->panelRecibo->Controls->Add(this->textServicios);
			this->panelRecibo->Controls->Add(this->textDeuda);
			this->panelRecibo->Controls->Add(this->FechaPago);
			this->panelRecibo->Controls->Add(this->textAlquiler);
			this->panelRecibo->Controls->Add(this->SeguridadMonto);
			this->panelRecibo->Controls->Add(this->textAgua);
			this->panelRecibo->Controls->Add(this->InternetMonto);
			this->panelRecibo->Controls->Add(this->textLuz);
			this->panelRecibo->Controls->Add(this->LuzMonto);
			this->panelRecibo->Controls->Add(this->textInternet);
			this->panelRecibo->Controls->Add(this->AguaMonto);
			this->panelRecibo->Controls->Add(this->textSeguridad);
			this->panelRecibo->Controls->Add(this->AlquilerMonto);
			this->panelRecibo->Controls->Add(this->textFechaPago);
			this->panelRecibo->Controls->Add(this->DeudaMonto);
			this->panelRecibo->Controls->Add(this->label3);
			this->panelRecibo->Location = System::Drawing::Point(56, 179);
			this->panelRecibo->Name = L"panelRecibo";
			this->panelRecibo->Size = System::Drawing::Size(614, 299);
			this->panelRecibo->TabIndex = 47;
			// 
			// btnPagar
			// 
			this->btnPagar->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnPagar->Location = System::Drawing::Point(218, 248);
			this->btnPagar->Name = L"btnPagar";
			this->btnPagar->Size = System::Drawing::Size(169, 32);
			this->btnPagar->TabIndex = 48;
			this->btnPagar->Text = L"Pagar";
			this->btnPagar->UseVisualStyleBackColor = false;
			this->btnPagar->Click += gcnew System::EventHandler(this, &USER_Recibos::btnPagar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(302, 171);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 25);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Estado de pago:";
			// 
			// EstadoPago
			// 
			this->EstadoPago->AutoSize = true;
			this->EstadoPago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->EstadoPago->Location = System::Drawing::Point(484, 176);
			this->EstadoPago->Name = L"EstadoPago";
			this->EstadoPago->Size = System::Drawing::Size(62, 20);
			this->EstadoPago->TabIndex = 50;
			this->EstadoPago->Text = L"label11";
			// 
			// USER_Recibos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(730, 628);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panelRecibo);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"USER_Recibos";
			this->Text = L"USER_Recibos";
			this->Load += gcnew System::EventHandler(this, &USER_Recibos::USER_Recibos_Load);
			this->panelRecibo->ResumeLayout(false);
			this->panelRecibo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		List<Deudas^>^ deudaList = Service::ConsultaDeuda();
		int seleccionMes = 0;
		int seleccionAaaa = 0;
		int mesSeleccionado, aaaaSeleccionado;
		int NumDep = 101; // DEBE SER EL NUMERO DE HABITACION ASIGNADO AL INQUILINO (SE NECESITA LA LISTA INQUILINO)

		// Función para extraer el mes de una fecha
		static int ExtraerMes(int fecha) {
			// Extrae el mes de la fecha (posiciones 3 y 4)
			return (fecha / 10000) % 100;
		}

		// Función para extraer el año de una fecha
		static int ExtraerAaaa(int fecha) {
			// Extrae el año de la fecha (posiciones 5 a 8)
			return fecha % 10000;
		}

		static int ObtenerMesSeleccionado(ComboBox^ comboBoxMes) {
			String^ mesSeleccionado = comboBoxMes->SelectedItem->ToString();
			if (mesSeleccionado == "Enero") return 1;
			else if (mesSeleccionado == "Febrero") return 2;
			else if (mesSeleccionado == "Marzo") return 3;
			else if (mesSeleccionado == "Abril") return 4;
			else if (mesSeleccionado == "Mayo") return 5;
			else if (mesSeleccionado == "Junio") return 6;
			else if (mesSeleccionado == "Julio") return 7;
			else if (mesSeleccionado == "Agosto") return 8;
			else if (mesSeleccionado == "Septiembre") return 9;
			else if (mesSeleccionado == "Octubre") return 10;
			else if (mesSeleccionado == "Noviembre") return 11;
			else if (mesSeleccionado == "Diciembre") return 12;
			else return 0; // En caso de que no se seleccione ningún mes
		}

		int ContarRepeticionesID(List<Deudas^>^ deudas, int idBuscado) {
			int contador = 0;
			for each (Deudas ^ deuda in deudas) {
				if (deuda->Id == idBuscado) {
					contador++;
				}
			}
			return contador;
		}

		Deudas^ BuscarDeudaPorMesYAaaa(List<Deudas^>^ deudas, int mes, int año, int NumDep) {
			for each (Deudas ^ deuda in deudas) {
				if (deuda->Id == NumDep && ExtraerMes(deuda->Fecha) == mes && ExtraerAaaa(deuda->Fecha) == año) {
					return deuda;
				}
			}
			return nullptr;
		}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Obtener el mes seleccionado como un número
		mesSeleccionado = ObtenerMesSeleccionado(comboBox1);
		seleccionMes = 1;
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		aaaaSeleccionado = Convert::ToInt32(comboBox2->SelectedItem->ToString());
		seleccionAaaa = 1;
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

		   void MostarRecibo() {
			   int repeticiones = ContarRepeticionesID(deudaList, NumDep);

			   if (repeticiones == 1) {
				   // Encontrar la deuda con el ID especificado
				   Deudas^ deudaEncontrada1 = BuscarDeudaPorMesYAaaa(deudaList, mesSeleccionado, aaaaSeleccionado, NumDep);
				   if (deudaEncontrada1 != nullptr) {
					   // Código para imprimir los montos de los servicios
					   AlquilerMonto->Text = deudaEncontrada1->Alquiler.ToString();
					   AguaMonto->Text = deudaEncontrada1->Agua.ToString();
					   LuzMonto->Text = deudaEncontrada1->Luz.ToString();
					   SeguridadMonto->Text = deudaEncontrada1->Seguridad.ToString();
					   InternetMonto->Text = deudaEncontrada1->Internet.ToString();
					   DeudaMonto->Text = deudaEncontrada1->Deuda.ToString();
					   int deudaConvertir1 = deudaEncontrada1->Fecha;
					   FechaPago->Text = SepararFecha(deudaConvertir1);
					   EstadoPago->Text = deudaEncontrada1->Estado->ToString();
				   }
			   }
			   else {
				   // Código para buscar los montos de los servicios correspondientes al mes y año seleccionados
				   Deudas^ deudaEncontrada2 = BuscarDeudaPorMesYAaaa(deudaList, mesSeleccionado, aaaaSeleccionado, NumDep);
				   if (deudaEncontrada2 != nullptr) {
					   textAlquiler->Text = deudaEncontrada2->Alquiler.ToString();
					   textAgua->Text = deudaEncontrada2->Agua.ToString();
					   textLuz->Text = deudaEncontrada2->Luz.ToString();
					   textSeguridad->Text = deudaEncontrada2->Seguridad.ToString();
					   textInternet->Text = deudaEncontrada2->Internet.ToString();
					   textDeuda->Text = deudaEncontrada2->Deuda.ToString();
					   int deudaConvertir2 = deudaEncontrada2->Fecha;
					   FechaPago->Text = SepararFecha(deudaConvertir2);
					   EstadoPago->Text = deudaEncontrada2->Estado->ToString();
				   }
			   }
			   panelRecibo->Visible = true;
		   }

	private: System::Void USER_Recibos_Load(System::Object^ sender, System::EventArgs^ e) {
		panelRecibo->Visible = false;
	}
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (seleccionMes == 1 && seleccionAaaa == 1) {
			MostarRecibo();
		}
		else {
			panelRecibo->Visible = false;
		}
	}
	private: System::Void btnPagar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (seleccionMes == 1 && seleccionAaaa == 1) {
			// Buscar la deuda correspondiente al mes y año seleccionados
			Deudas^ deudaEncontrada = BuscarDeudaPorMesYAaaa(deudaList, mesSeleccionado, aaaaSeleccionado, NumDep);
			if (deudaEncontrada != nullptr && deudaEncontrada->Estado == "Sin Pagar") {
				// Cambiar el estado a "cancelado"
				deudaEncontrada->Estado = "Cancelado";

				// Llamar al servicio para guardar los cambios
				Service::ModifyDeuda(deudaEncontrada);

				// Mostrar un mensaje de confirmación
				MessageBox::Show("Deuda pagada con éxito", "Confirmación", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Actualizar la interfaz de usuario
				EstadoPago->Text = deudaEncontrada->Estado->ToString();
			}
		}
	}
	};
}
