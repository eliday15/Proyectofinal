
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
*@brief Prototipo de estructuras
*/
typedef struct Auto{
	char numeroPlaca[8];
	char marca[10];
	char modelo[10];
	char color[10];
	int lugar;
}Auto;

typedef struct Chofer{
	int numIdent;
	char nombre[100];
	char apellidoP[100];
	char apellidoM[100];
	int estatus;
}Chofer;

/*
*@brief Prototipo de funciones
*/

void reporteChoferes(Chofer choferes[3], int contador);
void agegarDatosChofer(Chofer choferes[3], int *contador);
void modificarDatosChofer(Chofer choferes[3], int *contador);
void reporteVehiculos(Auto autos[3], int *numerador);
void agregarVehiculos(Auto autos[3], int *numerador);
void modificarDatosVehiculo(Auto autos[3], int *numerador);
void reporteFinanciero(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void reporteProductividad(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void ingresoVehiculo(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void salidaVehiculo(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void reporteEspacios(int pisos[3][3], Chofer choferes[3], Auto autos[10],int *i, int *j);
void administrarChoferes(Chofer choferes[3], int *contador);
void administrarVehiculos(Auto autos[3], int *numerador);
void administrarEstacionamiento(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void controlEstacionamiento(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j);
void anadir(Chofer choferes[3], int *contador);
void leer(Chofer choferes[3], int *contador);
int guardarContadorC(Chofer choferes[3], int *contador);
int guardarContadorV(Auto autos[10],int *numerador);
void mostrarInstrucciones (char [], char []);