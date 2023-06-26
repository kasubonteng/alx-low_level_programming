#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array followed by new line
 *
 * @a: pointer
 * @n: number of elements to be printed
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		i != n - 1 ? printf("%d, ", a[i]) : printf("%d\n", a[i]);
	}
}
