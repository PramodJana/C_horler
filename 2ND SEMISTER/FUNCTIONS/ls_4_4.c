#include<stdio.h>
int Lamda(int);
void main()
{
    int n,result;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    result=Lamda(n);
    printf("THE RESULT OF THE INPUTTED NUMBER IS %d\n",result);
}
int Lamda(int n)
{
    if(n==1)
    return 0;
    else
        return Lamda(n/2)+1;

}
