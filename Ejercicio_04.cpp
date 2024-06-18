#include <iostream>
using namespace std;

int main() {
    int n, contador;
    double totalGastos, gasto;
    char continuar;

    totalGastos = 0;
	contador = 0;
	
    cout << "Ingrese la cantidad de gastos: " << endl;
    cin >> n;

    do {
        contador++;
        cout << "Ingrese el gasto " << contador << " : " << endl;
        cin >> gasto;
        
        totalGastos += gasto;

        cout << "¿Desea continuar ingresando más gastos? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "La suma total de los gastos es: " << totalGastos << endl;

    return 0;
}
