#pragma once

namespace SalesSystemGUIApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace AlquilEasierModel;
    using namespace AlquilEasierService;

    /// <summary>
    /// Resumen de PersonalForm
    /// </summary>
    public ref class PersonalForm : public System::Windows::Forms::Form
    {
    public:
        PersonalForm(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~PersonalForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBoxPisos;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Button^ button2;











    private: System::Windows::Forms::TabControl^ BarraOpciones;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;



    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ cFecha;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ HIngreso;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ HSalida;













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
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBoxPisos = (gcnew System::Windows::Forms::ComboBox());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->cFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->HIngreso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->HSalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->BarraOpciones = (gcnew System::Windows::Forms::TabControl());
            this->tabPage2->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->BarraOpciones->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabPage2
            // 
            this->tabPage2->BackColor = System::Drawing::Color::SeaShell;
            this->tabPage2->Controls->Add(this->label2);
            this->tabPage2->Controls->Add(this->comboBoxPisos);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Margin = System::Windows::Forms::Padding(2);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(2);
            this->tabPage2->Size = System::Drawing::Size(590, 392);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Registrar Habitaciones Limpias";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(463, 171);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(82, 13);
            this->label2->TabIndex = 29;
            this->label2->Text = L"Selecionar piso:";
            // 
            // comboBoxPisos
            // 
            this->comboBoxPisos->FormattingEnabled = true;
            this->comboBoxPisos->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Piso 1", L"Piso 2", L"Piso 3", L"Piso 4",
                    L"Piso 5"
            });
            this->comboBoxPisos->Location = System::Drawing::Point(465, 189);
            this->comboBoxPisos->Margin = System::Windows::Forms::Padding(2);
            this->comboBoxPisos->Name = L"comboBoxPisos";
            this->comboBoxPisos->Size = System::Drawing::Size(92, 21);
            this->comboBoxPisos->TabIndex = 28;
            this->comboBoxPisos->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::comboBoxPisos_SelectedIndexChanged);
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::SeaShell;
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->dataGridView1);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Margin = System::Windows::Forms::Padding(2);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(2);
            this->tabPage1->Size = System::Drawing::Size(590, 392);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Registrar Horario";
            this->tabPage1->Click += gcnew System::EventHandler(this, &PersonalForm::tabPage1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(56, 112);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(143, 16);
            this->label1->TabIndex = 40;
            this->label1->Text = L"Historial de Registros";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(230, 41);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(137, 40);
            this->button1->TabIndex = 39;
            this->button1->Text = L"Registrar Salida";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &PersonalForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(58, 41);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(137, 40);
            this->button2->TabIndex = 38;
            this->button2->Text = L"Registrar Entrada";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &PersonalForm::button2_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::Beige;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->cFecha,
                    this->HIngreso, this->HSalida
            });
            this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
            this->dataGridView1->Location = System::Drawing::Point(69, 139);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(463, 216);
            this->dataGridView1->TabIndex = 37;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellClick);
            // 
            // cFecha
            // 
            this->cFecha->HeaderText = L"Fecha";
            this->cFecha->MinimumWidth = 6;
            this->cFecha->Name = L"cFecha";
            // 
            // HIngreso
            // 
            this->HIngreso->HeaderText = L"Hora de ingreso";
            this->HIngreso->MinimumWidth = 6;
            this->HIngreso->Name = L"HIngreso";
            this->HIngreso->Width = 180;
            // 
            // HSalida
            // 
            this->HSalida->HeaderText = L"Hora de salida";
            this->HSalida->MinimumWidth = 6;
            this->HSalida->Name = L"HSalida";
            this->HSalida->Width = 180;
            // 
            // BarraOpciones
            // 
            this->BarraOpciones->Controls->Add(this->tabPage1);
            this->BarraOpciones->Controls->Add(this->tabPage2);
            this->BarraOpciones->Location = System::Drawing::Point(20, 11);
            this->BarraOpciones->Margin = System::Windows::Forms::Padding(2);
            this->BarraOpciones->Name = L"BarraOpciones";
            this->BarraOpciones->SelectedIndex = 0;
            this->BarraOpciones->Size = System::Drawing::Size(598, 418);
            this->BarraOpciones->TabIndex = 27;
            this->BarraOpciones->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::BarraOpciones_SelectedIndexChanged);
            // 
            // PersonalForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Ivory;
            this->ClientSize = System::Drawing::Size(673, 464);
            this->Controls->Add(this->BarraOpciones);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"PersonalForm";
            this->Text = L"Personal de mantenimiento";
            this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->BarraOpciones->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        CheckedListBox^ currentCheckedListBox; // Variable para almacenar el CheckedListBox actual
        int currentY = 35; // Posición inicial en Y para el CheckedListBox
        List<Departamento^>^ departList = Service::ConsultaDepa();

        void UpdateCheckedListBox(array<String^>^ habitaciones)
        {
            // Si hay un CheckedListBox actual, removerlo
            if (currentCheckedListBox != nullptr)
            {
                this->tabPage2->Controls->Remove(currentCheckedListBox);
            }

            // Crear un nuevo CheckedListBox
            currentCheckedListBox = gcnew CheckedListBox();
            currentCheckedListBox->Size = System::Drawing::Size(this->Width / 2, 320); // Tamaño personalizado
            currentCheckedListBox->Location = System::Drawing::Point(10, currentY); // Posición personalizada

            // Añadir las habitaciones al CheckedListBox
            for (int i = 0; i < habitaciones->Length; i++)
            {
                currentCheckedListBox->Items->Add(habitaciones[i]);
            }

            // Añadir el evento ItemCheck
            currentCheckedListBox->ItemCheck += gcnew ItemCheckEventHandler(this, &PersonalForm::currentCheckedListBox_ItemCheck);

            // Añadir el CheckedListBox a la pestaña
            this->tabPage2->Controls->Add(currentCheckedListBox);
        }

        void currentCheckedListBox_ItemCheck(Object^ sender, ItemCheckEventArgs^ e)
        {
            // Obtener el ítem que se va a cambiar
            String^ selectedItem = currentCheckedListBox->Items[e->Index]->ToString();

            // Mostrar el cuadro de diálogo de confirmación
            System::Windows::Forms::DialogResult result = MessageBox::Show(
                "¿Está seguro de su selección: " + selectedItem + "?",
                "Confirmación",
                MessageBoxButtons::YesNo,
                MessageBoxIcon::Question);

            // Si el usuario selecciona "No", cancelar el cambio
            if (result == System::Windows::Forms::DialogResult::No)
            {
                e->NewValue = e->CurrentValue; // Cancelar el cambio
            }
            else
            {
                int index = e->Index;

                // Mostrar mensaje de confirmación
                MessageBox::Show("La " + selectedItem + " ha sido marcada como limpia y registrada.", "Registro Exitoso", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        array<String^>^ GetHabitacionesPorPiso(int piso)
        {
            List<String^>^ habitaciones = gcnew List<String^>();

            // Recorrer la lista de departamentos y extraer las habitaciones del piso especificado
            for (int i = 0; i < departList->Count; i++)
            {
                Departamento^ depa = departList[i];
                if (depa->Piso == piso)
                {
                    habitaciones->Add("Habitación " + depa->NumDep.ToString());
                }
            }

            return habitaciones->ToArray();
        }

    private: System::Void PersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {
        button1->Enabled = false;

        // Configurar la primera pestaña por defecto
        BarraOpciones->SelectedIndex = 0;

        //pictureBox1->Image = Image::FromFile("C:\\ProyectoLPOO\\Logo.png");
        //pictureBox1->Size = System::Drawing::Size(252, 149); // Tamaño deseado
        //pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;  // Estirar la imagen para que se ajuste al tamaño del PictureBox
        
        
        // LABEL PARA NOMBRE Y APELLIDO
        Label^ labelNombreCompleto = gcnew Label();
        labelNombreCompleto->Text = "Nuevo Label";
        labelNombreCompleto->Location = System::Drawing::Point(85, 210);
        labelNombreCompleto->Size = System::Drawing::Size(145, 20);
        labelNombreCompleto->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular);
        // Agregar el Label al formulario
        this->Controls->Add(labelNombreCompleto);
        showHorario();
    }

           void comboBoxPisos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
               int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
               UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
           }

    private: System::Void BarraOpciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        // Verificar si la pestaña seleccionada es la segunda pestaña (TabPage2)
        if (BarraOpciones->SelectedTab == tabPage2) {
            // Mostrar los controles para seleccionar el piso y las habitaciones limpias
            comboBoxPisos->Visible = true;
            label2->Visible = true;

            dataGridView1->Visible = true;
            /*Fecha->Visible = false;
            HoraIngreso->Visible = false;
            HoraSalida->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            textBox3->Visible = false;
            */

            // Llenar el ComboBox de pisos
            comboBoxPisos->Items->Clear();
            comboBoxPisos->Items->AddRange(gcnew array<System::String^>{ "Piso 1", "Piso 2", "Piso 3", "Piso 4", "Piso 5" });

            // Por defecto, seleccionar el primer piso
            comboBoxPisos->SelectedIndex = 0;

            // Mostrar las habitaciones limpias del primer piso por defecto
            int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
            UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
        }
        else {
            // Ocultar los controles cuando no se selecciona tabPage2
            comboBoxPisos->Visible = false;
            label2->Visible = false;
            /*
            dataGridView1->Visible = true;
            Fecha->Visible = true;
            HoraIngreso->Visible = true;
            HoraSalida->Visible = true;
            textBox1->Visible = true;
            textBox2->Visible = true;
            textBox3->Visible = true;
            */
        }
    }

           Personal^ horarioActual = nullptr;
    
          
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        DateTime ahora = DateTime::Now;

        // Mostrar la hora de entrada y la fecha en los cuadros de texto
        String^ horaEntrada = ahora.ToString("HH:mm:ss");
        String^ fecha = ahora.ToString("yyyy-MM-dd");

        // Crear un objeto Personal si no existe uno activo
        if (horarioActual == nullptr) {
            horarioActual = gcnew Personal();
        }

        // Asignar la hora de entrada y la fecha al objeto Personal
        horarioActual->HoraEntrada = horaEntrada;
        horarioActual->Fecha = ConvertirFecha(fecha);

        // Habilitar el botón de salida y deshabilitar el de entrada
        button2->Enabled = false;
        button1->Enabled = true;

        // No registrar aún en la base de datos o en la lista global
        // Service::AddHorario(horarioActual); <-- No registrar aún
        
    }


          private: int ConvertirFecha(String^ fechaStr) {
              DateTime fecha = DateTime::Parse(fechaStr);
              return fecha.Year * 10000 + fecha.Month * 100 + fecha.Day;
          }


                 void showHorario() {
                     // Supongamos que tienes una lista global de objetos Personal llamada listaHorarios
                     List<Personal^>^ horarioList = Service::ConsultaHorario();
                     dataGridView1->Rows->Clear();
                     for (int i = 0; i < horarioList->Count; i++) {
                         String^ fechaSeparada = SepararFecha(horarioList[i]->Fecha);
                         dataGridView1->Rows->Add(gcnew array<String^>{
                             fechaSeparada,
                                 horarioList[i]->HoraEntrada,
                                 horarioList[i]->HoraSalida,
                         });
                     }
                 }

                 String^ SepararFecha(int fecha) {
                     // Asumiendo que la fecha está en formato AAAAMMDD
                     int año = fecha / 10000;
                     int mes = (fecha % 10000) / 100;
                     int día = fecha % 100;
                     return año + "-" + mes.ToString("00") + "-" + día.ToString("00");
                 }






    private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

    }

    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (horarioActual != nullptr) {
        DateTime ahora = DateTime::Now;

        // Mostrar la hora de salida en el cuadro de texto
        String^ horaSalida = ahora.ToString("HH:mm:ss");

        // Asignar la hora de salida al objeto Personal existente
        horarioActual->HoraSalida = horaSalida;

        // Deshabilitar el botón de salida y habilitar el de entrada
        button1->Enabled = false;
        button2->Enabled = true;

        // Registrar el horario completo en la base de datos o lista global
        Service::AddHorario(horarioActual);
        showHorario(); // Actualizar la vista
        horarioActual = nullptr; // Reiniciar el objeto para el próximo registro
    }
}
};
}
;


