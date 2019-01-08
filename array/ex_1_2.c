#include<stdio.h>
void main()
{ int cn=0,cp=0;
printf("ENTER THE ARRAY LENGTH\n");
int x;
scanf("%d",&x);
int a[x];
printf("ENTER THE 10 ARRAY  INTEGERS\n");
int i;
for(i=0;i<x;i++)
{
printf("%d\t",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
if(a[i]>0)
{
cp++;
}
else if(a[i]==0)
{


}
else
{
cn++;
}
}
printf("THE NUMBER OF POSITIVE INTEGERS IS = %d\n",cp);
printf("THE NUMBER OF NEGATIVE INTEGERS IS = %d\n",cn);
}
