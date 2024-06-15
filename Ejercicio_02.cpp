#include <iostream>
using namespace std;

int main() {
    double numero;
    cout << "Introduce un numero (introduce uno negativo para finalizar): "<<endl;
    cin >> numero;

    while (numero >= 0) {
        cout << "Introduce otro numero (negativo para finalizar): "<<endl;
        cin >> numero;
    }

    cout << "Has introducido un numero negativo. Fin del programa" << endl;

    return 0;
}

