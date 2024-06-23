#include <stdio.h>

/**
*main - List base 16 numbers
*
*Return: Always zero(Success)
**/

int main(void)
{
	char op = '0';

	while (op <= '9')
	{
		putchar(op);
		op++;
	}

	op = 'a';
	while (op <= 'f')
	{
		putchar(op);
		op++;
	}
	putchar('\n');

	return (0);
}
