#include<stdio.h>
#include<string.h>
void main()
{
int l,i,j;
char a[1000],b;
printf("ENTER THE STRING\n");
gets(a);
printf("ORIGINAL STRING \t%s\n",a);
strrev(a);
printf("REVERSED STRING \t%s\n",a);
}
