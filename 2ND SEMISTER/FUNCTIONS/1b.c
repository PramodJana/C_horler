#include<stdio.h>
float tax(float a);
void main()
{
    float meal,result;
    printf("ENTER THE MEAL CHARGE\n");
    scanf("%f",&meal);
    result=tax(meal);
    printf("THE TOTAL BILL IS %f\n",result);
}
float tax(float b)
{
    float c=b+(.20*b);
    float d=c+(.15*c);
    return d;
}
