#include "main.h"

/**
*_strcmp - compare two strings
*@s1: first string
*@s2: second string
*Return: 0 if string is the same and difference if strings are not same
**/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
