#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
  */

void jack_bauer(void)
{
	int hour = 00;

	while (hour < 24)
	{
		int minute = 00;


		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			minute++;
			_putchar('\n');
		}

		hour++;
	}
}
