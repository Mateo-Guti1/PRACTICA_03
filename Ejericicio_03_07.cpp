// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 7
// Problema planteado: Generar secuencias de números desde 1 hasta n, y reducir el límite en cada línea.

#include <iostream>
using namespace std;

// Función para imprimir una secuencia de 1 a limite
void imprimirSecuencia(int limite) {
    for (int i = 1; i <= limite; ++i) {
        cout << i << " ";
    }
    cout << endl;  // Nueva línea al final de cada secuencia
}

int main() {
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;

    // Imprimir secuencias desde n hasta 1
    for (int i = n; i >= 1; --i) {
        imprimirSecuencia(i);  // Llama a la función para imprimir la secuencia
    }

    return 0;
}
