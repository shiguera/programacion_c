// Ejercicio 15.5.  Lectura de líneas con fgets()
#include <stdio.h>

#define MAX_LINEA 256

int main() {
    char linea[MAX_LINEA];
    FILE *f = fopen("entrada.txt", "r");
    if (f == NULL) {
        perror("entrada.txt");
        return 1;
    }
    while (fgets(linea, MAX_LINEA, f)) {
        printf("%s", linea);
    }
    fclose(f);
    return 0;
}
