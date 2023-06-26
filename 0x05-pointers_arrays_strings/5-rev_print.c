#include "main.h"

/**
 * rev_print - prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
  */

void rev_print(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
