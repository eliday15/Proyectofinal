#include "choferes.c"

/*
*@fn Función para ver todos los vehiculos registrados
*@param arreglo de estructura de autos y el contador de los autos
*@var vairiable que funciona como contador
*/

void reporteVehiculos(Auto autos[3], int *numerador)
{
	
	int i;

	for (i = 0; i < *numerador; ++i)
	{
		printf("Numero de placa: %s\n", autos[i].numeroPlaca);
		printf("marca: %s\n", autos[i].marca);
		printf("Modelo: %s\n", autos[i].modelo);
		printf("Color: %s\n", autos[i].color);
		
	}


	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarVehiculos(autos, numerador);
	return;
}

/*
*@fn Función para agregar vehiculos
*@param arreglo de estructura de autos y el contador de los autos

*/

void agregarVehiculos(Auto autos[3], int *numerador)
{
		printf("%d\n", *numerador);
		printf("Porfavor introduce los datos del coche numero %i\n", *numerador + 1);
		printf("Numero de placa:\n");
		scanf("%s", autos[*numerador].numeroPlaca );
		printf("Marca:\n");
		scanf("%s", autos[*numerador].marca);
		printf("Modelo:\n");	
		scanf("%s", autos[*numerador].modelo);
		printf("Color:\n");
		scanf("%s", autos[*numerador].color);

		printf("Numero de placa: %s\n", autos[*numerador].numeroPlaca);
		printf("marca: %s\n", autos[*numerador].marca);
		printf("Modelo: %s\n", autos[*numerador].modelo);
		printf("Color: %s\n", autos[*numerador].color);


		FILE *archivoA;

		archivoA = fopen("vehiculos.txt", "a");

		fprintf(archivoA, "Numero de placa: %s\n", autos[*numerador].numeroPlaca);
		fprintf(archivoA, "Marca %s\n", autos[*numerador].marca);
		fprintf(archivoA, "Modelo: %s\n", autos[*numerador].modelo);
		fprintf(archivoA, "Color: %s\n", autos[*numerador].color);

		fclose(archivoA);

	(*numerador)++;
	

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarVehiculos(autos, numerador);
	return;
}

/*
*@fn Función para modificar todos los vehiculos
*@param arreglo de estructura de autos y el contador de los autos
*@var vairiable que almacena los datos de la placa y variable contador
*/

void modificarDatosVehiculo(Auto autos[3], int *contadorA)
{
	char placa[8];
	int i;
	printf("Porfavor introduce el numero de placa para modificar el vehiculo\n");
	scanf("%s", placa);

	for ( i = 0; i < *contadorA; i++)
	{
		if (strcmp(placa, autos[i].numeroPlaca) == 0)
		{
			printf("Porfavor introduce los datos del coche numero %i\n", *contadorA + 1);
			printf("Numero de placa:\n");
			scanf("%s", autos[i].numeroPlaca );
			printf("marca:\n");
			scanf("%s", autos[i].marca);
			printf("Modelo:\n");	
			scanf("%s", autos[i].modelo);
			printf("Color:\n");
			scanf("%s", autos[i].color);	
		}
	}
	




	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarVehiculos(autos, contadorA);
	return;
}