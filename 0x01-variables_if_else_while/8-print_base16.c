#include<stdio.h>
/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	char i, newL;

	newL = '\n';
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar(newL);

	return (0);
}
