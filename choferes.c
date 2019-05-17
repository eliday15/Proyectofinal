#include "manejoArchivos.c"

/*
*@fn Funcion para ver todos los choferes registrados
*@param arreglo de estructura de choferes y el contador de los choferes
*@var vairiable contador
*/


void reporteChoferes(Chofer choferes[3], int contador)
{
	int i;

	for (i = 0; i < contador; ++i)
	{
		printf("Estatus: %i\n", choferes[i].estatus);
		printf("Nombre: %s\n", choferes[i].nombre);
		printf("Apellido Paterno: %s\n", choferes[i].apellidoP);
		printf("Apellido Materno: %s\n", choferes[i].apellidoM);
		printf("Numero de identificacion: %i\n", i + 1);
	}

	

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarChoferes(choferes, &contador);

	return;
}

/*
*@fn Funcion con el menu para agregar choferes
*@param arreglo de estructura de choferes y el contador de los choferes
*/

void agegarDatosChofer(Chofer choferes[3], int *contador)
{
	printf("%d\n", *contador);
	if (*contador < 3)
	{
		printf("Para agregar datos del chofer numero %d\n", *contador +1);

		printf("Introduce el Nombre:\n");
		scanf("%s",choferes[*contador].nombre);
		printf("Apellido Paterno:\n");
		scanf("%s", choferes[*contador].apellidoP);
		printf("Apellido Materno:\n");
		scanf("%s",choferes[*contador].apellidoM);
		printf("Porfavor introduce el status del chofer:\n");
		scanf("%i",&choferes[*contador].estatus);

		printf("Estatus: %i\n", choferes[*contador].estatus);
		printf("Nombre: %s\n", choferes[*contador].nombre);
		printf("Apellido Paterno: %s\n", choferes[*contador].apellidoP);
		printf("Apellido Materno: %s\n", choferes[*contador].apellidoM);
		
		printf("El numero de identificacion del usuario es %i\n", *contador + 1);

		FILE *archivo;

	archivo = fopen("choferes.txt", "a");

		fprintf(archivo,"Estatus: %i\n", choferes[*contador].estatus);
		fprintf(archivo,"Nombre: %s\n", choferes[*contador].nombre);
		fprintf(archivo,"Apellido Paterno: %s\n", choferes[*contador].apellidoP);
		fprintf(archivo,"Apellido Materno: %s\n", choferes[*contador].apellidoM);
		
		fprintf(archivo,"Numero de identificacion: %i\n", *contador + 1);
	
	fclose(archivo);

	(*contador)++;
	}
	else
	{
		printf("Numeros de choferes máximo alcanzado\n");
	}



	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarChoferes(choferes, contador);

	return;

}

/*
*@fn Funcion para modificar los datos de los choferes
*@param arreglo de estructura de choferes y el contador de los choferes
*@var vairiable que gurada los numeros de la placa y contador
*/

void modificarDatosChofer(Chofer choferes[3], int *contador)
{
	int i;
	printf("%d\n", *contador);
	printf("Porfavor selecciona el numero de chofer que se quiere modificar.\n");
	scanf("%d", &i);
	i--;

	if (i <= *contador && i >= 0)
		{
			printf("Introduce el Nombre:\n");
			scanf("%s",choferes[i].nombre);
			printf("Apellido Paterno:\n");
			scanf("%s", choferes[i].apellidoP);
			printf("Apellido Materno:\n");
			scanf("%s",choferes[i].apellidoM);
			printf("Porfavor introduce el status del chofer:\n");
			scanf("%i",&choferes[i].estatus);

			printf("Estatus: %i\n", choferes[i].estatus);
			printf("Nombre: %s\n", choferes[i].nombre);
			printf("Apellido Paterno: %s\n", choferes[i].apellidoP);
			printf("Apellido Materno: %s\n", choferes[i].apellidoM);

			
		}
	else
	{
		printf("Porfavor selecciona un numero de chofer valido\n");
		modificarDatosChofer(choferes, contador);
	}

	printf("Para regresar presione ENTER!!!\n");
	getchar();
	getchar();
	administrarChoferes(choferes, contador);

	return;
}



void leer(Chofer choferes[3], int *contador)
{
	FILE *archivo;

	archivo = fopen("choferes.txt", "r");


	int i;

	for (i = 0; i < *contador; i++)
	{
		fscanf(archivo,"Numero de identificacion: %i\n", &i + 1);
		fscanf(archivo,"Nombre: %s\n", choferes[i].nombre);
		fscanf(archivo,"Apellido Paterno: %s\n", choferes[i].apellidoP);
		fscanf(archivo,"Apellido Materno: %s\n", choferes[i].apellidoM);
		fscanf(archivo,"Estatus: %i\n", &choferes[i].estatus);
	}
	fclose(archivo);
}
