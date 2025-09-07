// Ejercicio 10.2. Uso de enum}.
#include <stdio.h>

// Enumeración para representar un estado simple
enum Estado { APAGADO, ENCENDIDO };

int main(void) {
   enum Estado estado = ENCENDIDO;  // Variable de tipo enum
   printf("Estado: %d\n", estado);  // Muestra el valor entero (0 o 1)
   return 0;
}