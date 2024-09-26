#include "BilleteraElectronica.h"
#include <iostream>

using namespace std;

int main()
{
    BilleteraElectronica miBilletera;

    miBilletera.recargarSaldo(100.0);
    miBilletera.agregarProducto("Celular");
    miBilletera.agregarProducto("Laptop");

    cout << "Saldo actual: " << miBilletera.obtenerSaldo() << endl;

    miBilletera.comprar();

    cout << "Número de productos comprados: " << miBilletera.obtenerNumeroProductosComprados() << endl;

    return 0;
}
