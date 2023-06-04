#include <iostream>
#include <vector>

using namespace std;

double calcular_resistencia_serie(const vector<double>& resistencias) {
    double resistencia_total = 0.0;

    for (const double& resistencia : resistencias) {
        resistencia_total += resistencia;
    }

    return resistencia_total;
}

double calcular_resistencia_paralelo(const vector<double>& resistencias) {
    double resistencia_total = 0.0;

    for (const double& resistencia : resistencias) {
        resistencia_total += 1.0 / resistencia;
    }

    return 1.0 / resistencia_total;
}

int main() {
    cout << "Bienvenido a la calculadora de resistencias." << endl;

    vector<double> resistencias;
    char opcion;

    do {
        cout << "Ingrese el valor de la resistencia (en ohmios): ";
        double resistencia;
        cin >> resistencia;
        resistencias.push_back(resistencia);

        cout << "¿Desea ingresar otra resistencia? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << endl;

    cout << "Seleccione el tipo de conexión:" << endl;
    cout << "1. Serie" << endl;
    cout << "2. Paralelo" << endl;
    cout << "Ingrese su elección: ";
    int eleccion;
    cin >> eleccion;

    double resistencia_total;

    if (eleccion == 1) {
        resistencia_total = calcular_resistencia_serie(resistencias);
        cout << "La resistencia total en serie es: " << resistencia_total << " ohmios." << endl;
    } else if (eleccion == 2) {
        resistencia_total = calcular_resistencia_paralelo(resistencias);
        cout << "La resistencia total en paralelo es: " << resistencia_total << " ohmios." << endl;
    } else {
        cout << "Opción no válida. Saliendo del programa." << endl;
        return 0;
    }

    cout << "Gracias por usar la calculadora de resistencias. ¡Hasta luego!" << endl;

    return 0;
}
