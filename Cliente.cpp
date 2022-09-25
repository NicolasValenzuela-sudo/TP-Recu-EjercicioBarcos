//
// Created by NICOLAS on 23/9/2022.
//

#include "Cliente.h"

Cliente::Cliente( int dni, string nombre,Barco barco1) : barco1(barco1){

    this->nombre = nombre;
    this->dni = dni;

}

Cliente::~Cliente() {

}

void Cliente::mostrar() {

        cout << "DNI: " << this->dni << endl;
        cout << "Nombre: " << this->nombre << endl;
        this->barco1.mostrarBarco();

}
