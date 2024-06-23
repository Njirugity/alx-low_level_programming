#include <stdio.h>
/**
*main - List the alphapets apart from q and e
*
*Return: Always zero(succes)
**/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
