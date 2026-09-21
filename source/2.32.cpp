#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int BMICAL()
{
	float weight;
	float height;
	printf("input your height in meters");
	scanf("%f", &height);
	printf("input your weight in Kilgograms");
	scanf("%f", &weight);
	printf("BMI VALVUES: %f", float(weight / (height * height)));
	return 0;
}