#include "main.h" 

/**
*main - Entry point
*
*Return: always zero(success)
**/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
		_putchar(str[i]);
		_putchar('\n');

	return (0);
}
