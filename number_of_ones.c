#include<stdio.h>
void main()
{
    long num,decimal_num,base =1,binary =0,count=0,remainder;
    printf("ENTER THE DECIMAL NUMBER\n");
    scanf("%ld",&num);
    decimal_num=num;
    while(num>0)
    {
    remainder = num%2;
    if(remainder ==1)
    {
        count ++;

    }
    binary =binary+remainder *base;
    num=num>>1;
    base=base*10;
}printf("INPUT NUMBER IS =%d\n",decimal_num);
printf("ITS BINARY EQUIVALENT IS%d\n",binary);
printf("NUMBER OF ONES IN BINARY NUMBER IS =%d\n",count);
}
