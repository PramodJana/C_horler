#include<stdio.h>
void main()
{
    int a,b,c,d;
printf("ENTER THE NUMBER OF THREE STUDENTS\n");
scanf("%d%d%d",&a,&b,&c);
d=(a>b)?(a>c?a:c):(b>c?b:c);
printf("THE HIGHEST MARKS IS :%d",d);
}
