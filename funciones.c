#include "aEstacionamiento.c"


/*
*@fn Funcion con el menu para administrar todos los choferes
*@param arreglo de estructura de choferes y el contador de los choferes
*@var vairiable para elegir opción deseada
*/


void mostrarInstrucciones (char autor[], char instrucciones[])
{
  printf("Aplicacion desarrollada por:\n");
  printf("\t%s\n\n", autor);
  printf("Descripcion del programa: ");
  printf("\t%s\n\n", instrucciones);
  printf("Presione ENTER para continuar...");
  getchar();
  system("clear");
  
  
}



void administrarChoferes(Chofer choferes[3], int *contador)
{
	int opcionChoferes;

	printf("Porfavor selecciona, la opcion deseada\n");
	printf("1. Reporte de choferes\n2. Agregar datos de chofer\n3. Modificar datos de los choferes\n4. Regresar al menu principal\n");
	scanf("%i", &opcionChoferes);

	switch	(opcionChoferes)
	{
		case 1: 
		{
			reporteChoferes(choferes, *contador);
			break;
		}
		case 2:
		{
			agegarDatosChofer(choferes, contador);
			break;
		}
		case 3: 
		{
			modificarDatosChofer(choferes, contador);
			break;
		}
		case 4:
		{
			return;
		}
		default:
		{
			printf("Porfavor selecciona una opcion valida\n");
			administrarChoferes(choferes, contador);
		}
	}
	return;

}

/*
*@fn Funcion con el menu para administrar todos los vehiculos
*@param arreglo de estructura de autos y el contador de los autos
*@var vairiable para elegir opción deseada
*/

void administrarVehiculos(Auto autos[10], int *numerador)
{
	int opcionVehiculos;
	
	
	printf("Porfavor selecciona, la opcion deseada\n");
	printf("1. Reporte de Vehiculos\n2. Agregar Vehiculo\n3. Modificar datos de los vehiculos\n4. Regresar al menu principal\n");
	scanf("%i", &opcionVehiculos);

	switch	(opcionVehiculos)
	{
		case 1: 
		{
			reporteVehiculos(autos, numerador);
			break;
		}
		case 2:
		{
			agregarVehiculos(autos, numerador);
			break;
		}
		case 3: 
		{
			modificarDatosVehiculo(autos, numerador);
			break;
		}
		case 4:
		{
			return;
			break;
		}
		default:
		{
			printf("Porfavor selecciona una opcion valida\n");
			administrarVehiculos(autos, numerador);
		}
	}

	return;
}
/*
*@fn Funcion con el menu para administrar todos los vehiculos
*@param arreglo de estructura de choferes y arreglo de los pisos del estacionamiento
*@var vairiable para elegir opción deseada
*/


void administrarEstacionamiento(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int*j){
	int opcionEstacionamiento;
	
	
	printf("Porfavor selecciona, la opcion deseada\n");
	printf("1. Control de estacionamiento\n2. Reporte financiero\n3. Reporte de productividad\n4. Regresar al menu principal\n");
	scanf("%i", &opcionEstacionamiento);

	switch	(opcionEstacionamiento)
	{
		case 1: 
		{
			controlEstacionamiento(pisos, choferes, autos, i, j);
			break;
		}
		case 2:
		{
			reporteFinanciero(pisos, choferes, autos, i, j);
			break;
		}
		case 3: 
		{
			reporteProductividad(pisos, choferes, autos, i, j);
			break;
		}
		case 4:
		{
			return;
			break;
		}
		default:
		{
			printf("Porfavor selecciona una opcion valida\n");
			administrarEstacionamiento(pisos, choferes, autos, i, j);
		}
	}
	return;

}

/*
*@fn Funcion con el menu del control del estacionamiento
*@param arreglo de los pisos y arreglo para asignar chofer
*@var vairiable para elegir opción deseada
*/


void controlEstacionamiento(int pisos[3][3], Chofer choferes[3], Auto autos[10], int *i, int *j)
{
	int opcionControl;
	printf("Porfavor selecciona, la opcion deseada\n");
	printf("1. Ingreso del vehículo\n2. Salida de vehiculo\n3. Reporte de espacios\n4. Regresar a adminstrar estacionamiento\n");
	scanf("%i", &opcionControl);

	switch	(opcionControl)
	{
		case 1: 
		{
			ingresoVehiculo(pisos, choferes, autos, i, j);
			break;
		}
		case 2:
		{
			salidaVehiculo(pisos, choferes, autos, i, j);
			break;
		}
		case 3: 
		{
			reporteEspacios(pisos, choferes, autos, i, j);
			break;
		}
		case 4:
		{
			administrarEstacionamiento(pisos, choferes, autos,i,j);
			break;
		}
		default:
		{
			printf("Porfavor selecciona una opcion valida\n");
			controlEstacionamiento(pisos, choferes, autos, i, j);
		}
	}
	return;
}