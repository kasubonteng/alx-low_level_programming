#include "main.h"

/**
 * _isupper - checks if input character is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if @c is uppercase else return 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
