// CalculatorTutorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Calculator.h"  
#include <string>;

using namespace std;

int main()
{
    const float PI = 3.1416;    //Solo de lectura
    string nombre;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    string salidaNombre = "Please write your name:";
    string salidaCalc = "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b. Numero PI: ";
    

    printf("%s \n", salidaNombre.c_str());
    getline(cin, nombre);
    cout << "Welcome " << nombre << ". Thanks for using the App" << "\n";

    cout << "Calculator Console Aplication" << endl << endl;
    printf("%s %5.4f \n", salidaCalc.c_str(), PI);

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        else {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;   
    }
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
