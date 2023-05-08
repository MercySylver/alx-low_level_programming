#include "main.h"
/**
  * _memset -  fills memory with a constant byte.
  * @s: the inputed argument.
  * @b: the inputed argument
  * @n: the inputed argument
Return: Always 0 (Success)
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
