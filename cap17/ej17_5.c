// Ejercicio 17.5 Fecha/hora actuales con formato (<time.h>)
#include <stdio.h>
#include <time.h>

int main(void) {
   time_t ahora = time(NULL);
   struct tm *info = localtime(&ahora);
   char buf[64];
   if (!info) return 1;
   if (strftime(buf, sizeof buf, "%d/%m/%Y %H:%M:%S", info) > 0) {
      printf("Ahora (local): %s\n", buf);
   } else {
      printf("No se pudo formatear la fecha.\n");
   }
   return 0;
}
