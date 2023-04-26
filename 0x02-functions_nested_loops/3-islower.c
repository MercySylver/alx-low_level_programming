#include "main.h"
/**
 * _islower -' Print 1 if the input is a'.
 * @c: The charcater in ASCII code.
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
