#include <iostream>
using namespace std;

int main() {
    int n, contador, i;
    double suma, numero, promedio;

	contador=0;
	i=0;
	suma=0;
	
    cout << "Ingrese la cantidad de numeros: "<<endl;
    cin >> n;

    while (i < n) {
        cout << "Ingrese el numero " << i + 1 << ": "<<endl;
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
            contador++;
        }
        i++;
    }

    if (contador > 0){
        promedio = suma / contador;
        cout << "El promedio de los numeros no negativos es: " << promedio << endl;
    }else{
        cout << "No se ingresaron numeros no negativos" << endl;
    }

    return 0;
}

