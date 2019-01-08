#include<stdio.h>
void main()
{int hw=0,tw=0;
int HILLARY[10];
int TRUMP[10];
printf("ENTER THE VOTES POLLED TO HILLARY IN EACH STATE\n");
int i;
for(i=0;i<10;i++)
{
printf("%d state\t",(i+1));
scanf("%d",&HILLARY[i]);
}
printf("ENTER THE VOTES POLLED TO TRUMP IN EACH STATE\n");
for(i=0;i<10;i++)
{
printf("%d state\t",(i+1));
scanf("%d",&TRUMP[i]);
}
for(i=0;i<10;i++)
{
if(HILLARY[i]>TRUMP[i])
{
printf("IN STATE %d HILLARY WINS\n",(i+1));
hw++;
}
else
{
printf("IN STATE %d TRUMP WINS\n",(i+1));
tw++;
}
}
if(tw>hw)
{
printf("TRUMP BECOMES THE NEW PRESIDENT OF USA\n");
}
else
{
printf("HILLARY BECOMES THE NEW PRESIDENT OF USA\n");
}

}
