#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int and updates the value
 *					it points to to 98.
 *
 * @n: pointer to int
 *
 * Return: void
  */

void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
