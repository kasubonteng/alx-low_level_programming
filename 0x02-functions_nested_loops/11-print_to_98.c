#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from input n to 98
 *
 * @n: number to begin counting from
 *
 * Return: void
  */

void print_to_98(int n)
{
	if (n > 98)
	{

		while (n >= 98)
		{
			n != 98 ? printf("%d, ", n) : printf("%d\n", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			n != 98 ? printf("%d, ", n) : printf("%d\n", n);
			n++;
		}
	}
}
