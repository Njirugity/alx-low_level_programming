#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n < len2)
		a = malloc(sizeof(char) * (len1 + n + 1));
	else
		a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (a == NULL)
		return (NULL);

	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			a[i] = s1[i];
		for (i = 0; s1[i] != '\0'; i++)
			a[i + len1] = s2[i];
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			a[i] = s1[i];
		for (i = 0; i < n; i++)
			a[i + len1] = s2[i];
		a[i + len1] = '\0';
	}
	return (a);
}
