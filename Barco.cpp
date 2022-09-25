//
// Created by NICOL on 23/9/2022.
//

#include "Barco.h"
#include <iostream>

using namespace std;
Barco::Barco(int matricula, int eslora, int anioFabricacion) {

    this->matricula = matricula;
    this->eslora = eslora;
    this->anioFabricacion = anioFabricacion;
}

Barco::~Barco() {

}

void Barco::mostrarBarco() {
    cout << "Matricula del Barco: " << this->matricula << endl;
    cout << "Eslora: " << this->eslora <<" Metros"<< endl;
    cout << "Anio de fabricacion: " << this->anioFabricacion << endl;

}
