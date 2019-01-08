#include<stdio.h>
void main()
{
int i,s,j;
for(i=1;i<=4;i++)
{
for(s=4-i;s>0;s--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
