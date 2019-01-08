#include<stdio.h>
float EC(int);
void main()
{
    int EBS,result;
    printf("enter the electricity bill statement\n");
    scanf("%d",&EBS);
    float c=EC(EBS);
    result=c+(.1*c);
    printf("TOTAL ELECTRICITY BILL IS %d",result);
}
float EC(int a)
{
    float result;
    if((a>=1)&&(a<=100))
    {
        result=a*2;
    }
    else if((a>=101)&&(a<=200))
    {
        result=(100*2)+((a-100)*3.50);
    }
    else
    {
        result=(100*2)+(100*3.50)+((a-200)*4.50);
    }
    return result;
}
