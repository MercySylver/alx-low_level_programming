#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the input argument.
 * Return: Draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i, counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (counter = 0; counter < n; counter++)
			{
				if (counter == i)
				{
					_putchar('\\');
				}
				else if (counter < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
