#include "main.h"
#include <stdlib.h>

/**
* *_strdup - copy string given as parameter
*@str: string to duplicate
*Return: pointer to duplicated string
**/

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		j++;

	dup = malloc(sizeof(char) * j + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	return (dup);
}
