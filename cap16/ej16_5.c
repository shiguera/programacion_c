// Ejercicio 16.5. Array de estructuras.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOMBRE 100

typedef struct {
   char* nombre;
   int edad;
   float nota;
} Alumno;

int main() {
   int n;
   printf("¿Cuántos alumnos deseas registrar? ");
   scanf("%d", &n);
   getchar();  // Limpiar salto de línea pendiente

   Alumno* lista = (Alumno*)malloc(n * sizeof(Alumno));

   if (lista == NULL) {
      printf("Error al reservar memoria para los alumnos.\n");
      return 1;
   }
   for (int i = 0; i < n; i++) {
      char buffer[TAM_NOMBRE];
      printf("Nombre del alumno %d: ", i + 1);
      fgets(buffer, TAM_NOMBRE, stdin);
      size_t len = strlen(buffer);
      if (buffer[len - 1] == '\n') buffer[len - 1] = '\0';
      lista[i].nombre = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
      if (lista[i].nombre == NULL) {
         printf("Error al reservar memoria para el nombre.\n");
         return 1;
      }
      strcpy(lista[i].nombre, buffer);
      printf("Edad del alumno %d: ", i + 1);
      scanf("%d", &lista[i].edad);
      printf("Nota del alumno %d: ", i + 1);
      scanf("%f", &lista[i].nota);
      getchar();  // Consumir salto de línea pendiente
   }

   printf("\nListado de alumnos:\n");
   for (int i = 0; i < n; i++) {
      printf("Nombre: %s, Edad: %d, Nota: %.2f\n", lista[i].nombre,
             lista[i].edad, lista[i].nota);
      free(lista[i].nombre);  // Liberar el nombre individual
   }

   free(lista);  // Liberar el array de estructuras
   return 0;
}