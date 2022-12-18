#include "main.h"
/**
 * _isupper - checks the letter is captital
 * @c: is the letter
 * Return: succuss
 */

int _isupper(int c)
{
	int i, count;

	count = 0;
	for (i = 'A'; i <= 'Z')
	{
		if (c == i)
			count++;
	}
	if (count != 0)
		return (1);
	return (0);
}
