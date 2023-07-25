#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta constante guarda la opcion para salir*/
	const int OPCION_SALIR = -1;
	
	/*Esta constante guarda la opcion para convertir de kilometros a metros*/
	const int KILOMETROS_A_METROS = 1;
	
	/*Esta constante guarda la opcion para convertir de metros a kilometros*/
	const int METROS_A_KILOMETROS = 2;
	
	/*Esta constante guarda la opcion para convertir de minutos a segundos*/
	const int MINUTOS_A_SEGUNDOS = 3;
	
	/*Esta constante guarda la opcion para convertir de segundos a minutos*/
	const int SEGUNDOS_A_MINUTOS = 4;
	
	/*Esta constante guarda la opcion para convertir de pesos mexicanos a dolares*/
	const int PESOS_MEXICANOS_A_DOLARES = 5;
	
	/*Esta constante guarda la opcion para convertir de dolares a pesos mexicanos*/
	const int DOLARES_A_PESOS_MEXICANOS = 6;
	
	/*Esta constante guarda la opcion para convertir de celcious a farengeith*/
	const int CELCIOUS_A_FARENGEITH = 7;
	
	/*Esta constante guarda la opcion para convertir de farengeith a celcious*/
	const int FARENGEITH_A_CELCIOUS = 8;
	
	/*Esta variable de tipo entero guarda la opcion seleccionada por el usuario*/
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
		
		switch(opcionSeleccionada){
			/*Esta variable guarda el numero ingresado por el usuario*/
			float numeroIngresado;
			
			case 1:
				printf("\n\nIngresa el numero KILOMETROS que deseas convertir a METROS.\n");
				scanf("%f", &numeroIngresado);
				printf("%f kls aquivalen a %f mts", numeroIngresado, numeroIngresado*1000);
			break;
			
			case 2:
				printf("\n\nIngresa el numero de METROS que deseas convertir a KILOMETROS.\n");
				scanf("%f", &numeroIngresado);
				printf("%f mts aquivalen a %f kls", numeroIngresado, numeroIngresado/1000);
			break;
			
			case 3:
				printf("\n\nIngresa el numero de MINUTOS que deseas convertir a SEGUNDOS.\n");
				scanf("%f", &numeroIngresado);
				printf("%f min aquivalen a %f s", numeroIngresado, numeroIngresado*60);
			break;
			
			case 4:
				printf("\n\nIngresa el numero de SEGUNDOS que deseas convertir a MINUTOS.\n");
				scanf("%f", &numeroIngresado);
				printf("%f s aquivalen a %f mins", numeroIngresado, numeroIngresado/60);
			break;
				
			case 5:
				printf("\n\nIngresa el numero de PESOS MEXICANOS que deseas convertir a DOLARES.\n");
				scanf("%f", &numeroIngresado);
				printf("%f pesos aquivalen a %f dolares", numeroIngresado, numeroIngresado/20);
			break;
			
			case 6:
				printf("\n\nIngresa el numero de DOLARES que deseas convertir a PESOS MEXICANOS.\n");
				scanf("%f", &numeroIngresado);
				printf("%f dolares aquivalen a %f pesos", numeroIngresado, numeroIngresado*20);
			break;
			
			case 7:
				printf("\n\nIngresa el numero de grados CELCIOUS que deseas convertir a grados FARENGEITH.\n");
				scanf("%f", &numeroIngresado);
				float resultado = (numeroIngresado*1.8) + 32;
				printf("%f °C aquivalen a %f °F", numeroIngresado, resultado);
			break;
			
			case 8:
				printf("\n\nIngresa el numero de grados FARENGEITH que deseas convertir a grados CELCIOUS.\n");
				scanf("%f", &numeroIngresado);
				float resultadoDos = (numeroIngresado-32)*5/9;
				printf("%f °F aquivalen a %f °C", numeroIngresado, resultadoDos);
			break;
			
			default:
				printf("Saliendo...");
			break;
			
		}
		
		system("pause");
		system("cls");
		
	}
	
	return 0;
}
