// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 05/09/2024
// Número de ejercicio: 1
// Problema planteado: Calcula la suma de los primeros n numeros de la secuencia  
#include <iostream>
using namespace std;

// Función para calcular el n-ésimo término de la serie
int calcularTermino(int n) {
    if (n == 1) return 4;  // Primer término de la serie
    int termino = 4;
    int incremento = 2;  // El primer incremento es 2
    
    // Calcular el término n usando el patrón de la serie
    for (int i = 2; i <= n; ++i) {
        termino += incremento;
        incremento += i - 1;  // Incrementar el incremento para el siguiente término
    }
    return termino;
}

// Función para calcular la suma de n términos de la serie
int sumaSerie(int n) {
    int suma = 0;
    
    // Sumar los primeros n términos de la serie
    for (int i = 1; i <= n; ++i) {
        suma += calcularTermino(i);
    }
    
    return suma;
}

int main() {
    int n;
    cout << "Introduce el número de términos de la serie a sumar: ";
    cin >> n;
    
    int resultado = sumaSerie(n);
    
    cout << "La suma de los primeros " << n << " términos de la serie es: " << resultado << endl;
    
    return 0;
}
