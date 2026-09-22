#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int BMICAL()
{
	float weight;
	float height;
	printf("Enter your height in meters");
	scanf("%f", &height);
	printf("Enter your weight in Kilgograms");
	scanf("%f", &weight);
	printf("BMI VALVUES: %f", float(weight / (height * height)));
	printf("Underweight:less than 18.5\n");
	printf("Normal:between 18.5 and 24.9\n");
	printf("Overweight:between 25 and 29.9\n");
	printf("Obese:30 or greater\n\n");
	return 0;
}