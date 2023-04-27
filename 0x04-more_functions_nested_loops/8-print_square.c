#include "main.h"
/**
 * print_square - prints a square on the terminal
 * @size: the input argument.
 * Return: prints a square on the terminal;
 */
void print_square(int size)
{
	int i, counter;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for  (counter = 0; counter < i; counter++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
