#include "main.h"

/**
 * _abs - prints absolute value of number
 *
 * @n: number
 *
 * Return: absolute value of n
  */

int _abs(int n)
{
	int absolute_value = n >= 0 ? n : n * -1;

	return (absolute_value);
}
