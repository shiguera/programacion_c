// Ejercicio 13.6 Array con huecos: listados.
void listar(ListaPrestamos lista) {
   for (int i = 0; i < MAX_CELDAS; i++) {
      if (lista[i].ocupada == true) {
         printf("Título : %s\n", lista[i].prestamo.libro.titulo);
         printf("Autor  : %s\n", lista[i].prestamo.libro.autor);
         printf("Tomador: %s\n", lista[i].prestamo.tomador);
         printf("Fecha  : %s\n", lista[i].prestamo.fecha);
         printf("\n");
      }
   }
}
