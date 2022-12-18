#include "main.h"
/**
 * times_table - print time table of 9
 * Return: Always 0
 */

void times_table(void)
{
	int i, j, val, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			val = i * j;
			if (val > 9)
			{
				num = val % 10;
				_putchar('0' + val / 10);
				_putchar('0' + num);
			} else
			{
				_putchar('0' + val);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (val < 10 && j != 1)
					_putchar(' ');
			} else
				_putchar('\n');
		}
	}
}
