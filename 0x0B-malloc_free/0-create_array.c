#include <stdlib.h>
#include "main.h"

/**
* *create_array - creates an array of chars
*@size: size of array to create
*@c: char to intiliaze array c
*Return: pointer to arrray (success), NULL(error
**/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
