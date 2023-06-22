#include "main.h"

/**
 * _isdigit - checks if input is digit between 0 and 9
 *
 * @c: character to be checked
 *
 * Return: 1 if @c is digit, 0 if otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
