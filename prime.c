#include<stdio.h>
void main()
{
int num,count=0;
printf("ENTER THE NUMBER\n");
scanf("%d",&num);
int i=1;
while(i<=num)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
printf("IT IS A PRIME NUMBER");
}
else
{
printf("IIT IS NOT A PRIME NUMBER");
}
}
