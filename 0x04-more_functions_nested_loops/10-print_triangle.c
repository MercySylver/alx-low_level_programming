#include "main.h"
/**
 * print_triangle - prints a triangle on the terminal
 * @size: the input argument.
 * Return: draws a triagle on the terminal.
 */
void print_triangle(int size)
{
	int i, j, counter;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (counter = 0; counter <= i; counter++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
