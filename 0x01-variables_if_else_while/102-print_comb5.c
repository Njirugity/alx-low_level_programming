#include <stdio.h>

/**
*main - List double digits"
*
*Return: always 0 (success)
**/

int main(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (!(a == 9 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}
		b++;
		}
	a++;
	b = a + 9;
	}

	putchar('\n');

	return (0);
}
