#pragma once

#ifndef _DEPARTAMENTO_H
#define _DEPARTAMENTO_H

using namespace System;

namespace AlquilEasierModel {
    [Serializable]
        public ref class Departamento {
        public:
            property int Id;
            property double Dimensiones;
            property double Precio;
            property bool Estado; // REFERIDO AL MANTENIMINETO
            property String^ Accidentes;
            property array<Byte>^ Photo;
            property int Piso;
            property int NumDep;
            property bool Habitado;
    };

}

#endif //_DEPARTAMENTO_H