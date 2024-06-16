#include <iostream>
using namespace std;

int main() {
    int n, suma, i;
    suma=0;
    i=1;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser mayor que cero." << endl;
    }

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;

    return 0;
}

