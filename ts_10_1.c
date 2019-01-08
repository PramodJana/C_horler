#include<stdio.h>
void main()
{
int n, sum=0;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
while(n!=-1)
{
if(n>0)
{
sum=sum+n;
}
printf("ENTER THE NUMBER \n");
scanf("%d",&n);
}
printf("THE TOTAL SUM IS %d",sum);

}
