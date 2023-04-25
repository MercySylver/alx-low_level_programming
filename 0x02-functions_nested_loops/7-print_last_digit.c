#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
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
