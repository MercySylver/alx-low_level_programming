#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: Print integer from0 to 9
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
