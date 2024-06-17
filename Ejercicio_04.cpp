#include <iostream>
using namespace std;

int main() {
    int n;
    double totalGastos = 0.0, gasto;
    char continuar;

    cout << "Ingrese la cantidad de gastos: " << endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el gasto " << i + 1 << ": " << endl;
        cin >> gasto;
        totalGastos += gasto;
    }

    cout << "¿Desea continuar ingresando más gastos? (S/N): ";
    cin >> continuar;

    while (continuar == 'S' || continuar == 's') {
        cout << "Ingrese el siguiente gasto: ";
        cin >> gasto;
        totalGastos += gasto;

        cout << "¿Desea continuar ingresando más gastos? (S/N): ";
        cin >> continuar;
    }

    cout << "La suma total de los gastos es: " << totalGastos << endl;

    return 0;
}

