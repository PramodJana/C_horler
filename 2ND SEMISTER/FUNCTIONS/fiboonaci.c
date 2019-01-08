#include<stdio.h>
fibo(int a);
void main()
{
    int n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    fibo(n);
}
fibo(int p)
{
    int a=0,b=1,c;
    printf("%d\t%d\t",a,b);
    while((p-2)!=0)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        p--;
    }
}
