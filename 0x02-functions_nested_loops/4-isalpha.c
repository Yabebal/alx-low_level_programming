#include "main.h"
/**
 * _isalpha - check that input is letter
 * @c: character
 * Return: Always 0
 */

int _isalpha(int c)
{
	char i;
	int exist;

	exist = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			exist += 1;
		}
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			exist += 1;
	}

	if (exist != 0)
	{
		return (1);
	} else
		return (0);
}
