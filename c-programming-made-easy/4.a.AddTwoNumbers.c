#include<stdio.h>

/********************************************************
* Author : Pramod Jana
* Purpose : To read two numbers from user and print sum and average
*********************************************************/

void main()
{
	int fn, sn ,sum;
	float average;
	//read values from user
	printf("Enter first number:");
	scanf("%d",&fn);
	printf("Enter second number:");
	scanf("%d",&sn);

	sum=fn+sn;
	average= sum/2.0;
	printf("Sum=%d, Average=%f\n",sum,average);
}
