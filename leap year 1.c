#include<stdio.h>
void main()
{
int a,b;
printf("ENTER THE range\n");
scanf("%d%d",&a,&b);
while(a<=b)
{
if(a%400==0)
{
printf("%d ",a);
}
else if((a%4==0)&&(a%100!=0))
{
printf("%d ",a);
}
else
{

}a++;
}
}

