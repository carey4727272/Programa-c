#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    int resultado;
    printf("Ingresar la primera palabra: \n\n\n");
    scanf("%s", str1);
    printf("Ingresar la segunda palabra: \n\n\n");
    scanf("%s", str2);
    resultado = strcmp(str1, str2);
    if (resultado == 0) {
        printf("ambas palabras son iguales\n\n\n");
    } else if (resultado < 0) {
        printf("%s es menor que %s\n\n\n", str1, str2);
    } else {
        printf("%s es mayor que %s\n\n\n", str1, str2);
    }
    return 0;
}
