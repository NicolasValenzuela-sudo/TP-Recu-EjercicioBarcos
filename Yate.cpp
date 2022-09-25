//
// Created by NICOL on 23/9/2022.
//

#include "Yate.h"

Yate::Yate(int matricula, int eslora, int anioFabricacion, int potenciaCV, int numeroCamarotes) : Barco(matricula, eslora, anioFabricacion) {

    this->potenciaCV = potenciaCV;
    this->numeroCamarotes = numeroCamarotes;

}

Yate::~Yate() {

}
