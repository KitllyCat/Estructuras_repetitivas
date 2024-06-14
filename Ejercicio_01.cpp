#include <iostream>
using namespace std;

int main() {
    int n, contador, multiplo;
    contador = 1;
    multiplo = 7;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser mayor que cero." << endl;
    } else {
        cout << "Los primeros " << n << " multiplos de 7 son:" << endl;
        while (contador <= n) {
            cout << multiplo << endl;
            multiplo += 7;
            contador++;
        }
    }

    return 0;
}

