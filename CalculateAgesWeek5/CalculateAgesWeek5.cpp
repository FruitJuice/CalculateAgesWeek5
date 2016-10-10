// CalculateAgesWeek5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

void main()

{
	int i = 0, j, ages[10];
	int total = 0;
	int numAges = 0;
	double average;
	int max = 0, min = 0;

	printf("Program to calculate average of up to 10 ages \n");
	do
	{
		printf("How many ages to you want to enter? ");
		scanf_s("%d", &numAges);
	} while ((numAges > 10) || (numAges < 1));

	for (i = 0; i<numAges; i++)
	{
		printf("#%d:\t", i + 1);
		scanf_s("%d", &ages[i]);

		if (i == 0) max = ages[i];
		if (i == 0) min = ages[i];

		if (ages[i] > max) max = ages[i];
		if (ages[i] < min) min = ages[i];

		total = total + ages[i];
	}

	if (total == 0)
	{
		average = 0;
	}
	else
	{
		average = (double)total / (double)(numAges);
	}

	printf("\n\nAverage: %.2lf \n", average);
	printf("Max:\t%d\n", max);
	printf("Min :\t%d\n\n", min);

}




/*void main()

{
	int i = 0, j, ages[10];
	int total = 0;
	double average;
	int max = 0, min = 0;

	printf("Program to calculate average of up to 10 ages \n");
	printf("Enter up to 10 ages (-1 to end input)\n________________\n");

	do
	{
		printf("#%d:\t", i + 1);
		scanf_s("%d", &ages[i]);

		if (ages[i] != -1)
		{
			if (i == 0) max = ages[i];
			if (i == 0) min = ages[i];
			total = total + ages[i];
			if (ages[i] > max) max = ages[i];
			if (ages[i] < min) min = ages[i];
		}

		i++;

	} while ((ages[i - 1] != -1) && (i  < 10));

	i--;

	if (total == 0)
	{
		average = 0;
	}
	else
	{
		average = (double)total / (double)(i);
	}

	printf("\n\nAverage: %.2lf \n", average);
	printf("Max:\t%d\n", max);
	printf("Min :\t%d\n\n", min);

	for (j = i - 1; j >= 0; j--)
	{
		printf("#%d:\t%d\n", j + 1, ages[j]);
	}

}
*/


