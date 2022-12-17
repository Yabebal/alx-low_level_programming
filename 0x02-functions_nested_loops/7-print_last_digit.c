#include "main.h"
/**
 * print_last_digit - last digit value of n
 * @n: integer
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int val;

	if (n < 0)
		n = -1 * n;

	val = n % 10;

	_putchar('0' + val);

	return (val);
}
