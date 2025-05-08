#include <stdio.h>
#include <stdlib.h>

struct CD {
    char titulo[100];
    char artista[50];
    int numero_canciones; 
    int anio;            
    float precio;        
};
int main(void) {
    struct CD cd1;
    printf("Ingrese el titulo\n");
    scanf("%99s", cd1.titulo); 
    printf("Ingrese el artista\n");
    scanf("%49s", cd1.artista); 
    printf("Ingrese el numero de canciones\n");
    scanf("%d", &cd1.numero_canciones);
    printf("Ingrese el año\n");
    scanf("%d", &cd1.anio);
    printf("Ingrese el precio\n");
    scanf("%f", &cd1.precio);
    printf("\nDetalles del CD:\n");
    printf("Titulo: %s\n", cd1.titulo);
    printf("Artista: %s\n", cd1.artista);
    printf("Numero de Canciones: %d\n", cd1.numero_canciones);
    printf("Año: %d\n", cd1.anio);
    printf("Precio: %.1f\n", cd1.precio);
    system("pause");
    return 0;
}
    