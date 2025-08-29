#include <windows.h>
#include <stdio.h>

int main(void)
{
    // Cadena UTF-8 original
    const char *utf8 = "¡Hola, mundo!";

    // Convertir UTF-8 -> UTF-16 (wchar_t)
    wchar_t wbuffer[100];
    int nchars = MultiByteToWideChar(
        CP_UTF8, // Codificación origen
        0,       // Sin banderas
        utf8,    // Cadena original
        -1,      // Longitud (-1 = terminada en '\0')
        wbuffer, // Buffer destino
        100      // Tamaño del buffer
    );

    if (nchars == 0)
    {
        printf("Error al convertir a wchar_t\n");
        return 1;
    }

    // Mostrar cadena convertida
    wprintf(L"Cadena convertida (UTF-16): %ls\n", wbuffer);

    // Convertir UTF-16 -> UTF-8
    char utf8_result[100];
    int nbytes = WideCharToMultiByte(
        CP_UTF8,     // Codificación destino
        0,           // Sin banderas
        wbuffer,     // Cadena original
        -1,          // Longitud (-1 = '\0')
        utf8_result, // Buffer destino
        100,         // Tamaño del buffer
        NULL,        // Carácter sustituto (opcional)
        NULL         // Indicador de sustitución
    );

    if (nbytes == 0)
    {
        printf("Error al convertir a UTF-8\n");
        return 1;
    }

    printf("Cadena reconvertida (UTF-8): %s\n", utf8_result);
    return 0;
}