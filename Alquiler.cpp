//
// Created by NICOL on 25/9/2022.
//

#include "Alquiler.h"

Alquiler::Alquiler(int identificadorAlquiler, Cliente cliente, Fecha fechaFin, Fecha fechaInicio): cliente(cliente),
                                                                                                fechaInicio(fechaFin),
                                                                                                    fechaFin(fechaInicio) {

    this->identificadorAlquiler = identificadorAlquiler;


}
Alquiler::~Alquiler() {}

void Alquiler::calculoPrecio() {

    int vector[12]={31,59,90,120,151,181,212,243,273,304,334,365}; //vector
                                                                                // de dias acumulados a lo largo del año

    int diasPrimerfecha = vector[(this->fechaInicio.getMes())-2] + this->fechaInicio.getDia(); //dias acumulados de la primera fecha

    int diasSegundaFecha = vector[(this->fechaFin.getMes())-2] + this->fechaFin.getDia(); //dias acumulados de la segunda fecha

    int diferenciaDias = diasSegundaFecha - diasPrimerfecha;

    int precioMetros = (this->cliente.getMetros())*10;


    this->precio = (diferenciaDias * precioMetros) + 1200;
}

void Alquiler::mostrarAlquiler() {

    cout << "Identificador Alquiler: " << this->identificadorAlquiler << endl;
    this->cliente.mostrar();
    cout << "Fecha Inicio Alquiler: " << this->fechaInicio.getDia() << "/" << this->fechaInicio.getMes() << "/" << this->fechaInicio.getAnio() << endl;
    cout << "Fecha Finalizacion Alquiler: " << this->fechaFin.getDia() << "/" << this->fechaFin.getMes() << "/" << this->fechaFin.getAnio() << endl;
    cout << "Precio:$ " << this->precio <<endl;
    cout << "----------------------------------------" << endl;

}
