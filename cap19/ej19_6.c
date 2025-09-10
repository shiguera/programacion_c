// Ejercicio 19.6. Conversión con la API de Windows.
#include <locale.h>
#include <stdio.h>
#include <windows.h>

int main(void) {
   setlocale(LC_ALL, ".UTF8");
   const char* utf8 = "¡Hola!";
   wchar_t wide[100];

   int nchars = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wide, 100);

   if (nchars == 0) {
      printf("Error en la conversión UTF-8 a UTF-16.\n");
      return 1;
   }

   wprintf(L"Cadena en UTF-16: %ls\n", wide);

   char resultado[100];
   int nbytes =
       WideCharToMultiByte(CP_UTF8, 0, wide, -1, resultado, 100, NULL, NULL);

   if (nbytes == 0) {
      printf("Error en la conversión UTF-16 a UTF-8.\n");
      return 1;
   }

   printf("Cadena reconvertida: %s\n", resultado);
   return 0;
}