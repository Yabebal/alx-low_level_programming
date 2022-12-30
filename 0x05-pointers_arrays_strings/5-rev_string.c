#include "main.h"

/**
 * rev_stringv - print string
 * @str: character
 * Return: void
 */

void rev_string(char *str)
{
	int i, len;
	char *cpy = str;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(cpy + i));
	}
	_putchar('\n');
}
