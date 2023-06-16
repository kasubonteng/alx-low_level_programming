#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: 0
  */

int main(void)
{

	int num;
	char c;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (c = 'A'; c < 'G'; c++)
	{
		putchar(c);
	}

	putchar('\n');


	return (0);
}
