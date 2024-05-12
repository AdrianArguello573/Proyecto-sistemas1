#include <iostream>
using namespace std;

int main() {
    int numAlumnos;
    cout << "Ingrese el numero de alumnos: ";
    cin >> numAlumnos;

    float promedio = 0.0;

    for (int i = 0; i < numAlumnos; i++) {
        float nota1, nota2, nota3;
        cout << "Ingrese la nota del parcial 1 del alumno " << i + 1 << ": ";
        cin >> nota1;
        cout << "Ingrese la npta 2 del parcia 2 del alumno " << i + 1 << ": ";
        cin >> nota2;
        cout << "Ingrese la nota 3 del parcial 3 del alumno " << i + 1 << ": ";
        cin >> nota3;

        float suma;
        __asm {
            fld nota1
            fadd nota2
            fadd nota3
            fstp suma
        }

        float notaPromedio = suma / 3;

        if (notaPromedio >= 6) {
            cout << "El alumno " << i + 1 << " esta aprobado con una nota de " << notaPromedio << endl;
        }
        else {
            cout << "El alumno " << i + 1 << " esta reprobado con una nota de " << notaPromedio << endl;
        }
    }

    return 0;
}