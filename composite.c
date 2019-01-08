#include<stdio.h>
void main()
{
int m,n;
printf("ENTER THE RANGE\n");
scanf("%d%d",&m,&n);
printf("THE COMPOSITE NUMBERS ARE\n");
int i;
for(i=m;i<=n;i++)
{
int count =0;
int j;
for(j=1;j<=m;j++)
{
    if(m%j==0)
{
count++;
}
}
if(count>2)
{
printf("%d ",m);
}
m++;
}
}
