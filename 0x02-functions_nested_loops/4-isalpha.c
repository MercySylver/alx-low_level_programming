i#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: is a letter, lowercase or uppercase
 *
 * Return: 1 for letter. 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
