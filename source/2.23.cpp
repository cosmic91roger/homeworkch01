#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int ratio()
{
	int num1;
	int num2;
	int num3;
	scanf ("%d%d%d", &num1,&num2,&num3);
	int biggest = num1;
	int smallest = num2;
	if (num3 > num2)
	{
		if (num2 > num1)
		{
			smallest = num1;
			biggest = num3;
		}
	}
	if (num3 < num2)
	{
		if (num3 > num1)
		{
			biggest = num2;
			smallest = num1;
		}
	}
	if (num1 < num2)
	{
		if (num1 > num3)
		{
			biggest = num2;
			smallest = num3;
		}
	}
	if (num1 > num2)
	{
		if (num2 > num3)
		{
			biggest = num1;
			smallest = num3;
		}
	}
	if (num3 > num1)
	{
		if (num1 > num2)
		{
			biggest = num3;
			smallest = num2;
		}
	}
	
	printf("biggest is %d \n", biggest);
	printf("smallest is %d \n", smallest);
	return 0;
}
