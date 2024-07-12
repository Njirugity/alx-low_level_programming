#include "main.h"

/**
*_strlen - Return length of string
*@s : String to check
*Return: Length of string
**/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
