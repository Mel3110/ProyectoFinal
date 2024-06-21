#pragma once

#ifndef _DEUDAS_H
#define _DEUDAS_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Deudas {
        public:
            property int Id;
            property Double Agua;
            property Double Luz;
            property Double Internet;
            property Double Alquiler;
            property Double Deuda;
            property Double Seguridad;
            property int Fecha;
            property String^ Estado;


            void RegistrarDeuda();
            void ConsultarDeuda();
            void ConsultarEstado();
    };
}

#endif //_DEUDAS_H