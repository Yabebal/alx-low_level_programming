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
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if ((n / 10) > 0)
		make_out(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j == 0)
				_putchar('0');
			else if (j > 0 && j <= 9)
				_putchar('0' + j);
			else
				make_out(j);
		}
		_putchar('\n');
	}
}
