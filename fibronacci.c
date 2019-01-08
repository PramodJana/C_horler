#include<stdio.h>
void main()
{
int n,i=0,j=1,c=1;
printf("ENTER THE LAST TERM\n");
scanf("%d",&n);
printf("%d",i);
printf("%d",j);
while(c<=n)
{
printf("%d",c);
i=j;
j=c;
c=i+j;
}
}
