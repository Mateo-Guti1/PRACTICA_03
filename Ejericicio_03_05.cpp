// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 5
// Problema planteado: Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de sellos.

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

// Función para simular el lanzamiento de una moneda y calcular porcentajes de caras y sellos
void simularLanzamientosMoneda(int n) {
    int caras = 0;   // Contador de caras
    int sellos = 0;  // Contador de sellos

    // Inicializar el generador de números aleatorios con una semilla basada en el tiempo
    srand(time(0));

    // Realizar n lanzamientos de la moneda
    for (int i = 0; i < n; ++i) {
        int resultado = rand() % 2;  // Generar un número aleatorio: 0 para cara, 1 para sello
        
        if (resultado == 0) {
            ++caras;  // Incrementar el contador de caras
        } else {
            ++sellos;  // Incrementar el contador de sellos
        }
    }

    // Calcular los porcentajes de caras y sellos
    double porcentajeCaras = (static_cast<double>(caras) / n) * 100;
    double porcentajeSellos = (static_cast<double>(sellos) / n) * 100;

    // Mostrar los resultados
    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de sellos: " << porcentajeSellos << "%" << endl;
}

int main() {
    int n;
    cout << "Introduce el número de lanzamientos: ";
    cin >> n;

    simularLanzamientosMoneda(n);  // Llamada a la función de simulación

    return 0;
}
