#include<stdio.h>
int power(int n,int m);
void main()
{
    int x,n,result;
    printf("ENTER THE VALUE OF X AND N\n");
    scanf("%d%d",&x,&n);
    result=power(x,n);
    printf("THE POWER OF %d ^ %d is %d",x,n,result);
}
int power(int a,int b)
{
    int result=1;
    while( b!=0)
    {
        result=result*a;
        b--;
    }
    return result;
}
