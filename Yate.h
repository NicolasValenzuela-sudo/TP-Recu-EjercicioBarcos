//
// Created by NICOLAS on 23/9/2022.
//

#ifndef TEMPLATECPP_YATE_H
#define TEMPLATECPP_YATE_H
#include "Barco.h"

class Yate : public Barco {

private:

        int potenciaCV;
        int numeroCamarotes;

public:

    Yate(int,int,int,int potenciaCV, int numeroCamarotes);

    ~Yate();

    };

#endif //TEMPLATECPP_YATE_H
