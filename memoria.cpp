#include <iostream> // Utilizaremos cout y cin
#include <conio.h>  // interfaces de usuario y limpieza de pantalla
#include <math.h>   // operaciones b�sicas
using namespace std;

int main()
{

    int x;
    int y;

    cout << "PROGRAMA DIRECCION DE MEMORIA Y DATO" << endl;
    cout << "====================================" << endl;

    cout << "Ingresar un numero:" << endl;
    cin >> x;
    cout << "La direccion de memoria del numero es:" << &x << endl;

    getch();
    return 0;
}
