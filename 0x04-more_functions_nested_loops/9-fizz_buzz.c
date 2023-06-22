#include <stdio.h>

/**
 * main - prints 1 to 100, replaces multiples of 3 with fizz and multiples of 5
 *			with buzz and multiples of both with fizzbuzz.
 *
 * Return: Always 0
  */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			i != 1 ? printf(" %d", i) : printf("%d", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
