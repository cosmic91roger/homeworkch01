#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int odd_printf()
{
	int i;
	scanf("%d", &i);
	if (i % 2 == 0)
	{
		printf("%d is an even \n\n",i);
	}
	if (i % 2 != 0)
	{
		printf("%d is an odd \n\n", i);
	}
	return 0;
}