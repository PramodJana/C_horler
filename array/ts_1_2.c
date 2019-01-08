#include<stdio.h>
void main()
{int m , n;
printf("ENTER THE VALUE OF M AND N\n");
scanf("%d%d",&m,&n);
int x =n-m;
int a[x];
int b[x];
int i,j=0;
printf("ENTER THE ROLL NO OF STUDENTS\n");
for(i=m;i<=n;i++)
{
printf("ROLL OF STUDENT %d ",i);
scanf("%d",&a[j]);
printf("\n");
j++;
}
int k=0;
for(i=m;i<=n;i++)
{printf("THE ROLL NUMBER OF STUDENT %d is %d",i,a[k]);
k++;
printf("\n");
}

}
