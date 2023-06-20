#include "main.h"

/**
 * print_alphabet - prints all alphabets from a-z
 *
 * Return: void
  */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
