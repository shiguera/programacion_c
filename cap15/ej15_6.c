// Ejercicio 15.6. Escritura binaria.
#include <stdio.h>

int main() {
    int valores[21];
    for (int i = 0; i < 20; ++i) {
        valores[i] = i + 1;
    }

    FILE *f = fopen("valores.bin", "wb");
    if (!f) {
        perror("valores.bin");
        return 1;
    }

    fwrite(valores, sizeof(int), 20, f);
    fclose(f);
    return 0;
}

