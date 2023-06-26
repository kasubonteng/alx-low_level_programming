#include "main.h"

/**
 * _strlen - function that prints the length of a string
 *
 * @s: string to check
 *
 * Return: length of the string
  */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
