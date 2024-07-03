#include "main.h"

/**
*string_toupper - change lowercase string to uppercase
*@s: string to convert
*Return: return resulting string
**/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
