#include<stdio.h>
#include<string.h>
/**
 * main - classify numbers
 * Return: Always 0
 */

int main(void)
{
	char i, newL;

	newL = '\n';
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar(newL);

	return (0);
}
