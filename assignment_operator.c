#include<stdio.h>
void main()
{
int a,b,c;
printf("ENTER THE TWO NUMBERS:\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("a=%d\nb=%d\n",a,b);
}
