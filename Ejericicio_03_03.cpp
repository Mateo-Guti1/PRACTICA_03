// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10 usando el Teorema Fundamental de la Numeración.

#include <iostream>
#include <cmath> // Para usar la función pow()
#include <string> // Para manejar el número como cadena de caracteres
using namespace std;

// Función para convertir un número en base n a base 10
int convertirABase10(string numero, int base) {
    int resultado = 0; // Variable para almacenar el número en base 10
    int longitud = numero.length(); // Longitud del número

    // Recorrer cada dígito del número en base n
    for (int i = 0; i < longitud; ++i) {
        // Convertir el carácter a un número entero
        int digito = numero[i] - '0'; 
        // Aplicar el Teorema Fundamental de la Numeración
        resultado += digito * pow(base, longitud - i - 1);
    }
    return resultado;
}

int main() {
    string numero;
    int base;

    // Solicitar al usuario el número y la base
    cout << "Introduce el número en base n: ";
    cin >> numero;
    cout << "Introduce la base n: ";
    cin >> base;

    // Convertir el número a base 10
    int resultado = convertirABase10(numero, base);

    // Mostrar el resultado
    cout << "El número " << numero << " en base " << base << " convertido a base 10 es: " << resultado << endl;

    return 0;
}
