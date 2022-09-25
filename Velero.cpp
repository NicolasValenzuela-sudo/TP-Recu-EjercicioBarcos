//
// Created by NICOLAS on 23/9/2022.
//

#include "Velero.h"

Velero::Velero(int matricula, int eslora, int anioFabricacion, int numeroMastiles) : Barco(matricula, eslora, anioFabricacion) {

    this->numeroMastiles = numeroMastiles;

}

Velero::~Velero() {

}
