#include <stdio.h>

/**
 * main - Returns the letters of the alphabet in both lowercase and uppercase
 *
 * Return: (0)
  */

int main(void)
{
	char lowercase_letter = 'a';
	char uppercase_letter = 'A';

	while (lowercase_letter <= 'z')
	{
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	while (uppercase_letter <= 'Z')
	{
		putchar(uppercase_letter);
		uppercase_letter++;
	}

	putchar('\n');

	return (0);
}

