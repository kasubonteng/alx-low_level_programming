#include <stdio.h>

/**
 * main - prints all possible double digit combinations of
 *			base 10 integers in ascending order
 *
 * Return: 0
 */

int main(void)
{

	int first_number = 0;
	int second_number = 0;

	for (first_number = 0; first_number < 10; first_number++)
	{
		for (second_number = 1; second_number < 10; second_number++)
		{
			if (first_number != second_number && second_number >= first_number)
			{
				putchar(first_number + '0');
				putchar(second_number + '0');

				if (!(first_number == 8 && second_number == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
