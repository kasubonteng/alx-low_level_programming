#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 *
 * Return: void
  */

void times_table(void)
{
	int n;


	for (n = 0; n < 10; n++)
	{
		int multiplier = 1;

		_putchar('0');
		_putchar(',');

		while (multiplier < 10)
		{
			int multiple = n * multiplier;

			_putchar(' ');

			if (multiple > 9)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(multiple + '0');
			}

			if (multiplier < 9)
			{
				_putchar(',');
			}

			multiplier++;
		}
		_putchar('\n');
	}
}
