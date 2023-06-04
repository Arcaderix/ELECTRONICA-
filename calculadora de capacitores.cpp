#include <iostream>
#include <vector>

using namespace std;

double calcular_capacitancia_serie(const vector<double>& capacitores) {
    double capacitancia_total = 0.0;

    for (const double& capacitancia : capacitores) {
        capacitancia_total += 1.0 / capacitancia;
    }

    return 1.0 / capacitancia_total;
}

double calcular_capacitancia_paralelo(const vector<double>& capacitores) {
    double capacitancia_total = 0.0;

    for (const double& capacitancia : capacitores) {
        capacitancia_total += capacitancia;
    }

    return capacitancia_total;
}

int main() {
    cout << "Bienvenido a la calculadora de capacitores." << endl;

    vector<double> capacitores;
    char opcion;

    do {
        cout << "Ingrese el valor de la capacitancia (en microfaradios): ";
        double capacitancia;
        cin >> capacitancia;
        capacitores.push_back(capacitancia);

        cout << "¿Desea ingresar otro capacitor? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << endl;

    cout << "Seleccione el tipo de conexión:" << endl;
    cout << "1. Serie" << endl;
    cout << "2. Paralelo" << endl;
    cout << "Ingrese su elección: ";
    int eleccion;
    cin >> eleccion;

    double capacitancia_total;

    if (eleccion == 1) {
        capacitancia_total = calcular_capacitancia_serie(capacitores);
        cout << "La capacitancia total en serie es: " << capacitancia_total << " microfaradios." << endl;
    } else if (eleccion == 2) {
        capacitancia_total = calcular_capacitancia_paralelo(capacitores);
        cout << "La capacitancia total en paralelo es: " << capacitancia_total << " microfaradios." << endl;
    } else {
        cout << "Opción no válida. Saliendo del programa." << endl;
        return 0;
    }

    cout << "Gracias por usar la calculadora de capacitores. ¡Hasta luego!" << endl;

    return 0;
}
