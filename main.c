#include <stdio.h>
#include <stdlib.h>

int main() {
	  int opcion;

printf("\tSistema de Nomina\n\n");
	printf("1. Recibos\n");
	printf("2. Documentos personalizados\n");
	printf("3. Tablas\n");
	printf("4. Operaciones basicas\n");
	printf("5. Impuestos\n");
	printf("6. Hoja de calculo\n");
	printf("7. Graficas\n");
	printf("8. Movimientos afiliatorios al IMSS\n");
	printf("9. Impresion\n");
	printf("10. Salir\n");

    printf("Introduce una opcion del 1 al 10: ");
	scanf("%d", & opcion);
	
	switch(opcion){
		case 1:
			printf("Generacion de recibos.\n");
			break;
		case 2:
			printf("Personaliza tu documento.\n");
			break;
		case 3:
			printf("Genera una tabla.\n");
			break;
		case 4:
			printf("Realiza las operaciones basicas.\n");
			break;
		case 5:
			printf("Deduccion de impuestos.\n");
			break;
		case 6:
			printf("Genera una hoja de calculo.\n");
			break;
		case 7:
			printf("Genera graficas.\n");
			break;
		case 8:
			printf("Movimientos afiliatorios al IMSS.\n");
			break;
		case 9:
			printf("Imprime tu documento.\n");
			break;
		case 10:
			printf("Salir.\n");
			break;
	}

    return 0;
}
