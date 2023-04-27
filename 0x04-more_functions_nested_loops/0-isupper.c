#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: Returns 1 if c is uppercase or Returns 0 otherwise
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
