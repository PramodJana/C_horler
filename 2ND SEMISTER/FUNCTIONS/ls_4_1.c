#include<stdio.h>
static int counter =0;
int prime(int a,int b);
void main()
{
    int num,result;
    printf("ENTER THE NUMBER GREATER THEN 1 \n");
    scanf("%d",&num);
    if(num>1)
    {
        result=prime(num,1);
        if(result==2)
        {
            printf("THE INPUTED NUMBER IS A PRIME NUMBER\n");
        }
        else
        {
            printf("THE INPUTED NUMBER IS NOT A PRIME NUMBER\n");
        }
    }
    else
    {
        printf("THE INPUTED NUMBER IS LESS THAN OR EQUAL TO 1\n");
    }
}
int prime(int a,int b)
{
    if(a>=b)
    {
    if(a%b==0)
    {
        counter ++;
        return prime(a,b+1);
    }
    else
        return prime
        (a,b+1);
        }
        else
        return counter;
}
