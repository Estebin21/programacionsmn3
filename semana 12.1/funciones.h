#define MAX_DESCRIPCION 100

void ingresarMascota(int *id, char *nombre, char *raza, int *edad, int *tipo, char *dueno);
void ingresarServicio(int *idServicio, char *descripcion, float *costo);
void imprimirFactura(int id, char *nombre, char *raza, int edad, char *dueno, int *idsServicios, char descripciones[][MAX_DESCRIPCION], float *costos, int numServicios);