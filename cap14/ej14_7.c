// Ejercicio 14.7. Conversión a mayúsculas.
// Para portabilidad total, al llamar a \textit{toupper()}
// conviene convertir a unsigned char:
//    toupper((unsigned char)palabra[i])
// Esto evita comportamientos indefinidos cuando char es con signo 
// y el valor es negativo (caracteres no ASCII).

#include <ctype.h>
#include <stdio.h>

int main() {
   char palabra[100];
   scanf("%s", palabra);
   for (int i = 0; palabra[i] != '\0'; i++) {
      putchar(toupper(palabra[i]));
   }

   putchar('\n');
   return 0;
}
