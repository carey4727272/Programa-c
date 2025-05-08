#include <stdio.h>
#include <stdlib.h> // Necesario para usar system()

struct CD {
    char titulo[100];
    char artista[50];
};

int main(void) {
    struct CD cd1;
    printf("Ingrese el titulo\n");
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin); // Cambié gets por fgets para evitar problemas de seguridad

    printf("%s\n", cd1.titulo);

    system("pause"); // Corregido 'sistem' a 'system'
    return 0;
}

