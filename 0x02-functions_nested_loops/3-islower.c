#include "main.h"
/**
 * _islower - check that the letter is small
 * @c: character
 * Return: Always 0
 */

int _islower(int c)
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

	if (exist != 0)
	{
		return (1);
	} else
		return (0);
}
