#include <iostream>

using namespace std;

int sumaCubosDigitos(int numero)
{
    int suma = 0;
    while (numero > 0)
    {
        int digito = numero % 10;
        suma += digito * digito * digito;
        numero /= 10;
    }
    return suma;
}

bool esCuboPerfecto(int numero)
{
    return numero == sumaCubosDigitos(numero);
}

int main()
{
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;

    if (esCuboPerfecto(numero))
    {
        cout << numero << " es un cubo perfecto (numero Armstrong)." << endl;
    }
    else
    {
        cout << numero << " no es un cubo perfecto." << endl;
    }

    return 0;
}
