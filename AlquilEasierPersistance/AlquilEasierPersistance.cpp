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


//CRUD DE USUARIO
int AlquilEasierPersistance::Persistance::AddUsuario(Usuario^ usuario)
{
    usuariosListDB->Add(usuario);
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuariosListDB);
    return 1;
}
List<Usuario^>^ AlquilEasierPersistance::Persistance::QueryAllUsuarios()
{
    usuariosListDB = (List<Usuario^>^)LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    if (usuariosListDB == nullptr)
        usuariosListDB = gcnew List<Usuario^>();
    return usuariosListDB;
}


//CRUD DE DEPARTAMENTO
int AlquilEasierPersistance::Persistance::AddApartment(Departamento^ depa)
{
    depaListDB->Add(depa);
    PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
    return 1;
}
int AlquilEasierPersistance::Persistance::ModifyApartment(Departamento^ depa)
{
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depa->Id) {
            depaListDB[i] = depa;
            PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
            return depa->Id;
        }
    }
    return 0;
}
int AlquilEasierPersistance::Persistance::DeleteApartment(int depaID)
{
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depaID) {
            depaListDB->RemoveAt(i);
            PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
            return depaID;
        }
    }
    return 0;
}



List<Departamento^>^ AlquilEasierPersistance::Persistance::ConsultaDepa()
{
    depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    if (depaListDB == nullptr)
        depaListDB = gcnew List<Departamento^>();
    return depaListDB;
}
Departamento^ AlquilEasierPersistance::Persistance::ConsultaDepaByID(int depaID)
{
    depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depaID) {
            return depaListDB[i];
        }
    }
    return nullptr;
}


//CRUD DE DEUDAS
int AlquilEasierPersistance::Persistance::AddDeuda(Deudas^ deuda)
{
    deudaListDB->Add(deuda);
    PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
    return 1;
}

int AlquilEasierPersistance::Persistance::ModifyDeuda(Deudas^ deuda)
{
    for (int i = 0; i < deudaListDB->Count; i++) {
        //Modificar la busqueda por mes y año
        if (deudaListDB[i]->Id == deuda->Id) {
            deudaListDB[i] = deuda;
            PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
            return deuda->Id;
        }
    }
    return 0;
}

int AlquilEasierPersistance::Persistance::DeleteDeuda(int deudaID)
{
    for (int i = 0; i < deudaListDB->Count; i++) {
        //Modificar el ID por mes y año
        if (deudaListDB[i]->Id == deudaID) {
            deudaListDB->RemoveAt(i);
            PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
            return deudaID;
        }
    }
    return 0;
}

List<Deudas^>^ AlquilEasierPersistance::Persistance::ConsultaDeuda()
{
    //BUSCAR POR MES Y AÑO
    deudaListDB = (List<Deudas^>^)LoadBinaryFile(BIN_DEUDA_FILE_NAME);
    if (deudaListDB == nullptr)
        deudaListDB = gcnew List<Deudas^>();
    return deudaListDB;
}

Deudas^ AlquilEasierPersistance::Persistance::ConsultaDeudaByID(int deudaID)
{
    deudaListDB = (List<Deudas^>^)LoadBinaryFile(BIN_DEUDA_FILE_NAME);
    for (int i = 0; i < deudaListDB->Count; i++) {
        if (deudaListDB[i]->Id == deudaID) {
            return deudaListDB[i];
        }
    }
    return nullptr;
}

int AlquilEasierPersistance::Persistance::AddHorario(Personal^ horario)
{
    horariosListDB->Add(horario);
    PersistBinaryFile(BIN_HORARIOS_FILE_NAME, horariosListDB);
    return 1;
}

List<Personal^>^ AlquilEasierPersistance::Persistance::ConsultaHorario()
{
    horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
    if (horariosListDB == nullptr)
        horariosListDB = gcnew List<Personal^>();
    return horariosListDB;
}

Personal^ AlquilEasierPersistance::Persistance::ConsultaHorarioPorFecha(int fecha)
{
    horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
    for (int i = 0; i < horariosListDB->Count; i++) {
        if (horariosListDB[i]->Fecha == fecha) {
            return horariosListDB[i];
        }
    }
    return nullptr;
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
    alarmlistDB->Add(alarma);
    PersistBinaryFile(BIN_ALARMA_FILE_NAME, alarmlistDB);
    return 1;
}

List<Alarma^>^ AlquilEasierPersistance::Persistance::QuearyAllAlarma()
{
    alarmlistDB = (List<Alarma^>^)LoadBinaryFile(BIN_ALARMA_FILE_NAME);
    if (alarmlistDB == nullptr) {
        alarmlistDB = gcnew List<Alarma^>();
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
    personalListDB = (List<Personal^>^)LoadBinaryFile(BIN_PERSONAL_FILE_NAME);
    if (personalListDB == nullptr)
        personalListDB = gcnew List<Personal^>();
    return personalListDB;
}

Personal^ AlquilEasierPersistance::Persistance::ConsultaPersonalByID(int personalID)
{
    personalListDB = (List<Personal^>^)LoadBinaryFile(BIN_PERSONAL_FILE_NAME);
    for (int i = 0; i < personalListDB->Count; i++) {
        if (personalListDB[i]->Id == personalID) {
            return personalListDB[i];
        }
    }
    return nullptr;
}


