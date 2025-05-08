#include <stdio.h>
#include <stdlib.h>

int main (){
    int c = 5;
    
    printf ("c: %d\n",c);
    printf ("c++: %d\n",c++);
    printf ("c: %d\n",c);

    // Es equivalente a con = con - 1;
   int d = 10;
    
    printf ("d: %d\n",d);
    printf ("d: %d\n",--d);
    printf ("d: %d\n",d);
    system ("Pause");
    return 0;
}