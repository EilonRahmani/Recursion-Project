#include <stdio.h>
#include <stdlib.h>


void Q1();
void Q2();
void Q3();
void Q4();

void main()
{

	Q1();
	Q2();
	Q3();
	Q4();
	printf("\n\n\n******* Thank you for viewing my code :) *******\n\n\n\n");
}


//The complexity of Q1 is -----> O(log(n))
void Q1()
{
	printf("**********Q1**********\n");
	int num;
	printf("\nPlease enter a number (no more then 8 digits please):\n");
	scanf_s("%d", &num);
	int check = checkDigits(num);
	if (check == 1 || check == 2)
		printf("\nThe output is:1\n");
	else
		printf("\nThe output is:0\n");
}

//The complexity of Q2 is -----> O(n)
void Q2()
 {
	printf("\n\n\n\n\n**********Q2**********\n");
	char str1[11] = "";
	char str2[11] = "";

	printf("Please enter an exactly 10 characters long string please (no spaces):\n");
	scanf_s("%s", str1, 11);


	swapString(str1, str2, 10);
	printf("\nThe original string is: %s", str1);
	printf("\nThe swaped string is: %s", str2);

}

//The complexity of Q3 is -----> O(n)
void Q3()
{
	printf("\n\n\n\n\n\n**********Q3**********\n");
	int arr[20];
	int numbers;
	printf("How many numbers are going to be in this array? (max 20):\n");
	scanf_s("%d", &numbers);
	printf("\nPlease enter the numbers in the array:\n");

	for (int i = 0; i < numbers; i++) {
		scanf_s("%d", &arr[i]);
	}

	int sumPus = sumPositiveInArray(arr, sizeof(arr) / sizeof(int));
	printf("\nSum of all positive numbers: %d\n", sumPus);
}

//The complexity of Q3 is -----> O(n^3)
void Q4()
{
	printf("\n\n\n\n\n**********Q4**********\n");
	int balls, cells;
	printf("\nPlease enter number of balls and cells\n");
	printf("Balls: ");
	scanf_s("%d", &balls);
	printf("Cells: ");
	scanf_s("%d", &cells);

	int number = countOptions(balls, cells);
	printf("The number of options is: %d\n\n\n", number);
}

