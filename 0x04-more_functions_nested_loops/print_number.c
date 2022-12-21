#include "main.h"

/**
 * make_out - print large numbers
 * @n: input
 * Return: always 0
 */
void make_out(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		make_out(n / 10);
	_putchar(n % 10 + '0');
}
