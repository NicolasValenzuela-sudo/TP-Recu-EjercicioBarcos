//
// Created by NICOLAS on 23/9/2022.
//

#ifndef TEMPLATECPP_CLIENTE_H
#define TEMPLATECPP_CLIENTE_H
#include "Barco.h"
#include <iostream>

using namespace std;

class Cliente {

private:

    int dni;
    string nombre;
    Barco barco1;

public:

    Cliente(int dni, string nombre,Barco barco1);
    ~Cliente();
    int getMetros();
    void mostrar();
};

inline int Cliente::getMetros() {
    return this->barco1.getEslora();
}

#endif //TEMPLATECPP_CLIENTE_H
