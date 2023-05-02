#include "main.h"
/**
  * puts_half - prints half of a string
  * @str:  print the second half of the string.
  * Return: prints half of a string
  */
void puts_half(char *str)
{
	int fullen, halflen;

	fullen = 0;
	while (str[fullen] != '\0')
	{
		fullen++;
	}
	halflen = fullen / 2;
	if (fullen % 2 != 0)
	{
		halflen++;
	}
	while (halflen < fullen)
	{
		_putchar(str[halflen]);
		halflen++;
	}
	_putchar('\n');
}
