// Ejercicio 13.8 Array compactado: unir.
PoliLinea unir(PoliLinea plinea1, PoliLinea plinea2) {
   PoliLinea linresult = {0};
   for (int i = 0; i < plinea1.num_vertices; i++) {
      anadir_vertice(&linresult, plinea1.vertices[i]);
   }
   for (int i = 0; i < plinea2.num_vertices; i++) {
      anadir_vertice(&linresult, plinea2.vertices[i]);
   }
   return linresult;
}
