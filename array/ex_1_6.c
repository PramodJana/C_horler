#include<stdio.h>
void main()
{
int a[16];
int i,n,j=0;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
i=n;
while(i>0)
{
int b=i%2;
a[j]=b;
i=i/2;
j++;
}
while(j<16)
{
    a[j]=0;
    j++;
}
printf("THE BINARY EQUIVALENT OF %d IS :--\n",n);
int k;
for(k=15;k>=0;k--)
{
printf("%d",a[k]);
}
}
