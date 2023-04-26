#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: Return an integer value.
 * Return: always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	else
	{
		return (c);
	}
}
