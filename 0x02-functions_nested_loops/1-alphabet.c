#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
 * Return: always 0
 */
void print_alphabet(void)
{
	int i = 97;

	while(i <= 122)
	{
		_putchar(i);
	}
	_putchar('\n');
}
