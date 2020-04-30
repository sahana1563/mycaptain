#include<stdio.h>
int main()
{
int a=1,b=3;
a=a+b;
b=a-b;
a=a-b;
//they are swapped
printf("a=%d\nb=%d",a,b);
return 0;
}
