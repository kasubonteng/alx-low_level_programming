#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string to be reversed
 *
 * Return: void
  */

void print_rev(char *s)
{
	int counter = 0, n;

	while (s[counter] != '\0')
	{
		counter++;
	}

	n = counter - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
