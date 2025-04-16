#include <stdio.h>
#include <stdlib.h>
#include "exe.h"


int checkDigits(int num)
{
	if (num < 10) {
		if (num % 2 == 0)
			return 1;
		else
			return 2;
	}

	int count = checkDigits(num / 10);

	if (count == 0)
		return 0;

	if (num % 2 == 0 && count == 1)
		return 1;

	if (num % 2 != 0 && count == 2)
		return 2;
	else
		return 0;
}


void swapString(char str1[], char str2[], int size)
{
	if (size == 0) {
		*str2 = '\0';
		return;
	}
	swapString(str1+1, str2, size - 1);
	str2[size-1] = str1[0];
}


int sumPositiveInArray(int arr[], int size)
{
	if (size < 0)
		return 0;

	int mid = sumPositiveInArray(arr + 1, size - 1);

	if (*arr < 0)
		return mid;
	else 
		return mid + *arr;
}


int countOptions(int balls, int cells)
{

	if (balls < 0)
		return 0;
	if (balls > 2 * cells)  // Testing that there aren't more balls than cells
		return 0;
	if (balls == 0)
		return 1;


	int op1 = countOptions(balls , cells - 1);
	int op2 = countOptions(balls - 1, cells - 1);
	int op3 = countOptions(balls - 2, cells - 1);

	return op1 + op2 + op3;
}
