#include<stdio.h>
void main()
{
int a[10];
printf("ENTER THE 10 ARRAY  INTEGERS\n");
int i;
for(i=0;i<10;i++)
{
printf("%d\t",i+1);
scanf("%d",&a[i]);
}printf("ThE INPUTED ARRAY INN REVERSE ORDER IS \n");
for(i=9;i>=0;i--)
{
printf("%d\t",a[i]);

}
}
