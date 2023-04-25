#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
