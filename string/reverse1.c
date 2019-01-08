#include<stdio.h>
#include<string.h>
void main()
{
int l,i,j;
char a[1000],b;
printf("ENTER THE STRING\n");
gets(a);
l=strlen(a);
i=0;
j=l-1;
printf("ORIGINAL STRING \t%s\n",a);
while(i<j)
{
b=a[i];
a[i]=a[j];
a[j]=b;
i++;
j--;
}
printf("REVERSED STRING \t%s\n",a);
}
