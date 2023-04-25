#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c  <= 122) || (c >= 65  && c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
