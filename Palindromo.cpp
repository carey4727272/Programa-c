#include <stdio.h>
#include <string.h>
int main() {
    char palab0[20];
    int lon,palind1 = 1;
    int i;
    printf("Escribe una palabra: ");
    scanf("%s", palab0);
    lon = strlen(palab0);
    for(i = 0; i < lon/2; i++) {
    if(palab0[i] != palab0[lon-1-i]) {
        palind1 = 0;
        break;
        }
    }
    if(palind1==1) {
    printf("La palabra %s es un palindromo\n", palab0);
    } else {
    printf("La palabra %s no es un palindromo\n", palab0);
    }
    return 0;
}