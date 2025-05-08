

#include <stdio.h>

int *p,y;
void func()
{
int x=40;
p=&x;
y=*p;
*p=23;
}
int main(void)
{
func();
y=*p;
*p=25;
printf ("el valorde y es %d \nEl valor de *p es %d\nEl valor de p es %p",y,*p,p);
return 0;
}