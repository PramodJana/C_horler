#include<stdio.h>
#include<string.h>
void main()
{
int l,i,count=0;
char a[1000],b;
printf("ENTER THE STRING\n");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
b=a[i];
if((b=='a')||(b=='e')||(b=='i')||(b=='o')||(b=='u')||(b=='A')||(b=='E')||(b=='I')||(b=='O')||(b=='U'))
{
count++;
}
}
puts(a);
printf("NUMBER OF VOWELS PRESENT IN GIVEN STRING IS %d ",count);
}
