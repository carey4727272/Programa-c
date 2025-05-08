#include <stdlib.h>
int main() {
    int arreglo[100];
    int i = 99;
    while (i >= 1) {
    arreglo[i] = i;
    printf("%d\n", arreglo[i]);
    i--;
    }
return 0;
}