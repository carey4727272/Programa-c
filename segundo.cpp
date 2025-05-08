
    #include <stdio.h>
     #include <stdlib.h>
      #include <string.h>
       int main() {
    char pal1[100];  
    char pal2[100];  
    char pal3[100];     
    printf("Ingresa la primer palabra:");
    scanf("%s", pal1);
    printf("Ingresa la segunda palabra:");
    scanf("%s", pal2);
    printf("\n\nAntes:\n\n");
    printf("Pal1: %s\n\n", pal1);
    printf("Pal2: %s\n\n\n", pal2);
    strcpy(pal3, pal1);
    strcpy(pal1, pal2);
    strcpy(pal2, pal3);
    printf("Despues:\n\n");
    printf("Pal1: %s\n\n", pal1);
    printf("Pal2: %s\n\n", pal2);
    
    system("pause");
    return 0;
}