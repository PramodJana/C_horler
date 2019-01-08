#include<stdio.h>
void main()
{
int a[10];
int b[10];
int i,flag=0;
printf("ENTER THE ROLL NUMBERS\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
b[i]=i+1;
}
for(i=0;i<10;i++)
{
if(a[i]!=b[i])
{
flag =1;
break;
}
}
if(flag==1)
{
printf("STUDENT %d IS MISSING",i+1);
}
else
{
printf("EVERYONE IS PRESENT");
}
}
