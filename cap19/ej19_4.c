// Ejercicio 19.4. Longitud de una cadena multibyte.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int main(void) {
   setlocale(LC_ALL, "");
   // setlocale(LC_ALL, ".UTF8"); // En Windows

   const char* cadena = "¡Buenos días!";
   size_t longitud = 0;
   wchar_t wc;
   mbstate_t estado;
   const char* ptr = cadena;

   memset(&estado, 0, sizeof(estado));
   while (*ptr) {
      size_t n = mbrtowc(&wc, ptr, MB_CUR_MAX, &estado);
      if (n == (size_t)-1 || n == (size_t)-2) {
         printf("Carácter inválido.\n");
         break;
      }
      if (n == 0) break;
      ptr += n;
      longitud++;
   }
   printf("Número de caracteres reales: %zu\n", longitud);
   return 0;
}
