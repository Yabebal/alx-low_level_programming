#include <string.h>
#include <stdio.h>
/**
 * main - print triangle
 * Return: 0
 */

int main(void)
{
	size_t i, j;
	/*char *both35, *threeOnly, *fiveOnly;*/

	char *both35 = "FizzBuzz";
	char *threeOnly = "Fizz";
	char *fiveOnly = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			for (j = 0; j < strlen(both35); j++)
			{
				printf("%c", both35[j]);
			}
			printf(" ");
		} else if (i % 3 == 0)
		{
			for (j = 0; j < strlen(threeOnly); j++)
			{
				printf("%c", threeOnly[j]);
			}
			printf(" ");
		} else if (i % 5 == 0)
		{
			for (j = 0; j < strlen(fiveOnly); j++)
			{
				printf("%c", fiveOnly[j]);
			}
			if (i != 100)
				printf(" ");
		} else
		{
			printf("%ld",  i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
