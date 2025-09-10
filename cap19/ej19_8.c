// Ejercicio 19.8. Conteo de vocales acentuadas.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int es_vocal_acentuada(wchar_t c) {
   const wchar_t vocales[] = L"áéíóúÁÉÍÓÚ";
   for (int i = 0; vocales[i] != L'\0'; i++) {
      if (c == vocales[i]) return 1;
   }
   return 0;
}

int main(void) {
#ifdef _WIN32
   setlocale(LC_ALL, ".UTF8");  // Windows
#else
   setlocale(LC_ALL, "");  // Linux/macOS (asume entorno UTF-8)
   // o setlocale(LC_ALL, "es_ES.UTF-8");
#endif

   const char* entrada = "camión, avión, café, Árbol";
   wchar_t wc;

   mbstate_t estado;
   const char* ptr = entrada;
   int contador = 0;
   memset(&estado, 0, sizeof(estado));
   while (*ptr) {
      size_t n = mbrtowc(&wc, ptr, MB_CUR_MAX, &estado);
      if (n == (size_t)-1) {  // secuencia inválida
         // puedes manejar el error aquí si quieres
         break;
      }
      if (n == (size_t)-2) {  // secuencia incompleta
         // leer más bytes (no aplica en este ejemplo de memoria)
         break;
      }
      if (n == 0) {  // se leyó L'\0'
         break;
      }
      if (es_vocal_acentuada(wc)) contador++;
      ptr += n;
   }

   printf("Vocales acentuadas: %d\n", contador);
   return 0;
}
