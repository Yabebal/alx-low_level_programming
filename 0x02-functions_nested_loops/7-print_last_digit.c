#include "main.h"
/**
 * print_last_digit - last digit value of n
 * @n: integer
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int val;

	val = n % 10;
	if (val < 0)
	{
		_putchar('0', -1 * val);

		return (-1 * val);
	}
	_putchar('0' + val);

	return (val);
}
