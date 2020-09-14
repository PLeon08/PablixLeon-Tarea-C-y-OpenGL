// Tarea1_PabloYJosue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Integrantes: Pablo León Rodríguez y Josué Quesada Jiménez

//                                      Tabla de variables
//          Variable                    Descripción             Tipo
//          A                           Lado A del triángulo    Entero
//          B                           Lado B del triángulo    Entero
//          C                           Lado C del triángulo    Entero
//

#include <iostream>

int main()
{
    //Se piden los valores que corresponden a los lados del triangulo
    int A, B, C;
    std::cout << "Programa que determina si 3 valores forman un triangulo y que tipo de triangulo es\n";

    std::cout << "Digite el primer numero\n";
    std::cin >> A;
    std::cout << "Digite el segundo numero\n";
    std::cin >> B;
    std::cout << "Digite el tercer numero\n";
    std::cin >> C;

    //Se hace la evaluación para saber si forma o no un triángulo
    if (A + B > C && A + C > B && B + C > A)
    {
        std::cout << "Las medidas forman un triangulo\n";

        //Se hace la evaluación para saber que tipo de triángulo es
        if (A == B && B == C)
        {
            std::cout << "El triangulo es equilatero\n";
        }
        else {
            if (A == B || B == C || C == A)
            {
                std::cout << "El triangulo es isoseles\n";
            }
            else {
                std::cout << "El triangulo es escaleno\n";
            }
        }
    }
    else {
        std::cout << "Los datos ingresados no forman un triangulo\n";
    }


}