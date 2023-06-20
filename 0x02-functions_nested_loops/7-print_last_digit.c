#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number
 *
 * Return: the last digit of n
  */

int print_last_digit(int n)
{
	n = n > 0 ? n % 10 : (n * -1) % 10;

	_putchar(n + '0');
	return (n);
}
