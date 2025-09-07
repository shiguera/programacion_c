// Ejercicio 13.9 Array compactado: Copy on write.
PoliLinea simplificar_cow(PoliLinea* plinea, int index) {
   PoliLinea linresult = {0};
   for (int i = 0; i < index; i++) {
      anadir_vertice(&linresult, plinea->vertices[i]);
   }
   if ((index + 1) < plinea->num_vertices) {
      for (int i = index + 1; i < plinea->num_vertices; i++) {
         anadir_vertice(&linresult, plinea->vertices[i]);
      }
   }
   return linresult;
}
