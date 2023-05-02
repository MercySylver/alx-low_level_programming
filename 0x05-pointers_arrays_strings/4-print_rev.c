#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: the inpued argument
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int len, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i < 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
