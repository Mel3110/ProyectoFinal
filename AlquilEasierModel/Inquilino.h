/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _INQUILINO_H
#define _INQUILINO_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Inquilino : public Usuario {
        public:

            property int DepAsignado;

            void Registro();
            void ModificarDatos();
            void RegistrarQuejas();
            void SituacionAccidentes();

            Inquilino() {};
            Inquilino(int id, String^ nombre, String^ apellido, String^ telefono,
                String^ correo, String^ dni, int depAsignado) :
                Usuario(id, nombre, apellido, telefono, correo, dni) {
                DepAsignado = depAsignado;
            }
    };
}

#endif //_INQUILINO_H