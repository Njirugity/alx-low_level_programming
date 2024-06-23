#include <stdio.h>

/**
*main - Print the alphabet
*
*Return: Always zero(succes)
**/

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}

