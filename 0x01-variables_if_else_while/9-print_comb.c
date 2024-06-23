#include <stdio.h>

/**
*main - List number 0 to 9
*
*Return: Always zero (0)
**/

int main(void)
{
	int op = 0;

	while (op < 10)
	{
		putchar(op + '0');
		if (op != 9)
		{
			putchar(',');
			putchar(' ');
	}
		op++;
	}
	putchar('\n');

	return (0);
}
