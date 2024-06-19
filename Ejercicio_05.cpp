#include <iostream>

using namespace std;

int main() {
	
    int n, aprobados, desaprobados, i;
    double sumaNotas, nota, promedio;
	
	aprobados = 0;
    desaprobados = 0;
    sumaNotas = 0;
    i = 1;
	
    cout << "Ingrese la cantidad de estudiantes (n): " << endl;
    cin >> n;
    
    if (n <= 0) {
    cout << "La cantidad de estudiantes debe ser mayor que cero." << endl;
    return 1;
    }

    while (i <= n) {
        cout << "Ingrese la nota del estudiante número " << i << " : ";
        cin >> nota;

        if (nota >= 10) {
            aprobados++;
        } else {
            desaprobados++;
        }

        sumaNotas += nota;
        i++;
    }
    
    promedio = sumaNotas / n;

    cout << "La cantidad de estudiantes aprobados es de: " << aprobados << ", y la cantidad de desaprobados es de: " << desaprobados << endl;
    cout << "El promedio de notas del salón es: " << promedio << endl;

    return 0;
    
}

