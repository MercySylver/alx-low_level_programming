#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: the inputed argument
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int i;
	int counter;
	char rev = s[0];

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
