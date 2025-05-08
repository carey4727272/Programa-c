#include <stdio.h>
#include <string.h>
int main() {
    int n, v, c;
    char cad[20];
    printf("Ingresa una palabra: ");
    scanf("%s", cad);
    n = strlen(cad);
    for(v = 0; v < n; v++) {
    for(c = 0; v < n; c++) {
    printf("*");
        }
    printf("\n");
    }
    return 0;
}