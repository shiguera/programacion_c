// Ejercicio 16.6. Lista enlazada simple.
#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
typedef struct Nodo {
   int valor;
   struct Nodo* siguiente;
} Nodo;

int main() {
   Nodo* cabeza = NULL;
   Nodo* actual = NULL;
   int n;

   printf("Introduce números enteros (0 para terminar):\n");

   while (1) {
      printf("> ");
      scanf("%d", &n);
      if (n == 0) break;

      Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
      if (nuevo == NULL) {
         printf("Error al reservar memoria.\n");
         return 1;
      }

      nuevo->valor = n;
      nuevo->siguiente = NULL;

      if (cabeza == NULL) {
         cabeza = nuevo;
      } else {
         actual->siguiente = nuevo;
      }

      actual = nuevo;
   }

   // Mostrar la lista
   printf("\nContenido de la lista:\n");
   Nodo* temp = cabeza;
   while (temp != NULL) {
      printf("%d -> ", temp->valor);
      temp = temp->siguiente;
   }
   printf("NULL\n");

   // Liberar la lista
   temp = cabeza;
   while (temp != NULL) {
      Nodo* siguiente = temp->siguiente;
      free(temp);
      temp = siguiente;
   }
   return 0;
}
