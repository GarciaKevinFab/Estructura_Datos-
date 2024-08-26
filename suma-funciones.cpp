#include <iostream>
#include <conio.h> // interfaces de usuario y limpieza de pantalla
#include <math.h>  // operaciones b�sicas
using namespace std;
// Suma de 2 n�meros
// 1� Prototipo de funci�n
int suma(int a, int b);

int main()
{
    int resultado;
    int x;
    int y;

    cout << "PROGRAMA SUMA CON FUNCIONES CON RETORNO" << endl;
    cout << "=======================================" << endl;

    cout << "Ingresar el primer numero:" << endl;
    cin >> x;
    cout << "Ingresar el segundo numero:" << endl;
    cin >> y;

    resultado = suma(x, y);
    cout << "La suma es:" << resultado << endl;
    getch();
    return 0;
}

int suma(int a, int b)
{
    int suma;
    suma = a + b;
    return suma;
}