#include<stdio.h>
void main()
{
int m[100][100];
int r ,c,i,j,sumr,sumc;
printf("ENTER THE SIZE OF MATRIX IN m*n format\n");
scanf("%d%d",&r,&c);
printf("ENTER THE ARRAY ELEMENTS OF SIZE %d *%d\n",r,c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&m[i][j]);
}
}
for(i=0;i<r;i++)
{
sumr=0;
for(j=0;j<c;j++)
{
sumr=sumr+m[i][j];
}
m[i][c]=sumr;
}
for(i=0;i<r;i++)
{
sumc=0;
for(j=0;j<c;j++)
{
sumc=sumc+m[j][i];
}
m[r][i]=sumc;
}
for(i=0;i<=r;i++)
{
for(j=0;j<=c;j++)
{
printf("%d\t",m[i][j]);
}
printf("\n");
}
}
