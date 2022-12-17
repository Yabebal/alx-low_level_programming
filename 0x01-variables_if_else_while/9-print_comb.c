#include<stdio.h>
#include<string.h>
/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	int newL, i, comma, space;

	newL = '\n';
	comma = ',';
	space = ' ';
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(comma);
			putchar(space);
		}
	}

	putchar(newL);

	return (0);
}
