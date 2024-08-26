#include <iostream> // Utilizaremos cout y cin
#include <conio.h>  // interfaces de usuario y limpieza de pantalla
using namespace std;
// Suma de 2 n�meros

int main()
{
    int a;
    int b;
    int suma;

    cout << "Escribir el primer valor:" << endl;
    cin >> a;
    cout << "Escribir el segundo valor:" << endl;
    cin >> b;
    suma = a + b;
    cout << "El resultado de la suma es:" << suma << endl;
}