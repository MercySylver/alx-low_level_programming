#include "main.h"
/**
  * print_array -  prints n elements of an array of integers.
  * @a: the first inputed argument.
  * @n: the second inputed argument.
  * Return:  prints n elements of an array of integers.
  */
void print_array(int *a, int n)
{
	int indexofarr;

	for (indexofarr = 0; indexofarr < n; indexofarr++)
	{
		printf("%d", a[indexofarr]);
		if (indexofarr != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}

