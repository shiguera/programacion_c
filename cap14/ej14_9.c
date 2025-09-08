// Ejercicio 14.9. Uso de sprintf().
// sprintf() no limita lo que escribe y puede desbordar el buffer.
// En código real, prefiere snprintf(buffer, sizeof buffer, ...) y,
// si te interesa saber si se produjo truncado, revisa su valor de retorno.
#include <stdio.h>

int main() {
   char buffer[50];
   double precio = 12.5;
   sprintf(buffer, "El precio final es: %.2f euros", precio);
   printf("%s\n", buffer);
   return 0;
}
