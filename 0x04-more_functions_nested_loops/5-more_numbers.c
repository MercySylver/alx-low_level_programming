#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 * Return: returns numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int i, counter;

	for (i = 1; i <= 10; i++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			if (counter >= 10)
			{
				_putchar('1');
			}
			else
			{
				_putchar(counter % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
