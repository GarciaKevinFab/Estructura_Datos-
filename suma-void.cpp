#include <iostream> // Utilizaremos cout y cin
#include <conio.h>  // interfaces de usuario y limpieza de pantalla
#include <math.h>   // operaciones b�sicas
using namespace std;
// Suma de 2 n�meros
// 1� Prototipo de funci�n
void suma(int a, int b);

int main()
{

    int x;
    int y;

    cout << "PROGRAMA SUMA CON FUNCIONES SIN RETORNO" << endl;
    cout << "=======================================" << endl;

    cout << "Ingresar el primer numero:" << endl;
    cin >> x;
    cout << "Ingresar el segundo numero:" << endl;
    cin >> y;

    suma(x, y);

    getch();
    return 0;
}

void suma(int a, int b)
{

    int suma = a + b;
    cout << "El resultado es:" << suma << endl;
}