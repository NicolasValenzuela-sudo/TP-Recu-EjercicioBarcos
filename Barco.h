//
// Created by NICOLAS on 23/9/2022.
//

#ifndef TEMPLATECPP_BARCO_H
#define TEMPLATECPP_BARCO_H
class Barco {

private:

    int matricula;
    int eslora ;
    int anioFabricacion;

public:

    Barco(int matricula, int eslora, int anioFabricacion);
    ~Barco();
    int getEslora();
    void mostrarBarco();
};
inline int Barco::getEslora() {
    return this->eslora;
}

#endif //TEMPLATECPP_BARCO_H
