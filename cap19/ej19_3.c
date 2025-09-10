// Ejercicio 19.3. Cadena wchar\_t a multibyte.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
   setlocale(LC_ALL, "");
   // setlocale(LC_ALL, ".UTF8"); // En Windows

   wchar_t wide[] = L"¡Buenos días!";
   char buffer[100];
   wcstombs(buffer, wide, 100);
   printf("Texto reconvertido: %s\n", buffer);
   return 0;
}
