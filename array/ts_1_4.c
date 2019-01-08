#include<stdio.h>
void main()
{int count =0;
int a[10];
printf("ENTER THE MARKS OF 500 STUDENTS\n");
int i;
for(i=0;i<10;i++)
{
printf("THE MARKS OF STUDENT %d IS ",i+1);
int j;
scanf("%d",&j);
if(j>=0&&j<=100)
{
a[i]=j;
}
else
{
printf("THE INPUTED MARK IS DISCARDED\n");
int flag=1;
while(flag)
{
printf("ENTER THE CORRECT MARKS\n");
scanf("%d",&j);
if((j>=0)&&(j<=100))
{
    a[i]=j;
    flag=0;
}
}
}
}
int k;
for(k=0;k<10;k++)
{
if(a[k]>=50)
{
count++;
}
}
printf("THE NUMBER OF STUDENTS ABOVE OR EQUAL TO 50 IS = %d",count);
}

