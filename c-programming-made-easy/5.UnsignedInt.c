#include<stdio.h>
/*********************************************
Author : Pramod Jana
Purpose : To read distance (unsigned int) and print it.
*********************************************/

void main()
{
	unsigned int distance;
	printf("Enter the distance between two planets:");
	scanf("%u",&distance);
	printf("You have entered : %u\n",distance);
}
