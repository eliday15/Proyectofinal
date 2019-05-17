#include "cEstacionamiento.c"

/*
*@fn Funcion para saber el reporte financiero
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/

void reporteFinanciero(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j)
{
	printf("Se ha ganado en total en el dia $50 pesos\n");

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarEstacionamiento(pisos, choferes, autos, i, j);
	return;
}


/*
*@fn Funcion para saber el reporte de productividad
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/

void reporteProductividad(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int*j)
{
	int c;
	int d = 0;
	int f = 0;
	for (c = 0; c < 3; c++)
	{
		if (autos[c].lugar == 1)
		{
			d++;
			printf("Se ha ingresado %d vehiculos\n", d);

		}
		
	}
	
	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarEstacionamiento(pisos, choferes, autos, i, j);
	return;
}