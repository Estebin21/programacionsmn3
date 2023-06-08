#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
    char nombre[5][50] = {"Andres", "Juan", "Ana", "Luis", "Maria"};
    int cedula[5] = {123654, 987456, 963258, 174258, 654123};
    int telefonos[10][2] = {{1, 123456}, {0, 987654}, {1, 234567}, {4, 2343435}, {0, 646456},
                            {3, 456456}, {2, 342343}, {4, 453453}, {1, 534534}, {2, 535345}};
    char direcciones[10][2][50] = {{"1", "Granados"}, {"0", "El Inca"}, {"1", "Conocoto"}, {"4", "San Rafael"},
                                   {"0", "Cotocollao"}, {"3", "El Recreo"}, {"2", "Sangolqui"}, {"4", "San Juan"},
                                   {"1", "Carapungo"}, {"2", "La Tola"}};

    int cedulaBuscar = ingreseCedula();
    int indice = obtenerPosicionContacto(cedula, cedulaBuscar);
    imprimirContactos(nombre, telefonos, indice);
    imprimirDirecciones(direcciones, indice);

    return 0;
}
