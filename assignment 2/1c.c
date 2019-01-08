#include<stdio.h>
void main()
{
int a, b=7;
a = b<4 ? b<<1 : ++b>4 ? 7>>1 : a;
printf("%d %d", a, b);
}
