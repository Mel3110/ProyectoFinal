#include "pch.h"

#include "AlquilEasierPersistance.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;


//CÓDIGO PARA FORMATO BIN
void AlquilEasierPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}
Object^ AlquilEasierPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
}

SqlConnection^ AlquilEasierPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "admin2024";
    conn->ConnectionString = "Server=alquileasier.cwplz30rgmxq.us-east-1.rds.amazonaws.com;" +
        "Database = BaseDatos;" +
        "User ID = admin; " +
        "Password = " + password + ";";
    conn->Open();
    return conn;
}


//CRUD DE USUARIO
int AlquilEasierPersistance::Persistance::AddUsuario(Usuario^ usuario)
{
    //usuariosListDB->Add(usuario);
    //PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuariosListDB);
    //return 1;
    int usuarioId = 0;
    SqlConnection^ conn = nullptr;
    try {
       //1 conexion
        conn = GetConnection();

       //2 setencia
        String^ sqlStr = "dbo.usp_AddUsuario";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@Nombre", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Nombre;
        cmd->Parameters->Add("@Apellido", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Apellido;
        cmd->Parameters->Add("@Telefono", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Telefono;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 255)->Value = usuario->DNI;
        cmd->Parameters->Add("@Contraseña", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Password;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 10)->Value = usuario->Status;
        cmd->Parameters->Add("@NombreUsuario", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Username;
        cmd->Parameters->Add("@Contraseña", System::Data::SqlDbType::VarChar, 255)->Value = usuario->Password;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        usuarioId = 1;// asigna id de ser necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return usuarioId;
}
List<Usuario^>^ AlquilEasierPersistance::Persistance::QueryAllUsuarios()
{
    //usuariosListDB = (List<Usuario^>^)LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    //if (usuariosListDB == nullptr)
    //    usuariosListDB = gcnew List<Usuario^>();
    //return usuariosListDB;
    usuariosListDB = gcnew List<Usuario^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Usuario";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Usuario^ usuario = gcnew Usuario();
            usuario->Id = Convert::ToInt32(reader["ID"]->ToString());
            usuario->Nombre = reader["Nombre"]->ToString();
            usuario->Apellido = reader["Apellido"]->ToString();
            usuario->Telefono = reader["Telefono"]->ToString();
            usuario->DNI = reader["DNI"]->ToString();
            usuario->Password = reader["Contraseña"]->ToString();
            usuario->Status = reader["TIPO"]->ToString();
            usuario->Username = reader["NombreUsuario"]->ToString();
            usuario->Name = reader["Nombre"]->ToString();
            usuario->LastName = reader["Apellido"]->ToString();
            
            //para agregar foto
            // if (!DBNull::Value->Equals(reader["foto"]))
            // usuario->Foto = (array<Byte>^)reader["foto"];
            // usuarioListDB->Add(usuario);

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return usuariosListDB;
}


//CRUD DE DEPARTAMENTO
int AlquilEasierPersistance::Persistance::AddApartment(Departamento^ depa)
{
    //depaListDB->Add(depa);
    //PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
    //return 1;
    int depaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //1 conexion
        conn = GetConnection();

        //2 setencia
        String^ sqlStr = "dbo.usp_AddApartment";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@NumDepa", System::Data::SqlDbType::Int)->Value = depa->NumDep;
        cmd->Parameters->Add("@Dimensiones", System::Data::SqlDbType::Float)->Value = depa->Dimensiones;
        cmd->Parameters->Add("@Precio", System::Data::SqlDbType::Float)->Value = depa->Precio;
        cmd->Parameters->Add("@Accidentes", System::Data::SqlDbType::VarChar, 200)->Value = depa->Accidentes;
        cmd->Parameters->Add("@Piso", System::Data::SqlDbType::VarChar, 10)->Value = depa->Piso;
        cmd->Parameters->Add("@Habitado", System::Data::SqlDbType::VarChar, 1)->Value = depa->Habitado;
        cmd->Parameters->Add("@Estado", System::Data::SqlDbType::VarChar, 1)->Value = depa->Estado;
        cmd->Parameters->Add("@foto", System::Data::SqlDbType::Image)->Value = depa->Photo;
        if (depa->Photo == nullptr)
            cmd->Parameters["@foto"]->Value = DBNull::Value;
        else
            cmd->Parameters["@foto"]->Value = depa->Photo;

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        depaId = 1;// asigna id de ser necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return depaId;
}
int AlquilEasierPersistance::Persistance::ModifyApartment(Departamento^ depa)
{
    //for (int i = 0; i < depaListDB->Count; i++) {
    //    if (depaListDB[i]->Id == depa->Id) {
    //        depaListDB[i] = depa;
    //        PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
    //        return depa->Id;
    //    }
    //}
    //return 0;
    int depaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_ModifyApartment";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NumDepa", System::Data::SqlDbType::Int)->Value = depa->NumDep;
        cmd->Parameters->Add("@Dimensiones", System::Data::SqlDbType::Float)->Value = depa->Dimensiones;
        cmd->Parameters->Add("@Precio", System::Data::SqlDbType::Float)->Value = depa->Precio;
        cmd->Parameters->Add("@Accidentes", System::Data::SqlDbType::VarChar, 200)->Value = depa->Accidentes;
        cmd->Parameters->Add("@Piso", System::Data::SqlDbType::VarChar, 10)->Value = depa->Piso;
        cmd->Parameters->Add("@Habitado", System::Data::SqlDbType::VarChar, 1)->Value = depa->Habitado;
        cmd->Parameters->Add("@Estado", System::Data::SqlDbType::VarChar, 1)->Value = depa->Estado;
        cmd->Parameters->Add("@foto", System::Data::SqlDbType::Image)->Value = depa->Photo;
        cmd->Prepare();
        cmd->Parameters["@NumDepa"]->Value = depa->NumDep;
        cmd->Parameters["@Dimensiones"]->Value = depa->Dimensiones;
        cmd->Parameters["@Precio"]->Value = depa->Precio;
        cmd->Parameters["@Accidentes"]->Value = depa->Accidentes;
        cmd->Parameters["@Piso"]->Value = depa->Piso;
        cmd->Parameters["@Habitado"]->Value = depa->Habitado;
        cmd->Parameters["@Estado"]->Value = depa->Estado;
        cmd->Parameters["@foto"]->Value = depa->Photo;
        if (depa->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = depa->Photo;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}


int AlquilEasierPersistance::Persistance::DeleteApartment(int depaID)
{
    //for (int i = 0; i < depaListDB->Count; i++) {
    //    if (depaListDB[i]->Id == depaID) {
    //        depaListDB->RemoveAt(i);
    //        PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
    //        return depaID;
    //    }
    // }
    //return 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteApartment";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = depaID;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;


}



List<Departamento^>^ AlquilEasierPersistance::Persistance::ConsultaDepa()
{
    //depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    //if (depaListDB == nullptr)
    //    depaListDB = gcnew List<Departamento^>();
    //return depaListDB;
    depaListDB = gcnew List<Departamento^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Departamento";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Departamento^ departamento = gcnew Departamento();
            departamento->Id = Convert::ToInt32(reader["ID"]->ToString());
            departamento->Dimensiones = Double(reader["Dimensiones"]);
            departamento->Precio = Double(reader["Precio"]);
            departamento->Estado = Boolean(reader["Estado"]);
            departamento->Accidentes = reader["Accidentes"]->ToString();
            departamento->Piso = Convert::ToInt32(reader["Piso"]->ToString());
            departamento->NumDep = Convert::ToInt32(reader["NumDepa"]->ToString());
            //para agregar foto
            if (!DBNull::Value->Equals(reader["foto"]))
                departamento->Photo = (array<Byte>^)reader["foto"];
            depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return depaListDB;
}
Departamento^ AlquilEasierPersistance::Persistance::ConsultaDepaByID(int depaID)
{
    //depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    //for (int i = 0; i < depaListDB->Count; i++) {
    //    if (depaListDB[i]->Id == depaID) {
    //        return depaListDB[i];
    Departamento^ departamento;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Departamento WHEERE ID="+ depaID;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        if (reader->Read()) {
            departamento = gcnew Departamento();
            departamento->Id = Convert::ToInt32(reader["ID"]->ToString());
            departamento->Dimensiones = Double(reader["Dimensiones"]);
            departamento->Precio = Double(reader["Precio"]);
            departamento->Estado = Boolean(reader["Estado"]);
            departamento->Accidentes = reader["Accidentes"]->ToString();
            departamento->Piso = Convert::ToInt32(reader["Piso"]->ToString());
            departamento->NumDep = Convert::ToInt32(reader["NumDepa"]->ToString());
            //para agregar foto
            if (!DBNull::Value->Equals(reader["foto"]))
                departamento->Photo = (array<Byte>^)reader["foto"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return departamento;
        }


//CRUD DE DEUDAS
int AlquilEasierPersistance::Persistance::AddDeuda(Deudas^ deuda)
{
   // deudaListDB->Add(deuda);
   // PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
   // return 1;
    int deudaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //1 conexion
        conn = GetConnection();

        //2 setencia
        String^ sqlStr = "dbo.usp_AddDeuda";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@Agua", System::Data::SqlDbType::Decimal,(10,2))->Value = deuda->Agua;
        cmd->Parameters->Add("@Luz", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Luz;
        cmd->Parameters->Add("@Internet", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Internet;
        cmd->Parameters->Add("@Alquiler", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Alquiler;
        cmd->Parameters->Add("@Fecha", System::Data::SqlDbType::Date)->Value = deuda->Fecha;
        cmd->Parameters->Add("@UsuarioId", System::Data::SqlDbType::VarChar, 1)->Value = deuda->Estado;
        //cmd->Parameters->Add("@foto", System::Data::SqlDbType::Image)->Value = depa->Photo;
        //if (depa->Photo == nullptr)
         //   cmd->Parameters["@foto"]->Value = DBNull::Value;
        //else
         //   cmd->Parameters["@foto"]->Value = depa->Photo;

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        deudaId = 1;// asigna id de ser necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return deudaId;

}

int AlquilEasierPersistance::Persistance::ModifyDeuda(Deudas^ deuda)
{
    //for (int i = 0; i < deudaListDB->Count; i++) {
       //Modificar la busqueda por mes y año
    //    if (deudaListDB[i]->Id == deuda->Id) {
   //         deudaListDB[i] = deuda;
   //         PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
    //        return deuda->Id;
     //   }
    //}
    //return 0;
    int deudaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_ModifyDeuda";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@Agua", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Agua;
        cmd->Parameters->Add("@Luz", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Luz;
        cmd->Parameters->Add("@Internet", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Internet;
        cmd->Parameters->Add("@Alquiler", System::Data::SqlDbType::Decimal, (10, 2))->Value = deuda->Alquiler;
        cmd->Parameters->Add("@Fecha", System::Data::SqlDbType::Date)->Value = deuda->Fecha;
        cmd->Parameters->Add("@UsuarioId", System::Data::SqlDbType::VarChar, 1)->Value = deuda->Estado;
        cmd->Prepare();
        cmd->Parameters["@Agua"]->Value = deuda->Agua;
        cmd->Parameters["@Luz"]->Value = deuda->Luz;
        cmd->Parameters["@Internet"]->Value = deuda->Internet;
        cmd->Parameters["@Alquiler"]->Value = deuda->Alquiler;
        cmd->Parameters["@Fecha"]->Value = deuda->Fecha;
        cmd->Parameters["@UsuarioId"]->Value = deuda->Estado;
        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}


//int AlquilEasierPersistance::Persistance::DeleteApartment(int depaID)
//{
    //for (int i = 0; i < depaListDB->Count; i++) {
     //   if (depaListDB[i]->Id == depaID) {
     //       depaListDB->RemoveAt(i);
     //       PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
     //       return depaID;
     //   }
    //}
    //return 0;
  //  SqlConnection^ conn;
  //  try {
        //Paso 1: Obtener la conexión a la BD
   //     SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
  //      String^ sqlStr = "dbo.usp_DeleteApartment";
  //      SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
   //     cmd->CommandType = System::Data::CommandType::StoredProcedure;
  //      cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
   //     cmd->Prepare();
   //     cmd->Parameters["@Id"]->Value = depaID;

        //Paso 3: Se ejecuta las sentncia SQL
   //     cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
 //   }
  //  catch (Exception^ ex) {
   //     throw ex;
  //  }
  //  finally {
 //       if (conn != nullptr) conn->Close();
 //   }
 //   return 1;





//}

int AlquilEasierPersistance::Persistance::DeleteDeuda(int deudaID)
{
    //for (int i = 0; i < deudaListDB->Count; i++) {
        //Modificar el ID por mes y año
    //    if (deudaListDB[i]->Id == deudaID) {
    //        deudaListDB->RemoveAt(i);
    //        PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
    //        return deudaID;
    //    }
    //}
    //return 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteDeuda";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@Id"]->Value = deudaID;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

List<Deudas^>^ AlquilEasierPersistance::Persistance::ConsultaDeuda()
{
    //BUSCAR POR MES Y AÑO
    //deudaListDB = (List<Deudas^>^)LoadBinaryFile(BIN_DEUDA_FILE_NAME);
    //if (deudaListDB == nullptr)
    //    deudaListDB = gcnew List<Deudas^>();
    //return deudaListDB;
    deudaListDB = gcnew List<Deudas^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Deudas";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Deudas^ deudas = gcnew Deudas();
            deudas->Id = Convert::ToInt32(reader["ID"]->ToString());
            deudas->Agua = Double(reader["Agua"]);
            deudas->Luz = Double(reader["Luz"]);
            deudas->Internet = Double(reader["Internet"]);
            deudas->Alquiler = Double(reader["Alquiler"]);
            deudas->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //me falta para deuda, seguridad, estado

            //para agregar foto
            // if (!DBNull::Value->Equals(reader["foto"]))
            // usuario->Foto = (array<Byte>^)reader["foto"];
            // usuarioListDB->Add(usuario);

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return deudaListDB;



}

Deudas^ AlquilEasierPersistance::Persistance::ConsultaDeudaByID(int deudaID)
{
    //deudaListDB = (List<Deudas^>^)LoadBinaryFile(BIN_DEUDA_FILE_NAME);
    //for (int i = 0; i < deudaListDB->Count; i++) {
    //    if (deudaListDB[i]->Id == deudaID) {
    //        return deudaListDB[i];
    //   }
    //}
    //return nullptr;
    Deudas^ deudas;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Deudas WHERE ID="+ deudaID;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        if (reader->Read()) {
            deudas = gcnew Deudas();
            deudas->Id = Convert::ToInt32(reader["ID"]->ToString());
            deudas->Agua = Double(reader["Agua"]);
            deudas->Luz = Double(reader["Luz"]);
            deudas->Internet = Double(reader["Internet"]);
            deudas->Alquiler = Double(reader["Alquiler"]);
            deudas->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //me falta para deuda, seguridad, estado

            //para agregar foto
            // if (!DBNull::Value->Equals(reader["foto"]))
            // usuario->Foto = (array<Byte>^)reader["foto"];
            // usuarioListDB->Add(usuario);

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return deudas;
}

int AlquilEasierPersistance::Persistance::AddHorario(Personal^ horario)
{
    horariosListDB->Add(horario);
    PersistBinaryFile(BIN_HORARIOS_FILE_NAME, horariosListDB);
    return 1;
}

List<Personal^>^ AlquilEasierPersistance::Persistance::ConsultaHorario()
{
   // horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
   // if (horariosListDB == nullptr)
   //   horariosListDB = gcnew List<Personal^>();
   // return horariosListDB;
    horariosListDB = gcnew List<Personal^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Personal";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Personal^ personal = gcnew Personal();
            personal->Id = Convert::ToInt32(reader["ID"]->ToString());
            personal->HoraEntrada = reader["HorarioEntrada"]->ToString();
            personal->HoraSalida = reader["HorarioSalida"]->ToString();
            personal->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //para agregar foto
            //if (!DBNull::Value->Equals(reader["foto"]))
            //    departamento->Photo = (array<Byte>^)reader["foto"];
            //depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return horariosListDB;
}

Personal^ AlquilEasierPersistance::Persistance::ConsultaHorarioPorFecha(int fecha)
{
    //horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
    //for (int i = 0; i < horariosListDB->Count; i++) {
    //    if (horariosListDB[i]->Fecha == fecha) {
    //        return horariosListDB[i];
    //   }
    //}
    //return nullptr;
    Personal^ personal;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Personal WHERE FECHA="+ fecha;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        if (reader->Read()) {
            personal = gcnew Personal();
            personal->Id = Convert::ToInt32(reader["ID"]->ToString());
            personal->HoraEntrada = reader["HorarioEntrada"]->ToString();
            personal->HoraSalida = reader["HorarioSalida"]->ToString();
            personal->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //para agregar foto
            //if (!DBNull::Value->Equals(reader["foto"]))
            //    departamento->Photo = (array<Byte>^)reader["foto"];
            //depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return personal;
}

// INQUILINO
int AlquilEasierPersistance::Persistance::AddInquilino(Inquilino^ inquilino)
{
    inquilinoListDB->Add(inquilino);
    PersistBinaryFile(BIN_INQUILINO_FILE_NAME, inquilinoListDB);
    return 1;
}

int AlquilEasierPersistance::Persistance::ModifyInquilino(Inquilino^ inquilino)
{
    for (int i = 0; i < inquilinoListDB->Count; i++) {
        if (inquilinoListDB[i]->DepAsignado == inquilino->DepAsignado) {
            inquilinoListDB[i] = inquilino;
            PersistBinaryFile(BIN_INQUILINO_FILE_NAME, inquilinoListDB);
            return inquilino->DepAsignado;
        }
    }
    return 0;
}

int AlquilEasierPersistance::Persistance::DeleteInquilino(int numDep)
{
    for (int i = 0; i < inquilinoListDB->Count; i++) {
        if (inquilinoListDB[i]->DepAsignado == numDep) {
            inquilinoListDB->RemoveAt(i);
            PersistBinaryFile(BIN_INQUILINO_FILE_NAME, inquilinoListDB);
            return numDep;
        }
    }
    return 0;
}

List<Inquilino^>^ AlquilEasierPersistance::Persistance::ConsultaInquilino()
{
    inquilinoListDB = (List<Inquilino^>^)LoadBinaryFile(BIN_INQUILINO_FILE_NAME);
    if (inquilinoListDB == nullptr)
        inquilinoListDB = gcnew List<Inquilino^>();
    return inquilinoListDB;
    //como consulto inquilino es lo mismo de usuario?
}

Inquilino^ AlquilEasierPersistance::Persistance::ConsultaInquilinoByNumDep(int numDep)
{
    inquilinoListDB = (List<Inquilino^>^)LoadBinaryFile(BIN_INQUILINO_FILE_NAME);
    for (int i = 0; i < inquilinoListDB->Count; i++) {
        if (inquilinoListDB[i]->DepAsignado == numDep) {
            return inquilinoListDB[i];
        }
    }
    return nullptr;
}
// FIN INQUILINO


int AlquilEasierPersistance::Persistance::RegistrarAlarma(Alarma^ alarma)
{
    //alarmlistDB->Add(alarma);
    //PersistBinaryFile(BIN_ALARMA_FILE_NAME, alarmlistDB);
    //return 1;
    int alarmaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //1 conexion
        conn = GetConnection();

        //2 setencia
        String^ sqlStr = "dbo.usp_RegistrarAlarma";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@Fecha", System::Data::SqlDbType::Date)->Value = alarma->Fecha;
        cmd->Parameters->Add("@Hora", System::Data::SqlDbType::Time,7)->Value = alarma->Hora;
        cmd->Parameters->Add("@Incendio", System::Data::SqlDbType::Char, 1)->Value = alarma->Incendio;
        cmd->Parameters->Add("@Robo", System::Data::SqlDbType::Char, 1)->Value = alarma->Robo;
        cmd->Parameters->Add("@UsuarioId", System::Data::SqlDbType::Int)->Value = alarma->Inquilino;
        cmd->Parameters->Add("@Cantidad", System::Data::SqlDbType::Float)->Value = alarma->Cantidad;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        alarmaId = 1;// asigna id de ser necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return alarmaId;
}

List<Alarma^>^ AlquilEasierPersistance::Persistance::QuearyAllAlarma()
{
    //alarmlistDB = (List<Alarma^>^)LoadBinaryFile(BIN_ALARMA_FILE_NAME);
    //if (alarmlistDB == nullptr) {
    //    alarmlistDB = gcnew List<Alarma^>();
    //}
    //return alarmlistDB;
    alarmlistDB = gcnew List<Alarma^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Alarma";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Alarma^ alarma = gcnew Alarma();
            alarma->Id = Convert::ToInt32(reader["ID"]->ToString());
            alarma->Fecha = reader["Fecha"]->ToString();
            alarma->Hora = reader["Hora"]->ToString();
            alarma->Incendio = Convert::ToInt32(reader["Incendio"]->ToString());
            alarma->Robo = Convert::ToInt32(reader["Robo"]->ToString());
            alarma->Cantidad = Double(reader["Cantidad"]);
            //FALTA UNIRLO CON INQUILINO


            //para agregar foto
            //if (!DBNull::Value->Equals(reader["foto"]))
            //    departamento->Photo = (array<Byte>^)reader["foto"];
            //depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return alarmlistDB;





}


int AlquilEasierPersistance::Persistance::AddPersonal(Personal^ personal)
{
    personalListDB->Add(personal);
    PersistBinaryFile(BIN_PERSONAL_FILE_NAME, personalListDB);
    return 1;
}

int AlquilEasierPersistance::Persistance::ModifyPersonal(Personal^ personal)
{
    for (int i = 0; i < personalListDB->Count; i++) {
        if (personalListDB[i]->Id == personal->Id) {
            personalListDB[i] = personal;
            PersistBinaryFile(BIN_PERSONAL_FILE_NAME, personalListDB);
            return personal->Id;
        }
    }
    return 0;
}

int AlquilEasierPersistance::Persistance::DeletePersonal(int personalID)
{
    for (int i = 0; i < personalListDB->Count; i++) {
        if (personalListDB[i]->Id == personalID) {
            personalListDB->RemoveAt(i);
            PersistBinaryFile(BIN_PERSONAL_FILE_NAME, personalListDB);
            return personalID;
        }
    }
    return 0;
}

List<Personal^>^ AlquilEasierPersistance::Persistance::ConsultaPersonal()
{
    //personalListDB = (List<Personal^>^)LoadBinaryFile(BIN_PERSONAL_FILE_NAME);
    //if (personalListDB == nullptr)
    //    personalListDB = gcnew List<Personal^>();
    //return personalListDB;
    personalListDB = gcnew List<Personal^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Personal";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        while (reader->Read()) {
            Personal^ personal = gcnew Personal();
            personal->Id = Convert::ToInt32(reader["ID"]->ToString());
            personal->HoraEntrada = reader["HorarioEntrada"]->ToString();
            personal->HoraSalida = reader["HorarioSalida"]->ToString();
            personal->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //para agregar foto
            //if (!DBNull::Value->Equals(reader["foto"]))
            //    departamento->Photo = (array<Byte>^)reader["foto"];
            //depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return personalListDB;






}

Personal^ AlquilEasierPersistance::Persistance::ConsultaPersonalByID(int personalID)
{
    //personalListDB = (List<Personal^>^)LoadBinaryFile(BIN_PERSONAL_FILE_NAME);
    //for (int i = 0; i < personalListDB->Count; i++) {
    //    if (personalListDB[i]->Id == personalID) {
    //        return personalListDB[i];
    //    }
    //}
    //return nullptr;
    Personal^ personal;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //1 CONEXION
        SqlConnection^ conn = GetConnection();
        //2 PREPARAR
        String^ sqlStr = "SELECT * FROM Personal WHERE ID=" + personalID;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();
        //3 ejecutar
        reader = cmd->ExecuteReader();
        //4 resultados
        if (reader->Read()) {
            personal = gcnew Personal();
            personal->Id = Convert::ToInt32(reader["ID"]->ToString());
            personal->HoraEntrada = reader["HorarioEntrada"]->ToString();
            personal->HoraSalida = reader["HorarioSalida"]->ToString();
            personal->Fecha = Convert::ToInt32(reader["Fecha"]->ToString());
            //para agregar foto
            //if (!DBNull::Value->Equals(reader["foto"]))
            //    departamento->Photo = (array<Byte>^)reader["foto"];
            //depaListDB->Add(departamento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //5 cerrar
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return personal;



}