// Ejercicio 14.6. Contador de letras.
// El uso de isalpha() depende del locale.
// En entornos por defecto (``C'') solo reconoce ASCII.
// Si necesitas tratar letras acentuadas como letras, configura el locale
// apropiado. También puedes contemplar el caso de fin de archivo (EOF) para
// terminar el bucle además del punto. Estos temas se tratarán en el Capítulo 19

#include <ctype.h>
#include <stdio.h>

int main() {
   int c, contador = 0;
   while ((c = getchar()) != '.') {
      if (isalpha(c)) {
         contador++;
      }
   }
   printf("Número de letras: %d\n", contador);
   return 0;
}
