#include <iostream>
using namespace std;

int main() {
	
    double numero, contador;
    cout << "Introduce un numero (introduce uno negativo para finalizar): "<<endl;
    cin >> numero;
    contador=1;

    while(numero >= 0){
        cout << "Introduce otro numero (negativo para finalizar): "<<endl;
        cin >> numero;
        contador=contador+1;
    }

    cout << "Has introducido un numero negativo. En total has ingresado "<< contador <<" numeros." <<endl;

    return 0;
    
}

