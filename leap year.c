     #include<stdio.h>
void main()
{
int year;
printf("ENTER THE YEAR\n");
scanf("%d",&year);
if(year%400==0)
{
printf("IT IS A LEAP YEAR");
}
else if((year%4==0)&&(year%100!=0))
{
printf("IT IS A LEAP YEAR");
}
else
{
printf("IT IS NOT A LEAP YEAR");
}
}
