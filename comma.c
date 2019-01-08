#include<stdio.h>
void main()
{
int b,k=8;
b=(k++-k++-k--,k--);
printf("%d%d",b,k);
}
