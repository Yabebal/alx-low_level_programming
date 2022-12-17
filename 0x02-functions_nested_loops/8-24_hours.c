#include "main.h"
/**
 * jack_bauer - print hours and minutes
 * Return: Always 0
 */

void jack_bauer(void)
{
	int i, j, k, l, hr;

	hr = 9;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			hr = 3;
		for (j = 0; j <= hr; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
