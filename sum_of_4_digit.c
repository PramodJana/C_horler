#include<stdio.h>
void main()
{
int num,sum=0;
printf("ENTER YOUR 4 DIGIT ROLL NUMBER\n");
scanf("%d",&num);
int n=num;
while(n!=0)
{
int d=n%10;
sum=sum+d;
n=n/10;
}
printf("THE SUM OF YOUR 4 DIGIT ROLL IS =%d",sum);

}
