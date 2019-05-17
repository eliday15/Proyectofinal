#include "vehiculos.c"

/*
*@fn Funcion para ingresar vehiculos al estacionamiento
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/
void ingresoVehiculo(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j)
{
	int horas, minutos;
	char placa[8];
	if (*j > 3)
	{
		*i = *i +1;
	}
	if (*i > 3)
	{
		printf("Perdone, pero el estacionamiento esta lleno\n");
		return;
	}

	int c;
	printf("¿Porfavor ingresa el numero de placa para ingresar el vehiculo\n");
	scanf("%s",placa);

	for (c = 0; c < 10; c++)
	{


		if (strcmp(placa, autos[c].numeroPlaca) == 0)
		{
			if (autos[c].lugar == 1)
				{
					printf("Error!!, el auto ya fue ingresado\n");
					return;
				}

			autos[c].lugar = 1;
			pisos[*i][*j] = 1;
			printf("Porfavor ingresa la hora de entrada en el formato hh:mm\n");
			scanf("%d:%d", &horas, &minutos);
			printf("Gracias, su vechulo a sido ingresado\n");
		}	
	}

	*j = *j + 1;
	printf("%d\n",*j);

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	controlEstacionamiento(pisos, choferes, autos, i, j);
	return;

}

/*
*@fn Funcion para darle salida un coche que estaba en el estacionamiento
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/

void salidaVehiculo(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j)
{
	int horas, minutos;
	if (*i > 0 && *j < 0)
	{
		*i = *i -1;
		*j = *j + 3;
	}
	*j = *j -1;
	char placa[8];
	int c;
	printf("¿Porfavor ingresa el numero de placa para dar salida al vehiculo\n");
	scanf("%s",placa);

	for (c = 0; c < 10; c++)
	{


		if (strcmp(placa, autos[c].numeroPlaca) == 0)
		{
			if (autos[c].lugar == 0)
				{
					printf("Error!!, el auto ya salio\n");
					return;
				}

			autos[c].lugar = 0;
			pisos[*i][*j] = 0;
			printf("Porfavor ingresa la hora de salida en el formato hh:mm\n");
			scanf("%d:%d", &horas, &minutos);
			printf("Muchas gracias su auto salio exitosamente\n\n");
			*j = *j -1;
		}	
	}
	*j = *j + 1;
	*j = *j - 1;

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	controlEstacionamiento(pisos, choferes, autos, i, j);
	return;
}

/*
*@fn Funcion para saber que coches hay en el estacionamiento
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/

void reporteEspacios(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j)
{
	int a = 0;
	int b = 0;


		for ( a = 0; a < 3; a++)
		{

			for (b = 0; b < 3; b++)
				{
					if (pisos[a][b]==1)
					{
						printf("El espacio %i en el piso %i esta ocupado \n",b + 1, a + 1);
					}
					else if (pisos[a][b] == 0)
					{
						printf("El espacio %i en el piso %i esta desocupado\n",b + 1, a + 1);	
					}
					else
					{
						printf("El espacio %i en el piso %i esta desocupado\n",b + 1, a + 1);
					}

				}
		}
	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	controlEstacionamiento(pisos, choferes, autos, i, j);
	return;
}