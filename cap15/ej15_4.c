// Ejercicio 15.4. Lectura con fscanf()
#include <stdio.h>

#define MAX_MEDIDAS 100

struct Medida {
   char nombre[21];
   int valor_entero;
   double valor_real;
};

int main() {
   struct Medida medidas[MAX_MEDIDAS];
   int n = 0;
   FILE *f = fopen("medidas.txt", "r");
   if (!f) {
      perror("medidas.txt");
      return 1;
   }
   // Lee cada línea con formato: nombre entero real
   while (fscanf(f, "%29s %d %lf", medidas[n].nombre, &medidas[n].valor_entero,
                 &medidas[n].valor_real) == 3) {
      n++;
      if (n >= MAX_MEDIDAS) {
         break;
      }
   }
   fclose(f);

   // Imprime en pantalla
   printf("%-30s %8s %10s\n", "NOMBRE", "ENTERO", "REAL");
   printf("%-30s %8s %10s\n", "------------------------------", "--------",
          "----------");
   for (int i = 0; i < n; ++i) {
      printf("%-30s %8d %10.2f\n", medidas[i].nombre, medidas[i].valor_entero,
             medidas[i].valor_real);
   }
   return 0;
}
