#include<stdio.h>
 void main()
 {
 int a[1000];
 int n,i ,choice,ele,index,flag=0,k;
 printf("ENTER THE SIZE OF ARRAY\n");
 scanf("%d",&n);
 printf("ENTER THE ARRY ELEMENTS\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("IF YOU WANT TO DELETE THE ELEMENT BY INDEX PRESS :1\n");
  printf("IF YOU WANT TO DELETE THE ELEMENT BY POSITION PRESS :2\n");
printf("ENTER YOUR CHOICE\n");
scanf("%d",&choice);
if(choice==1)
{
k=0;
printf("ENTER THE INDEX\n");
scanf("%d",&index);
for(i=0;i<n;i++)
{
if(i==index)
{
flag=1;
}
else
{
a[k]=a[i];
k++;
}
}
if(flag==1)
{
    printf("THE ELEMENT AFTER DELETION IS-->\n");
    for(i=0;i<n-1;i++)
        printf("%d\t",a[i]);
}
else{
    printf("DDELETED ELEMENT NOT FOUND\n");

}
}
else if(choice==2)
{
 k=0;
printf("ENTER THE ELEMENT\n");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
{
flag=1;
}
else
{
a[k]=a[i];
k++;
}
}
if(flag==1)
{
    printf("THE ELEMENT AFTER DELETION IS-->\n");
    for(i=0;i<n-1;i++)
        printf("%d\t",a[i]);
}
else{
    printf("DDELETED ELEMENT NOT FOUND\n");

}
}
else
{
    printf("WRONG CHOICE\n");
}
  }
