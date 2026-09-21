#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Multiples()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	if (a % b == 0)
	{
		printf("%d is  multiple of %d\n", a, b);
	}
	if (a % b != 0)
	{
		printf("%d is not multiple of %d\n", a, b);
	}
	return 0;
}