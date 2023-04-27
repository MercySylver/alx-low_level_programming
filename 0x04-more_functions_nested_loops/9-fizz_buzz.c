#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 * Return: always 0
 */
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FuzzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fuzz");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		if (counter != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
