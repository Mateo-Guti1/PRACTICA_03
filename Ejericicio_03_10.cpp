// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 10
// Problema planteado: Calcular el consumo total de pañales basado en la cantidad de niños de diferentes edades en una guardería.

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

// Función para generar la cantidad de niños de 1, 2 y 3 años de manera aleatoria
void generarNiños(int N, int &niños1, int &niños2, int &niños3) {
    // Inicializa el generador de números aleatorios
    srand(time(0));

    // Genera aleatoriamente la cantidad de niños de 1, 2 y 3 años
    // Asegura que la suma no sobrepase N
    niños1 = rand() % (N + 1);  // Puede ser de 0 hasta N
    niños2 = rand() % (N - niños1 + 1);  // Puede ser de 0 hasta N - niños1
    niños3 = N - niños1 - niños2;  // El resto de los niños serán de 3 años
}

// Función para calcular el consumo total de pañales
int calcularConsumoPañales(int niños1, int niños2, int niños3) {
    const int pañales1 = 6;  // Pañales por día para niños de 1 año
    const int pañales2 = 3;  // Pañales por día para niños de 2 años
    const int pañales3 = 2;  // Pañales por día para niños de 3 años

    return (niños1 * pañales1) + (niños2 * pañales2) + (niños3 * pañales3);
}

int main() {
    int N;  // Total de niños
    int niños1, niños2, niños3;  // Cantidad de niños de 1, 2 y 3 años

    cout << "Introduce el número total de niños (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "El número total de niños debe ser mayor que 0." << endl;
        return 1;  // Salir del programa si el número es inválido
    }

    // Generar la cantidad de niños de cada edad
    generarNiños(N, niños1, niños2, niños3);

    // Calcular el consumo total de pañales
    int totalPañales = calcularConsumoPañales(niños1, niños2, niños3);

    // Mostrar resultados
    cout << "Cantidad de niños de 1 año: " << niños1 << endl;
    cout << "Cantidad de niños de 2 años: " << niños2 << endl;
    cout << "Cantidad de niños de 3 años: " << niños3 << endl;
    cout << "Consumo total de pañales por día: " << totalPañales << endl;

    return 0;
}
