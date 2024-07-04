#include "main.h"

/**
*leet - switch letters to numbers
*@s: string to switch
*Return: switched string
**/

char *leet(char *s)
{
	int i = 0;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (s[i] != '\0')
	{
	j = 0;
		while (j < 10)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		j++;
		}
	i++;
	}
	return (s);

}
