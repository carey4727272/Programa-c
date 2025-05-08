#include <stdio.h>
#include <string.h>
#include <stdio.h>
int main() {
char palabra1[30];
char palabra2[30];
    int n;
    printf("Ingresa palabra 1: ");
    scanf("%s", palabra1);
    printf("Ingrese palabra 2: ");
    scanf("%s", palabra2);
    n=strlen(palabra1);
    for(int i = 0; i < n; i++) {
    strcat(palabra1, palabra2);
}
    printf("Resultado: %s", palabra1);
    return 0;
}