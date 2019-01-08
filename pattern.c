#include<stdio.h>
void main()
{
    int i,j,k,z=1;
    for(i=1;i<=4;i++)
        {
            for(j=3;j>=i;j--)
            {
                printf(" ");
            }
            for(k=1;k<=z;k++)
            {
                if(k%2!=0)
                    printf("*");
                else
                    printf("A");
            }z=z+2;
            printf("\n");
}
}
