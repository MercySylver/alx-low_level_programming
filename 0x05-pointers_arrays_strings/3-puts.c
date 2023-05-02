#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The inputed argument
 * Return: prints a string, followed by a new line, to stdout.
 */
void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
