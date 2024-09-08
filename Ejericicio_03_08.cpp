// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 8
// Problema planteado: Generar un patrón de números con simetría.

#include <iostream>
using namespace std;

// Función para imprimir una línea del patrón
void imprimirLinea(int fila) {
    // Imprimir la parte ascendente
    for (int i = 1; i <= fila; ++i) {
        cout << i;
    }
    // Imprimir la parte descendente
    for (int i = fila - 1; i >= 1; --i) {
        cout << i;
    }
    cout << endl;  // Nueva línea al final de cada fila
}

int main() {
    int filas = 8;  // Número de filas en el patrón

    // Generar el patrón completo
    for (int i = 1; i <= filas; ++i) {
        imprimirLinea(i);  // Imprime cada línea del patrón
    }

    return 0;
}
