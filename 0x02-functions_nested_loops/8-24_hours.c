#include "main.h"
/**
 * main - Entry point
 * Decription: 'points _putchar to stdout'
 * Return: always 0
 */
void jack_bauer(void)
{
	int h, hh,m,mm;

	for (h = 0; h <= 2; h++)
	{
		for (hh = 0; hh <= 9; hh++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (mm = 0; mm <= 9; mm++)
				{
					if (h >= 2 && hh >= 4)
						break;
					_putchar(h + 48);
					_putchar(hh + 48);
					_putchar(58);
					_putchar(m + 48);
					_putchar(mm + 48);
					_putchar('\n');
				}
			}
		}
	}
}
