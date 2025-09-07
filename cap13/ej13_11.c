// Ejercicio 13.11 Array compactado: cerrar().
PoliLinea cerrar(PoliLinea plinea) {
   PoliLinea linresult = plinea;
   anadir_vertice(&linresult, plinea.vertices[plinea.num_vertices - 1]);
   return linresult;
}
