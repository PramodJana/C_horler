#include<stdio.h>
void main()
{
    int a[1000];
    printf("ENTER THE NUMBER OF STUDENTS\n");
int x;
scanf("%d",&x);
printf("ENTER THE ROLL NUMBER OF %d STUDENTS\n",x);
int i;
for(i=0;i<x;i++)
{
printf("%d student\t",i+1);
scanf("%d",&a[i]);
}
printf("THE ROLL NUMBERS OF ALTERNATE STUDENTS IS :--\n");
for(i=0;i<x;i=i+2)
{
printf("THE ROLL OS STUDENT %d IS = %d \n",(i+1),a[i]);
}
}
