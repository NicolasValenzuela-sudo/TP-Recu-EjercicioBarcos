//
// Created by NICOLAS on 25/9/2022.
//

#ifndef TEMPLATECPP_ALQUILER_H
#define TEMPLATECPP_ALQUILER_H
#include "Fecha.h"
#include "Cliente.h"
#include "Barco.h"

class Alquiler {

private:
    int identificadorAlquiler;
    Cliente cliente;
    Fecha fechaInicio;
    Fecha fechaFin;
    int precio;
public:
    Alquiler(int identificadorAlquiler,Cliente cliente1,Fecha fechaInicio,Fecha fechaFin);
    ~Alquiler();
    int getIdentificadorAlquiler();
    Cliente getCliente();
    Fecha getFechaInicio();
    Fecha getFechaFin();
    int getPrecio();
    void calculoPrecio();
    void setIdentificadorAlquiler(int identificadorAlquiler);
    void setCliente(Cliente cliente1);
    void setFechaInicio(Fecha fechaInicio);
    void setFechaFin(Fecha fechaFin);
    void setPrecio(int precio);
    void mostrarAlquiler();

};

#endif //TEMPLATECPP_ALQUILER_H
