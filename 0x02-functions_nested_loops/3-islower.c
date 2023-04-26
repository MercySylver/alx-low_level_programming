#include "main.h"
/**
 * _islower - Checks for lowercase characters.
 * @c: The charcater in ASCII code.
 * Return: returns 1 for lowercase characters or 0 for anything else.
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
}
