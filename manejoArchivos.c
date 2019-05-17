#include "prototipos.h"


/*
*@fn Función para leer los datos del archivo de choferes
*@param arreglo de estructura de choferes y el contador de los choferes
*@var contador
*/
int guardarContadorC(Chofer choferes[3], int *contador)
{

	FILE *archivo;

	archivo=fopen("choferes.txt", "r");
	fseek(archivo, 0, SEEK_END);
	if (ftell(archivo) == 0)
	{
	*contador = 0;
	return *contador;
	}
	fseek(archivo, 0, SEEK_SET);
	do{
		
	    fscanf(archivo,"Estatus: %d\n", &choferes[*contador].estatus);
		fscanf(archivo,"Nombre: %s\n", choferes[*contador].nombre);
		fscanf(archivo,"Apellido Paterno: %s\n", choferes[*contador].apellidoP);
		fscanf(archivo,"Apellido Materno: %s\n", choferes[*contador].apellidoM);
		fscanf(archivo,"Numero de identificacion: %d\n", contador + 1);
		(*contador)++;
}while(!feof(archivo));
fclose(archivo);
printf("%d\n",*contador);
return *contador;
}
/*
*@fn Función para leer los datos del archivo de autos
*@param arreglo de estructura de autos y el contador de los autos
*@var contador
*/

int guardarContadorV(Auto autos[10],int *numerador)
{
	return *numerador;
	FILE *archivoA;

	archivoA = fopen("vehiculos.txt", "r");
	fseek(archivoA, 0, SEEK_END);
	if (ftell(archivoA) == 0)
	{
	*numerador = 0;
	return *numerador;
	}
	fseek(archivoA, 0, SEEK_SET);
	do
	{
		fscanf(archivoA, "Numero de placa: %s\n", autos[*numerador].numeroPlaca);
		fscanf(archivoA, "Marca: %s\n", autos[*numerador].marca);
		fscanf(archivoA, "Modelo: %s\n",autos[*numerador].modelo);
		fscanf(archivoA, "Color: %s\n",autos[*numerador].color);
		(*numerador)++;
	} while (!feof(archivoA));
	fclose(archivoA);
	printf("%d\n", *numerador);
return *numerador;
}


