#include <stdio.h>
int main() {
    int num = 3;
    while (num < 1000) { printf("%d ", num); num += 3; }
    printf("\nEjercicio 2:\n");
    num = 14;
    while (num < 1000) { printf("%d ", num); num += 14; }
    printf("\nEjercicio 3:\n");
    num = 1;
    while (num < 100) { if (num % 7 != 0) printf("%d ", num); num++; }
    printf("\n");
    return 0;
}