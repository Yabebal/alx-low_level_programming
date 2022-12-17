#include<stdio.h>
#include<string.h>
/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	int newL, i;

	newL = '\n';
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar(newL);

	return (0);
}
