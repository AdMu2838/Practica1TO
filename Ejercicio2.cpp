#include <iostream>
#include <cstdlib>
using namespace std;

int generarAleatorio(int min, int max)
{
    return min + rand() % (max - min + 1);
}

double calcularPromedio(int edades[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += edades[i];
    }
    return static_cast<double>(suma) / n;
}

int obtenerMayorEdad(int edades[], int n)
{
    int mayor = edades[0];
    for (int i = 1; i < n; i++)
    {
        if (edades[i] > mayor)
        {
            mayor = edades[i];
        }
    }
    return mayor;
}

void contarInstruccion(int grados[], int n, int &primaria, int &secundaria, int &superior)
{
    primaria = secundaria = superior = 0;
    for (int i = 0; i < n; i++)
    {
        if (grados[i] == 1)
            primaria++;
        else if (grados[i] == 2)
            secundaria++;
        else if (grados[i] == 3)
            superior++;
    }
}

int main()
{
    int N;
    cout << "Ingrese la cantidad de personas (N): ";
    cin >> N;

    int edades[N];
    int gradosInstruccion[N];


    for (int i = 0; i < N; i++)
    {
        edades[i] = generarAleatorio(15, 80);
        gradosInstruccion[i] = generarAleatorio(1, 3);
    }


    double promedio = calcularPromedio(edades, N);

    int mayorEdad = obtenerMayorEdad(edades, N);

    int primaria = 0, secundaria = 0, superior = 0;
    contarInstruccion(gradosInstruccion, N, primaria, secundaria, superior);

    cout << "Promedio de edades: " << promedio << endl;
    cout << "Mayor edad: " << mayorEdad << endl;
    cout << "Cantidad de personas con instruccion Primaria: " << primaria << endl;
    cout << "Cantidad de personas con instruccion Secundaria: " << secundaria << endl;
    cout << "Cantidad de personas con instruccion Superior: " << superior << endl;

    return 0;
}
