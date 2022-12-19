#include "main.h"
/**
 * _isdigit - checks the letter is captital
 * @c: is the letter
 * Return: succuss
 */

int _isdigit(int c)
{
	int i, count;

	count = 0;
	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			count++;
	}
	if (count != 0)
		return (1);
	return (0);
}
