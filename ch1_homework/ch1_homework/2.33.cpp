#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Car()
{
	float miles;
	float gallon;
	float mpg;
	int fee;
	int toll;
	printf("Enter your total kilometer driven per day\n");
	scanf("%f",& miles);
	printf("Enter cost per gallon of gasoline");
	scanf("%f",& gallon);
	printf("Enter average kilometer per gallon");
	scanf("%f", &mpg);
	printf("Enter parking fees per day");
	scanf("%d", &fee);
	printf("Enter tolls per day");
	scanf("%d", &toll);
	printf("Your daily cost of driving to work is %.2f",miles/(gallon/mpg)+fee+toll);
	return 0;
}