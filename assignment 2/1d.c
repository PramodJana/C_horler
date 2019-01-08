#include<stdio.h>
void main()
{
int a=10, b=11, c=13, d;
d = (a=c, b+=a, c=a+b+c);
printf("%d %d %d %d", d, a, b, c);
}
