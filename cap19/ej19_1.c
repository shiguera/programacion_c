// Ejercicio 19.1. Establecer la locale.
#include <stdio.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "");
   printf("Locale actual: %s\n", setlocale(LC_ALL, NULL));
   return 0;
}
