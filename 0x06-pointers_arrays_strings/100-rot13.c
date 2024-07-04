#include "main.h"

/**
*rot13 - encode a string using rot13
*@s: input string
*Return: the result
**/

char *rot13(char *s)
{
	int i = 0;
	int j;

	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
	j = 0;
		while (j < 52)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		j++;
		}
	i++;
	}
	return (s);
}
