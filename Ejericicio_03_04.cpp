// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 05/09/2024
// Número de ejercicio: 4
// Problema planteado: Mediante una función obtener la suma de la serie: 1 - 4 + 9 - 16 + 25 - 36 + ... para n términos.

#include <iostream>
using namespace std;

// Función para calcular la suma de la serie para n términos
int sumaSerie(int n) {
    int suma = 0;

    for (int i = 1; i <= n; ++i) {
        int termino = i * i; // Calcula el cuadrado del término
        // Alterna el signo según si i es par o impar
        if (i % 2 == 0) {
            termino = -termino; // Si i es par, el término es negativo
        }
        suma += termino; // Suma el término a la suma total
    }

    return suma; // Retorna la suma total de la serie
}

int main() {
    int n;
    cout << "Introduce el número de términos de la serie: ";
    cin >> n;

    int resultado = sumaSerie(n); // Llama a la función para calcular la suma de la serie

    cout << "La suma de la serie para " << n << " términos es: " << resultado << endl;

    return 0;
}
