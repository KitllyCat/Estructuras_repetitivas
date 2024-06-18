#include <iostream>

using namespace std;

int main() {
    int n, aprobados, desaprobados, i;
    double sumaNotas, nota, promedio;

    cout << "Ingrese la cantidad de estudiantes (n): " << endl;
    cin >> n;
    
    aprobados = 0;
    desaprobados = 0;
    sumaNotas = 0;
    i = 1;
    
    if (n <= 0) {
        cout << "La cantidad de estudiantes debe ser mayor que cero." << endl;
    } else {
        while (i <= n) {
            cout << "Ingrese la nota del estudiante " << i << ": ";
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

        cout << "La cantidad de estudiantes aprobados es de: " << aprobados << endl;
        cout << "La cantidad de estudiantes desaprobados es de: " << desaprobados << endl;
        cout << "El promedio de notas del salón es: " << promedio << endl;
    }

    return 0;
}

