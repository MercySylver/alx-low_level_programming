#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: the inputed argument
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	int c = 0;
	char temp;

	while (s[c++])
	{
		i++;
	}
	for (c = i - 1; c >= i / 2; c--)
	{
		temp = s[c];
		s[c] = s[i - c - 1];
		s[i - c - 1] = temp;
	}
}
