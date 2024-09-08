// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 9
// Problema planteado: Generar una matriz de n x n con un patrón alternado de 1s y 0s.

#include <iostream>
using namespace std;

// Función para imprimir una matriz de tamaño n x n con patrón alternado
void imprimirMatriz(int n) {
    for (int i = 0; i < n; ++i) {  // Iterar sobre las filas
        for (int j = 0; j < n; ++j) {  // Iterar sobre las columnas
            // Imprimir 1 si la suma de índices es par, 0 si es impar
            cout << (i + j) % 2 << " ";
        }
        cout << endl;  // Nueva línea al final de cada fila
    }
}

int main() {
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;

    imprimirMatriz(n);  // Llama a la función para imprimir la matriz

    return 0;
}
