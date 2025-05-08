#include <stdio.h>
#include <string.h>
int main() {
    char palabra1[50], palabra2[50];
    printf("Primer palabra: ");
    scanf("%s", palabra1);
    printf("Segunda palabra: ");
    scanf("%s", palabra2);
    int resultado = strcmp(palabra1, palabra2);
    if(resultado > 0)
    printf("'%s' es mayor", palabra1);
    else if(resultado < 0)
    printf("'%s' es mayor", palabra2);
    else 
    printf("Son iguales: %s y %s", palabra1, palabra2);
    return 0;
}