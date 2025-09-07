// Ejercicio 10.3. Uso de union}.
#include <stdio.h>

// Definición de una unión que puede contener un entero o un real
union Numero {
   int entero;
   float real;
};

int main(void) {
   union Numero n;
   n.entero = 10;  // Asignamos un valor entero
   printf("Entero: %d\n", n.entero);
   n.real = 3.14f;  // Ahora almacenamos un valor real
   printf("Real: %.2f\n", n.real);
   return 0;
}