#include "main.h"

/**
*_strlen - Return length of string
*@i : Counter
*Return : Value of the function
**/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
