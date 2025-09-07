// Ejercicio 11.15. Longitud de cadena sin strlen()
#include <stdio.h>

size_t mi_strlen(const char* s) {
   if (s == NULL) {
      return 0;
   }
   const char* p = s;
   while (*p != '\0') {
      p++;
   }
   return (size_t)(p - s);  // numero de chars hasta '\0'
}

int main(void) {
   const char* t = "Hola";
   printf("Longitud: %zu\n", mi_strlen(t));
   return 0;
}
