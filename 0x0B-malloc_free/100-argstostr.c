#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all arguments of the program.
*@ac: argument count.
*@av: pointer to array of size ac.
*Return: Pointer to new string.
*/
char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	int k = 0;
	char *a;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}
	a = malloc(sizeof(char) * k + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[l] = av[i][j];
			l++;
		}
		a[l++] = '\n';
	}
	a[k] = '\0';
	return (a);
}
