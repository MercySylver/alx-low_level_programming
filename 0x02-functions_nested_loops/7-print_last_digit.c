#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @c: Returns the value of the last digit.
 * Return: always 0
 */
int print_last_digit(int c)
{
	int lt;

	lt = c % 10;
	if (lt < 0)
	{
		_putchar(-lt + 48);
		return (-lt);
	}
	else
	{
		_putchar(lt + 48);
		return (lt);
	}
	_putchar('\n');
}
