#include "main.h"

/**
 * *_strcpy - copies the string pointed to src to the buffer pointed by dest
 *
 * @src: string to be copied
 * @dest: destination buffer
 *
 * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
