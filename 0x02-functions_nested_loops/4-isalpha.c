#include "main.h"

/**
 * _isalpha - checks if input is alphabet or not
 * @c: character to be checked
 *
 * Return: 1 if c is alphabet, 0 if is not alphabet
  */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
