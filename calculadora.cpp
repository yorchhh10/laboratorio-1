#include <iostream>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}


int main() {
    int opcion;
    float a, b;

    do {
        cout << "\n--- CALCULADORA ---\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << suma(a, b) << endl;
                break;
            case 2:
                cout << "Resultado: " << restar(a, b) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicacion(a, b) << endl;
                break;
            case 4:

                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
                break;
        }

    } while (opcion != 5);

    return 0;
}
