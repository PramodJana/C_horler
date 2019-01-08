#include<stdio.h>
void reverse(int i);
void main()
{
    int num;
    printf("ENTER THE NUMBER TO BE REVERSED\n");
    scanf("%d",&num);
    reverse(num);
    printf("\n");
}
void reverse(int num)
{
    if(num<=9)
        printf("%d",num);
    else
       {
           printf("%d",(num%10));
    reverse(num/10);
       }
}
