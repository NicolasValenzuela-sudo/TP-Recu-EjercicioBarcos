//
// Created by NICOLAS on 23/9/2022.
//

#ifndef TEMPLATECPP_VELERO_H
#define TEMPLATECPP_VELERO_H
#include "Barco.h"
#include <iostream>

class Velero    : public Barco {

private:

    int numeroMastiles;

public:

    Velero(int,int,int,int numeroMastiles);

    ~Velero();

};
#endif //TEMPLATECPP_VELERO_H
