#include "main.h"
/**
 * main - Entry point
 * print alphabet - print alphabets in lowercase
 * Return: always 0
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
