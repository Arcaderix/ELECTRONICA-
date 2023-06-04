#include <iostream>

using namespace std;

double calcular_hfe(double ic, double ib) {
    return ic / ib;
}

int main() {
    cout << "Bienvenido a la calculadora de HFE de transistores." << endl;

    double ic, ib;

    cout << "Ingrese la corriente de colector (IC) en amperios: ";
    cin >> ic;

    cout << "Ingrese la corriente de base (IB) en amperios: ";
    cin >> ib;

    double hfe = calcular_hfe(ic, ib);

    cout << "El valor de HFE (ganancia de corriente de base) es: " << hfe << endl;

    cout << "Gracias por usar la calculadora de HFE de transistores. ¡Hasta luego!" << endl;

    return 0;