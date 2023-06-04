#include <iostream>
#include <cmath>

using namespace std;

struct Fasor {
    double magnitud;
    double angulo;

    Fasor(double mag, double ang) : magnitud(mag), angulo(ang) {}
};

Fasor sumar_fasores(const Fasor& f1, const Fasor& f2) {
    double real = f1.magnitud * cos(f1.angulo) + f2.magnitud * cos(f2.angulo);
    double imaginario = f1.magnitud * sin(f1.angulo) + f2.magnitud * sin(f2.angulo);

    double magnitud = sqrt(real * real + imaginario * imaginario);
    double angulo = atan2(imaginario, real);

    return Fasor(magnitud, angulo);
}

Fasor restar_fasores(const Fasor& f1, const Fasor& f2) {
    double real = f1.magnitud * cos(f1.angulo) - f2.magnitud * cos(f2.angulo);
    double imaginario = f1.magnitud * sin(f1.angulo) - f2.magnitud * sin(f2.angulo);

    double magnitud = sqrt(real * real + imaginario * imaginario);
    double angulo = atan2(imaginario, real);

    return Fasor(magnitud, angulo);
}

Fasor multiplicar_fasores(const Fasor& f1, const Fasor& f2) {
    double magnitud = f1.magnitud * f2.magnitud;
    double angulo = f1.angulo + f2.angulo;

    return Fasor(magnitud, angulo);
}

Fasor dividir_fasores(const Fasor& f1, const Fasor& f2) {
    double magnitud = f1.magnitud / f2.magnitud;
    double angulo = f1.angulo - f2.angulo;

    return Fasor(magnitud, angulo);
}

void mostrar_fasor(const Fasor& fasor) {
    cout << "Magnitud: " << fasor.magnitud << endl;
    cout << "Ángulo: " << fasor.angulo << endl;
}

int main() {
    cout << "Bienvenido a la calculadora de fasores." << endl;

    double mag1, ang1, mag2, ang2;

    cout << "Ingrese el primer fasor:" << endl;
    cout << "Magnitud: ";
    cin >> mag1;
    cout << "Ángulo (en radianes): ";
    cin >> ang1;

    cout << "Ingrese el segundo fasor:" << endl;
    cout << "Magnitud: ";
    cin >> mag2;
    cout << "Ángulo (en radianes): ";
    cin >> ang2;

    Fasor fasor1(mag1, ang1);
    Fasor fasor2(mag2, ang2);

    cout << endl;

    cout << "Seleccione la operación que desea realizar:" << endl;
    cout << "a. Suma" << endl;
    cout << "b. Resta" << endl;
    cout << "c. Multiplicación" << endl;
    cout << "d. División" << endl;

    char opcion;
    cout << "Ingrese su elección (a/b/c/d): ";
    cin >> opcion;

    cout << endl;

    Fasor resultado;

    switch (opcion) {
        case 'a':
            resultado = sumar_fasores(fasor1, fasor2);
            cout << "Resultado de la suma de fasores:" << endl;
            mostrar_fasor(resultado);
            break;

        case 'b':
            resultado = restar_fasores(fasor1, fasor2);
            cout << "Resultado de la resta de fasores:" << endl;
            mostrar_fasor(resultado);
            break;

        case 'c':
            resultado = multiplicar_fasores(fasor1, fasor2);
            cout << "Resultado de la multiplicación de fasores:" << endl;
            mostrar_fasor(resultado);
            break;

        case 'd':
            resultado = dividir_fasores(fasor1, fasor2);
            cout << "Resultado de la división de fasores:" << endl;
            mostrar_fasor(resultado);
            break;

        default:
            cout << "Opción no válida. Saliendo del programa." << endl;
            return 0;
    }

    cout << endl;
    cout << "Gracias por usar la calculadora de fasores. ¡Hasta luego!" << endl;

    return 0;
}
