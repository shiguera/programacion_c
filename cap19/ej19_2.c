// Ejercicio 19.2. Cadena UTF-8 a wchar\_t.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
   setlocale(LC_ALL, "");
   // setlocale(LC_ALL, ".UTF8"); // En Windows

   const char* texto = "¡Buenos días!";
   wchar_t buffer[100];
   mbstowcs(buffer, texto, 100);
   wprintf(L"Texto en wchar_t: %ls\n", buffer);
   return 0;
}
