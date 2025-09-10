// Ejercicio 19.10. Interfaz multilingüe.
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(void) {
   // setlocale(LC_ALL, ""); // En Linux/macOS
   setlocale(LC_ALL, ".UTF8");  // En Windows

   const char* loc = setlocale(LC_ALL, NULL);
   // printf("%s\n", loc);

   if (strstr(loc, "es") != NULL) {
      printf("Hola\n");
   } else if (strstr(loc, "Spain") != NULL) {
      printf("Hola\n");
   } else if (strstr(loc, "en") != NULL) {
      printf("Hello\n");
   } else if (strstr(loc, "fr") != NULL) {
      printf("Bonjour\n");
   } else {
      printf("Idioma no soportado\n");
   }

   return 0;
}
