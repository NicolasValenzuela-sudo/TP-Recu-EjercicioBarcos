#include "Cliente.h"
#include "Barco.h"
#include "Velero.h"
#include "Yate.h"
#include "Deportivo.h"
#include "Fecha.h"
#include "Alquiler.h"
#include <iostream>

int main() {

    Fecha fechaInic(22,2,2022);

    Fecha fechaFin(30,3,2022);

    Fecha fechaInic2(30,8,2022);

    Fecha fechaFin2(30,12,2022);


    Barco   barco1(33441, 12, 1999);

    Velero velero1(1234, 25, 1999, 4);

    Yate yate1(4444, 30, 1999, 4, 2);

    Deportivo deportivo1(9999, 35, 1999, 4);

    Cliente cliente1(37948670, "Pepe", barco1);

    Cliente cliente2(22313445, "Nicolas", velero1);

    Cliente cliente3(31943565, "Juan", yate1);

    //Armo un alquiler

    Alquiler alquiler1(1, cliente1, fechaInic, fechaFin);
    alquiler1.calculoPrecio();
    alquiler1.mostrarAlquiler();
    //Otro alquiler

    Alquiler alquiler2(2, cliente2, fechaInic2, fechaFin2);
    alquiler2.calculoPrecio();
    alquiler2.mostrarAlquiler();

   return 0;
}
