// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 10/09/2024
// Número de ejercicio: 6
// Problema planteado: Adivinar un número generado al azar en el rango de 0 a 50 con un máximo de 5 intentos.

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

// Función para generar un número aleatorio entre 0 y 50
int generarNumeroAleatorio() {
    srand(time(0));  // Inicializa el generador de números aleatorios con una semilla basada en el tiempo actual
    return rand() % 51;  // Retorna un número aleatorio entre 0 y 50
}

// Función para realizar un intento de adivinanza
bool realizarIntento(int numeroPensado, int intentoNumero, int &min, int &max) {
    int intento;
    cout << "Intento " << intentoNumero << endl;
    cout << "? ";
    cin >> intento;

    if (intento == numeroPensado) {
        cout << "Felicitaciones… Adivinaste el número" << endl;
        return true;  // Retorna verdadero si se adivinó el número
    } else if (intento < numeroPensado) {
        min = intento;  // Ajusta el límite inferior
        cout << "El numero esta entre " << min << " y " << max << endl;
    } else {
        max = intento;  // Ajusta el límite superior
        cout << "El numero esta entre " << min << " y " << max << endl;
    }
    return false;  // Retorna falso si no se adivinó el número
}

// Función principal para controlar el juego
void jugarAdivinarNumero() {
    int numeroPensado = generarNumeroAleatorio();  // Genera el número que se debe adivinar
    int min = 0, max = 50;  // Rango inicial para el número a adivinar
    int numIntentos = 5;    // Número máximo de intentos

    cout << "Estoy pensando un número entre " << min << " y " << max << endl;

    // Bucle para los intentos del usuario
    for (int i = 1; i <= numIntentos; ++i) {
        if (realizarIntento(numeroPensado, i, min, max)) {
            return;  // Termina el juego si se adivina el número
        }
    }

    // Si se acaban los intentos y no se adivina el número
    cout << "Lo siento, no has adivinado el número. El número era: " << numeroPensado << endl;
}

int main() {
    jugarAdivinarNumero();  // Llama a la función principal para iniciar el juego
    return 0;
}
