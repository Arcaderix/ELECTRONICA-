#include <iostream>

using namespace std;

double calcular_hfe(double ic, double ib) {
    return ic / ib;
}

double calcular_ic(double hfe, double ib) {
    return hfe * ib;
}

double calcular_ib(double ic, double hfe) {
    return ic / hfe;
}

double calcular_rc(double vcc, double ic) {
    return (vcc - 0.2) / ic;
}

int main() {
    cout << "Bienvenido a la calculadora de valores de transistores." << endl;

    double hfe, ic, ib, rc, vcc;
    char opcion;

    cout << "Ingrese los valores conocidos del transistor:" << endl;

    cout << "HFE (ganancia de corriente de base): ";
    cin >> hfe;

    cout << "Corriente de colector (IC) en amperios: ";
    cin >> ic;

    cout << "Corriente de base (IB) en amperios: ";
    cin >> ib;

    cout << "Resistencia de carga (RC) en ohmios: ";
    cin >> rc;

    cout << "Tensión de alimentación (VCC) en voltios: ";
    cin >> vcc;

    cout << endl;

    cout << "Seleccione el valor que desea calcular:" << endl;
    cout << "a. HFE" << endl;
    cout << "b. Corriente de colector (IC)" << endl;
    cout << "c. Corriente de base (IB)" << endl;
    cout << "d. Resistencia de carga (RC)" << endl;

    cout << "Ingrese su elección (a/b/c/d): ";
    cin >> opcion;

    cout << endl;

    switch (opcion) {
        case 'a':
            hfe = calcular_hfe(ic, ib);
            cout << "El valor de HFE (ganancia de corriente de base) es: " << hfe << endl;
            break;

        case 'b':
            ic = calcular_ic(hfe, ib);
            cout << "El valor de IC (corriente de colector) es: " << ic << " amperios." << endl;
            break;

        case 'c':
            ib = calcular_ib(ic, hfe);
            cout << "El valor de IB (corriente de base) es: " << ib << " amperios." << endl;
            break;

        case 'd':
            rc = calcular_rc(vcc, ic);
            cout << "El valor de RC (resistencia de carga) es: " << rc << " ohmios." << endl;
            break;

        default:
            cout << "Opción no válida. Saliendo del programa." << endl;
            return 0;
    }

    cout << "Gracias por usar la calculadora de valores de transistores. ¡Hasta luego!" << endl;

    return 0;
}
