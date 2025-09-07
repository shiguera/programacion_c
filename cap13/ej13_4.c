// Ejercicio 13.4 Array con huecos: búsqueda.
int buscar(ListaPrestamos lista, char* titulo) {
   int result = -1;
   for (int i = 0; i < MAX_CELDAS; i++) {
      if (lista[i].ocupada == true) {
         if (strcmp(titulo, lista[i].prestamo.libro.titulo) == 0) {
            result = i;
            break;
         }
      }
   }
   return result;
}
