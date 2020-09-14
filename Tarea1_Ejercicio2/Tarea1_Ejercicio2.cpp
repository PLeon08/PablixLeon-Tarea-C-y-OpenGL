// Tarea1_PabloYJosue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Integrantes: Pablo León Rodríguez y Josué Quesada Jiménez

//                                      Tabla de variables
//          Variable                    Descripción                 Tipo
//          L                    Tamaño del lado del cuadrado       Entero


#include <iostream>
#include <stddef.h>

int main()
{
    //Se declara y pide el valor de L
    int L;
    std::cout << "Programa que dibuja un cuadrado asteriscos\n";
    std::cout << "Digite el tamaño del lado del cuadrado\n";
    std::cin >> L;

    //Se dibuja el primer renglon con el tamaño del lado
    for (int i = 0; i < L; i += 1) {
        std::cout << "* ";
    }

    //Salto de línea
    std::cout << "\n";

    //Se encicla dos for, el primer para escribir los asteriscos de la izquierda y el segundo
    //for para los asteriscos de la derecha.
    for (int i = 0; i < L - 2; i += 1) {
        std::cout << "*";
        for (int i = 0; i < L - 2; i += 1) {
            std::cout << "   ";
        }
        std::cout << "*";
        std::cout << "\n"; 
    }

    //Se escribe la ultima fila de asteriscos
    for (int i = 0; i < L; i += 1) {
        std::cout << "* ";
    }

    std::cout << "\nCuadrado dibujado";

}