#include <stdio.h>
void main()
{
char a;
printf("ENTER TRHE CHARACTER\n");
scanf("%c",&a);
int c=(int)a;
if(((c>=65)&&(c<=91))||((c>=97)&&(c<=123)))
{
printf("IT IS A ALPHABET\n");
}
else if((c>=45)&&(c<=57))
{
printf("IT IS A DIGIT\n");
}
else
{
printf("IT IS A SPECIAL CHARACTER\n");
}
}
