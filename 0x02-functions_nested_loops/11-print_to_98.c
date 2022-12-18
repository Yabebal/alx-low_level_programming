#include "main.h"
/**
 * print_to_98 - print numbers upto 98
 * @n: first integer
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		while (n < 98)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('0' + n);
	} else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + i);
	}
}
