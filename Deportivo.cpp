//
// Created by NICOL on 25/9/2022.
//

#include "Deportivo.h"

Deportivo::Deportivo(int matricula, int eslora, int anioFabricacion, int potenciaCV) : Barco(matricula, eslora, anioFabricacion) {

    this->potenciaCV = potenciaCV;

}
Deportivo::~Deportivo() {}
