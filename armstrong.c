#include<stdio.h>
#include<math.h>
void main()
{
int n1,n2;
printf("ENTER THE NUMBER\n");
scanf("%d%d",&n1,&n2);
while(n1<=n2)
{
int dig=0,sum=0;
int i=n1;
while(i>0)
{
i=i/10;
dig++;
}
int j=n1;
while(j>0)
{
int r=j%10;
sum=sum+pow(r,dig);
j=j/10;
}
if(sum==n1)
{
printf("%d\n",n1);
}
n1++;
}
}
