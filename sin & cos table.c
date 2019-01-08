#include<stdio.h>
#include<math.h>
void main()
{
int i;
for(i=0;i<=360;i=i+30)
{
float s=sin(i);
float c=cos(i);
printf("%f",s);
printf (" ");
printf("%f",c);
printf ("\n ");
}
}
