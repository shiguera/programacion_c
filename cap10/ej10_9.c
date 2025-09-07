// Ejercicio 10.9. Uniones etiquetadas.
#include <stdio.h>

// Enum para el estado del sensor
enum Estado { OK, FALLO };

// Enum para indicar el tipo de dato del sensor
enum Tipo { TEMPERATURA, PRESION, ESTADO };

// Struct que combina tipo y valor
struct Sensor {
   enum Tipo tipo;
   union {
      float temperatura;
      int presion;
      enum Estado estado;

   } valor;
};

int main(void) {
   struct Sensor s;
   s.tipo = TEMPERATURA;
   s.valor.temperatura = 23.5f;

   if (s.tipo == TEMPERATURA)
      printf("Temperatura: %.2f\n", s.valor.temperatura);
   else if (s.tipo == PRESION)
      printf("Presión: %d\n", s.valor.presion);
   else
      printf("Estado: %s\n", s.valor.estado == OK ? "OK" : "FALLO");

   return 0;
}
