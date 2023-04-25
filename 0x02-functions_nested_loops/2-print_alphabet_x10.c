#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int alpa = 97;

	while (i <= 10)
	{
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha = alpha + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
