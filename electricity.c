#include<stdio.h>
void main()
{
float bill,tbill=0;
int unit;
printf("ENTER THE UNITS\n");
scanf("%d",&unit);
if(unit<=50)
{
bill=0.50*unit;

}
else if(unit<=150)
{
        int t=unit-50;
bill=(50*0.50)+(t*0.75);
}
else if(unit<=250)
{
    int t=unit-150;
bill=(0.50*50)+(100*0.75)+(t*1.20);

}
else
{
    int t=unit-250;
t=unit-250;
bill=(0.50*50)+(100*0.75)+(100*1.20)+(t*1.50);
bill=(0.50*50)+(100*0.75)+(100*1.20)+(t*1.50);
bill=bill+(bill*0.20);
}
printf("TOTAL AMOUNT OF THE ELECTRICITY BILL IS =%f",bill);
}
