#include "main.h"
/**
 * print_alphabet_x10 - classify numbers
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i, newL, j;

	newL = '\n';
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(newL);
	}
}
