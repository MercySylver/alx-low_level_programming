#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: the inpued argument
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int len, counter, i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		counter = 0;
		i = len / 2;
	}
	while (i--)
	{
		temp = s[len - countter - 1];
		s[len - counter - 1] = s[counter];
		s[counter] = temp;
		counter++
	}
}
