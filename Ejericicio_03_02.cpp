// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 2
// Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de repetición de las caras pares.

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()
using namespace std;

// Función para simular lanzamientos de un dado y contar la frecuencia de caras pares
void simularLanzamientos(int n) {
    int frecuenciaPar = 0;  // Contador de caras pares: 2, 4, 6

    // Inicializar el generador de números aleatorios con una semilla basada en el tiempo
    srand(time(0));

    // Realizar n lanzamientos del dado
    for (int i = 0; i < n; ++i) {
        int lanzamiento = rand() % 6 + 1;  // Generar un número aleatorio entre 1 y 6
        cout << "Lanzamiento " << (i + 1) << ": " << lanzamiento << endl;

        // Comprobar si el número es par
        if (lanzamiento % 2 == 0) {
            ++frecuenciaPar;  // Incrementar el contador de pares
        }
    }

    // Mostrar la frecuencia de las caras pares
    cout << "Frecuencia de caras pares (2, 4, 6): " << frecuenciaPar << endl;
}

int main() {
    int n;
    cout << "Introduce el número de lanzamientos: ";
    cin >> n;

    simularLanzamientos(n);  // Llamada a la función de simulación

    return 0;
}
