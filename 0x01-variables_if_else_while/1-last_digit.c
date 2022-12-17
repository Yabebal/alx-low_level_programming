#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	int n, last_digit;
	char *txt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	txt = "Last digit of %d is %d and is less than 6 and not 0\n";

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf(txt, n, last_digit);
	}

	return (0);
}
