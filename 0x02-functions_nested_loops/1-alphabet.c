#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase.
 * print alphabet - print alphabets in lowercase
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
