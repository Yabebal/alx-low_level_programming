#include "main.h"

/**
 * _puts - print string
 * @str: character
 * Return: void
 */

void _puts(char *str)
{
	int i, len;
	char *cpy = str;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(*(cpy + i));
	}
	_putchar('\n');
}
