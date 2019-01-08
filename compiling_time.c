#include<stdio.h>
void main()
{
int h1,h2,h3,m1,m2,m3,s1,s2,s3,th,tm,ts,t,t1;
printf("EMTER THE TIME OF CODEING\n");
scanf("%d%d%d",&h1,&m1,&s1);
printf("EMTER THE TIME OF COMPILING\n");
scanf("%d%d%d",&h2,&m2,&s2);
printf("EMTER THE TIME OF FIXING ERROR\n");
scanf("%d%d%d",&h3,&m3,&s3);
t=3600*(h2-h1)+60*(m2-m1)+(s2-s1);
t1=t+3600*h3+60*m3+s3;
th=(t1+t)/3600;
tm=((t+t1)%3600)/60;
ts=(((t+t1)%3600)%60)/60;
printf("THE TOTAL TIME IS %d:%d:%d",th,tm,ts);
}
