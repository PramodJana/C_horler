#include<stdio.h>
void main()
{
int n,sum=0;
printf("ENTER THE LAST TERM VALUE\n");
scanf("%d",&n);
int i;
for(i=1;i<=n;i=i+2)
{int j=i;
int sum1=1;
while(j!=0)
{
    sum1=sum1*j;
    j--;
}
sum=sum+sum1;
}
printf("THE TOTAL SUM IS =%d",sum);
}

