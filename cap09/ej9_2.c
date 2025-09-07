// Ejercicio 9.2. Inicialización campos tras declaración.
#include <stdio.h>
#include <string.h>

struct Empleado {
   int id;
   char nombre[30];
   double sueldo;
};

int main() {
   struct Empleado e;
   e.id = 101;
   strcpy(e.nombre, "Marta Leiro");
   e.sueldo = 2345.75;

   printf("ID: %d\nNombre: %s\nSueldo: %.2f\n", e.id, e.nombre, e.sueldo);
   return 0;
}