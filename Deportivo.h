//
// Created by NICOLAS on 25/9/2022.
//

#ifndef TEMPLATECPP_DEPORTIVO_H
#define TEMPLATECPP_DEPORTIVO_H
#include "Barco.h"

class Deportivo : public Barco {
private:
    int potenciaCV;
public:
    Deportivo(int matricula,int eslora,int anioFabricacion,int potenciaCV);
    ~Deportivo();

};
#endif //TEMPLATECPP_DEPORTIVO_H
