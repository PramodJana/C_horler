#include<stdio.h>
void main()
{
int c1,c2,c3,c4,c5,g1,g2,g3,g4,g5,s;
printf("ENTER THE CREDITS OF FIVE SUBJECTS\n");
scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
printf("ENTER THE GRADE OF FIVE SUBJECTS\n");
scanf("%d%d%d%d%d",&g1,&g2,&g3,&g4,&g5);
s=((c1*g1)+(c2*g2)+(c3*g3)+(c4*g4)+(c5*g5))/(c1+c2+c3+c4+c5);
if(s>=9)
{
printf("GRADE A\n");
}
else if(s>=8&&s<=9)
{
printf("GRADE B\n");
}
else if(s>=7&&s<=8)
{
printf("GRADE C\n");
}
else if(s>=6&&s<=7)
{
printf("GRADE D\n");
}
else
{
printf("GRADE E\n");
}
}

