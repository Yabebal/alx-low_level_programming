#include "main.h"
/**
 * print_last_digit - last digit value of n
 * @n: integer
 * Return: Always 0
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}

	return (-1 * n % 10);
}
