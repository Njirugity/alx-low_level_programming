#include <stdio.h>

/**
*main - Print the alphabet
*
*Return: Always zero(succes)
**/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}

