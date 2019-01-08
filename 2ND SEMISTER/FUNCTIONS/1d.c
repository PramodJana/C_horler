#include<stdio.h>
quad(int ,int ,int);
void main()
{
    int a,b,c;
    printf("enter the coefficients of quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c);
}
quad(int a,int b,int c)
{
    float result =(b*b)-(4 *a*c);
    if(result>=0)
    {
        printf("ROOTS ARE EQUAL\n");
    }
    else{
        printf("roots are imaginary\n");
    }
}
