// Ejercicio 19.7. Lectura segura de entrada Unicode.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
   // setlocale(LC_ALL, "");
   setlocale(LC_ALL, ".UTF8");  // En Windows

   char entrada[100];
   wchar_t convertida[100];

   wprintf(L"Introduce una cadena UTF-8: ");
   fgets(entrada, sizeof(entrada), stdin);

   if (mbstowcs(convertida, entrada, 100) == (size_t)-1) {
      printf("Error en la conversión.\n");
      return 1;
   }

   wprintf(L"Cadena convertida: %ls\n", convertida);
   return 0;
}
