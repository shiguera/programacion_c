// Ejercicio 9.9. Array de estructuras.
#include <stdio.h>
#include <string.h>

typedef struct {
   char nombre[40];
   float nota;
} Alumno;

int main() {
   Alumno clase[5] = {
      {"Ana", 6.0},
      {"Luis", 4.5},
      {"Carlos", 8.2},
      {"Elena", 9.0},
      {"Marta", 3.8}
   };

   printf("Alumnos aprobados:\n");
   for (int i = 0; i < 5; i++) {
      if (clase[i].nota >= 5.0) {
         printf("%s\n", clase[i].nombre);
      }
   }
   return 0;
}