#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: the inpued argument
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])!= '\0')
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
