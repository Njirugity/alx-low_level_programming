#include "main.h"

/**
*_strncpy - Copies a string
*@dest: destination variable
*@src: source variable
*@n: number of bytes
*Return: Copied string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
