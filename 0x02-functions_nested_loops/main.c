#include <stdio.h>

int main(void)
{
	int n = 111;

	if (n > 98)
	{

		while (n >= 98)
		{
			n != 98 ? printf("%d, ", n) : printf("%d", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			n != 98 ? printf("%d, ", n) : printf("%d", n);
			n++;
		}
	}
}
