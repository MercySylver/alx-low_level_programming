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
		if (counter % 3 == 0 && counter % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (counter % 5 == 0 && counter % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (counter == 1)
		{
			printf("%d", counter);
		}
		else
		{
			printf("%d", counter);
		}
	}
	printf("\n");
	return (0);
}
