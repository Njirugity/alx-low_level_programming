#include <stdio.h>

/**
*main - List 3 digit number
*
*Return: always 0 (success)
**/

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
			if (!(a == 7 && b == 8 && c == 9))
			{
				putchar(',');
				putchar(' ');
			}
				c++;
			}
			b++;
			c = b + 1;
		}

		a++;
		b = a + 1;
		c = b + 1;
	}

	putchar('\n');
	return (0);
}
