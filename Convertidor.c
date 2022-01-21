#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int OPCION_SALIR = -1;
	const int KILOMETROS_A_METROS = 1;
	const int METROS_A_KILOMETROS = 2;
	const int MINUTOS_A_SEGUNDOS = 3;
	const int SEGUNDOS_A_MINUTOS = 4;
	const int PESOS_MEXICANOS_A_DOLARES = 5;
	const int DOLARES_A_PESOS_MEXICANOS = 6;
	const int CELCIOUS_A_FARENGEITH = 7;
	const int FARENGEITH_A_CELCIOUS = 8;
	
	int opcionSeleccionada;
	
	while(opcionSeleccionada != OPCION_SALIR){
		printf("============ CONVERTIDOR DE UNIDADES ============\n");
		printf("Escribe el numero del convertidor que deseas usar o escribe -1 para salir.\n");
		printf("1)Covertir de kilometros a metros.\n");
		printf("2)Convertir de metros a kilometros.\n");
		printf("3)Convertir de minutos a segundos.\n");
		printf("4)Convertir de segundos a minutos.\n");
		printf("5)Convertir de pesos mexicanos a dolares.\n");
		printf("6)Convertir de dolares a pesos mexicanos.\n");
		printf("7)Convertir de grados Celcious a Farengeith.\n");
		printf("8)Convertir de grados Farengeith a Celcious.\n");
		scanf("%i", &opcionSeleccionada);
		
		system("cls");
		
		switch(opcionSeleccionada){
			int numeroIngresado;
			
			case 1:
				printf("\n\nIngresa el numero KILOMETROS que deseas convertir a METROS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i kls aquivalen a %i mts", numeroIngresado, numeroIngresado*1000);
			break;
			
			case 2:
				printf("\n\nIngresa el numero de METROS que deseas convertir a KILOMETROS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i mts aquivalen a %f kls", numeroIngresado, numeroIngresado/1000);
			break;
			
			case 3:
				printf("\n\nIngresa el numero de MINUTOS que deseas convertir a SEGUNDOS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i min aquivalen a %i s", numeroIngresado, numeroIngresado*60);
			break;
			
			case 4:
				printf("\n\nIngresa el numero de SEGUNDOS que deseas convertir a MINUTOS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i s aquivalen a %i mins", numeroIngresado, numeroIngresado/60);
			break;
				
			case 5:
				printf("\n\nIngresa el numero de PESOS MEXICANOS que deseas convertir a DOLARES.\n");
				scanf("%i", &numeroIngresado);
				printf("%i pesos aquivalen a %i dolares", numeroIngresado, numeroIngresado/20);
			break;
			
			case 6:
				printf("\n\nIngresa el numero de DOLARES que deseas convertir a PESOS MEXICANOS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i dolares aquivalen a %i pesos", numeroIngresado, numeroIngresado*20);
			break;
			
			case 7:
				printf("\n\nIngresa el numero de grados CELCIOUS que deseas convertir a grados FARENGEITH.\n");
				scanf("%i", &numeroIngresado);
				printf("%i min aquivalen a %i s", numeroIngresado, numeroIngresado*60);
			break;
			
			case 8:
				printf("\n\nIngresa el numero de grados FARENGEITH que deseas convertir a grados CELCIOUS.\n");
				scanf("%i", &numeroIngresado);
				printf("%i min aquivalen a %i s", numeroIngresado, numeroIngresado*60);
			break;
			
			default:
				printf("Saliendo...");
			break;
			
		}
		
	}
	
	return 0;
}
