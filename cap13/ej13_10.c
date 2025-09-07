// Ejercicio 13.10 Array compactado: comprobar si cerrada.
bool es_cerrada(PoliLinea plinea) {
   bool result = false;
   Punto p0 = plinea.vertices[0];
   Punto pult = plinea.vertices[plinea.num_vertices - 1];
   if ((p0.x == pult.x) && (p0.y == pult.y)) {
      result = true;
   }
   return result;
}
