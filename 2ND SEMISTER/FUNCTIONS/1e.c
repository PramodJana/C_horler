#include<stdio.h>
void swap(int ,int);
void main()
{
    int a ,b;
    printf("ENTER THE TWO NUMBERS\n");
    scanf("%d%d",&a,&b);
    printf("VALUE BEFORE SWAP METHOD %d %d\n",a,b);
    swap(a,b);
    printf("VALUE AFTER SWAP METHOD IS %d %d\n",a,b);
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("VALUE IN SWAP METHOD IS %d %d\n",a,b);
}
