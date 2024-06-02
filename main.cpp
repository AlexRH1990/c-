#include <iostream>
#include <algorithm>

#include <iostream>
#include <cstdlib>
#include <ctime>

#include <iostream>
#include <cstdlib>
#include <ctime>

const int FILAS = 5;
const int COLUMNAS = 3;

// Función para imprimir una fila de datos
void imprimirFila(const std::string fila[COLUMNAS]) {
 std::cout << "Fila encontrada: ";
 for (int j = 0; j < COLUMNAS; ++j) {
  std::cout << fila[j] << " ";
 }
 std::cout << std::endl;
}

// Función para obtener la pregunta de una fila
std::string obtenerPregunta(const std::string fila[COLUMNAS]) {
 return fila[1]; // La pregunta está en la columna 1
}

// Función para obtener la respuesta de una fila
std::string obtenerRespuesta(const std::string fila[COLUMNAS]) {
 return fila[2]; // La respuesta está en la columna 2
}

// Función para generar un número aleatorio único
int generarNumeroAleatorioUnico() {
 // Crea un arreglo de enteros vacío de tamaño 5.
 int numerosAleatorios[5];

 // Genera 5 números aleatorios del 1 al 5.
 for (int i = 0; i < 5; ++i) {
  int numeroAleatorio = rand() % 5 + 1;
  numerosAleatorios[i] = numeroAleatorio;
 }

 // Mezcla los números aleatorios.
 for (int i = 0; i < 5; ++i) {
  int j = rand() % 5;
  int temp = numerosAleatorios[i];
  numerosAleatorios[i] = numerosAleatorios[j];
  numerosAleatorios[j] = temp;
 }

 // Retorna un número aleatorio entre 0 y 4.
 return numerosAleatorios[rand() % 5];
}

int main() {
 // Supongamos que tienes un array bidimensional de la siguiente forma:
 std::string datos[FILAS][COLUMNAS] = {
  {"1", "Extremidad superior", "Brazo"},
  {"2", "Órgano de la vista", "Ojos"},
  {"3", "Órgano del gusto", "Lengua"},
  {"4", "Procesador del cuerpo", "Cerebro"},
  {"5", "Extremidad inferior", "Piernas"}
 };

 // Inicializa la semilla del generador de números aleatorios
 srand(time(0));

 // Declaramos la variable númerosAleatorios fuera del ciclo for
 int numerosAleatorios[5];

 // Generamos los números aleatorios
 for (int i = 0; i < 5; ++i) {
  numerosAleatorios[i] = generarNumeroAleatorioUnico();
 }

 // Recorremos el ciclo 5 veces
 for (int i = 0; i < 5; ++i) {
  // Obtenemos el número aleatorio
  int numeroAleatorio = numerosAleatorios[i];

  // Usamos el número aleatorio para seleccionar la fila a imprimir
  int j = numeroAleatorio;

  // Imprimimos la pregunta y la respuesta de la fila
  std::cout << "Pregunta extraída: " << obtenerPregunta(datos[j]) << std::endl;

  // Solicita la respuesta del usuario
  std::string respuestaUsuario;
  std::cout << "Respuesta: ";
  std::cin >> respuestaUsuario;

  // Compara la respuesta del usuario con la respuesta correcta
  if (esRespuestaCorrecta(obtenerRespuesta(datos[j]), respuestaUsuario)) {
    std::cout << "Respuesta correcta!" << std::endl;
  } else {
    std::cout << "Respuesta incorrecta." << std::endl;


      return 0;
    }
