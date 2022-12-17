#include<stdio.h>
/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	char i, newL;

	newL = '\n';
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar(newL);

	return (0);
}
