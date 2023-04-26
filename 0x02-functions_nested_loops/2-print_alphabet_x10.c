#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * function: print_alphabet_x10
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
