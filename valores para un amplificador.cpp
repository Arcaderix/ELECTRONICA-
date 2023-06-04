#include <iostream>

using namespace std;

double calcular_ganancia_voltaje(double rf, double rin) {
    return -rf / rin;
}

double calcular_ganancia_corriente(double rf, double rin) {
    return -rf / (rf + rin);
}

double calcular_producto_ganancias(double av, double ai) {
    return av * ai;
}

int main() {
    cout << "Bienvenido a la calculadora de amplificadores operacionales." << endl;

    double rf, rin;
    char opcion;

    cout << "Ingrese los valores conocidos del amplificador operacional:" << endl;

    cout << "Valor de la resistencia de retroalimentación (Rf) en ohmios: ";
    cin >> rf;

    cout << "Valor de la resistencia de entrada (Rin) en ohmios: ";
    cin >> rin;

    cout << endl;

    cout << "Seleccione el valor que desea calcular:" << endl;
    cout << "a. Ganancia de voltaje (Av)" << endl;
    cout << "b. Ganancia de corriente (Ai)" << endl;
    cout << "c. Producto de ganancia de voltaje por ganancia de corriente (Av * Ai)" << endl;

    cout << "Ingrese su elección (a/b/c): ";
    cin >> opcion;

    cout << endl;

    double av, ai, producto_ganancias;

    switch (opcion) {
        case 'a':
            av = calcular_ganancia_voltaje(rf, rin);
            cout << "El valor de la ganancia de voltaje (Av) es: " << av << endl;
            break;

        case 'b':
            ai = calcular_ganancia_corriente(rf, rin);
            cout << "El valor de la ganancia de corriente (Ai) es: " << ai << endl;
            break;

        case 'c':
            av = calcular_ganancia_voltaje(rf, rin);
            ai = calcular_ganancia_corriente(rf, rin);
            producto_ganancias = calcular_producto_ganancias(av, ai);
            cout << "El valor del producto de ganancia de voltaje por ganancia de corriente (Av * Ai) es: " << producto_ganancias << endl;
            break;

        default:
            cout << "Opción no válida. Saliendo del programa." << endl;
            return 0;
    }

    cout << "Gracias por usar la calculadora de amplificadores operacionales. ¡Hasta luego!" << endl;

    return 0;
}