#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iconv.h>
#include <locale.h>
#include <errno.h>
   
/* imprime bytes en hex */
static void dump_hex(const char *label, const unsigned char *p) {
    printf("%s:", label);
    for (size_t i = 0; p[i] != '\0'; ++i) printf(" %02X", p[i]);
    printf("  (len=%zu)\n", strlen((const char*)p));
}

int main(void) {
    setlocale(LC_ALL, "");
    
    /* Entrada literal en UTF-8 (asegúrate de guardar el .c en UTF-8): */
    const char *entrada_utf8 = "¡Hola!";
    
    /* Buffers de trabajo */
    unsigned char latin1[64];  memset(latin1, 0, sizeof(latin1));
    unsigned char utf8_back[64]; memset(utf8_back, 0, sizeof(utf8_back));
    
    /* --- 1) UTF-8 -> ISO-8859-1 --- */
    iconv_t to_latin1 = iconv_open("ISO-8859-1", "UTF-8"); /* tocode, fromcode */
    if (to_latin1 == (iconv_t)-1) { perror("iconv_open to latin1"); return 1; }
    
    char *in = (char*)entrada_utf8;
    size_t inleft = strlen(entrada_utf8);
    char *out = (char*)latin1;
    size_t outleft = sizeof(latin1) - 1; /* dejamos sitio para '\0' */
    
    if (iconv(to_latin1, &in, &inleft, &out, &outleft) == (size_t)-1) {
        perror("iconv UTF-8->ISO-8859-1");
        iconv_close(to_latin1);
        return 1;
    }
    *out = '\0'; /* terminador */
    iconv_close(to_latin1);
    
    /* Mostramos los bytes reales en Latin-1 (no confíes en printf aquí) */
    dump_hex("LATIN1 bytes", latin1);
    /* Esperado para "¡Hola!": A1 48 6F 6C 61 21 */
    
    /* --- 2) ISO-8859-1 -> UTF-8 (para mostrar en la terminal UTF-8) --- */
    iconv_t to_utf8 = iconv_open("UTF-8", "ISO-8859-1");
    if (to_utf8 == (iconv_t)-1) { perror("iconv_open to utf8"); return 1; }
    
    in = (char*)latin1;      inleft = strlen((char*)latin1);
    out = (char*)utf8_back;  outleft = sizeof(utf8_back) - 1;
    
    if (iconv(to_utf8, &in, &inleft, &out, &outleft) == (size_t)-1) {
        perror("iconv ISO-8859-1->UTF-8");
        iconv_close(to_utf8);
        return 1;
    }
    *out = '\0';
    iconv_close(to_utf8);
    
    dump_hex("UTF8 back bytes", utf8_back);
    printf("Para mostrar en terminal UTF-8: %s\n", utf8_back);
    
    return 0;
}