#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 *
 * @a: pointer to first number
 * @b: pointer to second number
  */

void swap_int(int *a, int *b)
{
	int temporary_var = *a;
	*a = *b;
	*b = temporary_var;
}
