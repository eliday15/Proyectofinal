/*
 *@brief Simulador de Vallet Parking
 *@details Este programa simula un aparcamiento de valet implementando todo lo que se ha aprendido durante el curso de Programacion 1
 *@file main.c
 *
 *@author Programador(es):
 *  Gabriel Pineda Guzmán y Elias Dayan Cohen
 *@date Fecha de creación:
 *   8 de mayo, 2019
 *
 *@author Último en modificar:
 *   Gabriel Pineda Guzmán y Elias Dayan Cohen
 *@date Ultima modificacion
 *   8 de mayo, 2019
 *
 */


#include "funciones.c"



/*
 *@brief Funcion principal de todo el programa
 *@return Regresa un valor 0 si el programa se ejecuto correctamente
 *@var contadores, estructuras que se van a usar en el programa y arreglo para el estacionamiento
 */

int main()
{

	int j = 0;
	int i = 0;
	int opcion;
	int pisos[3][3];
	Chofer choferes[3];
	Auto autos[10];
	int contador = 0;
	int numerador = 0;

	mostrarInstrucciones("Elias Dayan Cohen y Gabriel Pineda Gúzman", "Programa que simula el funcionamiento de una base de datos de valet parking");
	do
	{

		printf("\n");
		printf("Porfavor selecciona, la opcion deseada\n");
		printf("1. Administrar choferes\n2. Administrar vehiculos\n3. Administar estacionamiento\n4. Salir\n");
		scanf("%i", &opcion);
		switch	(opcion)
		{
			case 1:
			{
				administrarChoferes(choferes, &contador);
				break;
			}
			case 2:
			{
				administrarVehiculos(autos, &numerador);
				break;
			}
			case 3:
			{
				administrarEstacionamiento(pisos, choferes, autos, &j, &i);
				break;
			}
			case 4:
			{
				system("exit");
				break;
			}
			default:
			{
				printf("Porfavor selecciona una opcion valida\n");
			}
		}

	} while (opcion != 4);

	return 0;
}
