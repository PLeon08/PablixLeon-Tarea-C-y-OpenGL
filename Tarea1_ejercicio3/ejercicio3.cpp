#include <iostream>
#include <stdlib.h>
#define FILA 7
#define COLU 7

// Tarea de Pablo y Josue 
using namespace std;

int main(int argc, char* argv[]) {

	int matriz[FILA][COLU] = { 0 };
	int* matriz2[FILA][COLU] = { NULL };      
	int fila = 0, colu = 0;
	int i = 0, j = 0, x = 0, y = 0;

	

	
	cout << "Introduzca la dimension: ";   
	cin >> fila;                           //Aca se definira la dimension que tendra el cuadro.
	                                      

	colu = fila;
	int c = 1;
	

	for (i = 0; i < fila; i++) {
		for (j = 0; j < colu; j++) {       //Aca se colocaran los numeros de fila en fila   1 2 3   
			matriz[i][j] = c;              //en orden ascendente                            4 5 6   ---> en 3x3
			c += 1;                        //                                               7 8 9     
		}
	}

	x = 0;
	y = 0;

	for (j = 0; j < fila; j++) {
		for (i = fila - 1; i >= 0; i--) {    //                x y                                     i j
			matriz2[x][y] = &matriz[i][j];   //se posiciona en 0,0 y le otorga el valor de la posicion 0,3  ---> en 3x3
			y++;

		}
		x++;
		y = 0;
	}

	for (i = 0; i < fila; i++) {
		for (j = 0; j < colu; j++) {              //Recorrera el for para ir imprimiendo posicion por posicion desde el 1 en forma ascendente
			printf("%d ", matriz[i][j]);          //Bajara una fila y seguira imprimiendo hasta imprimir todo segun la dimension
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < fila; i++) {
		for (j = 0; j < colu; j++) {              //Este imprime la matriz girada hacia la derecha.
			printf("%d ", *matriz2[i][j]);
		}
		printf("\n");
	}

	return 0;
}