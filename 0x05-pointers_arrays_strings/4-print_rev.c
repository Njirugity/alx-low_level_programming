#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, rev;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	rev = i;

	for (j = rev - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
