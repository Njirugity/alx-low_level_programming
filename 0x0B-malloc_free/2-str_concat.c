#include "main.h"
#include <stdlib.h>

/**
* *str_concat - concatenate two strings
*@s1: string to concatenate
*@s2: second string to concatenate
*Return: concatenated string
**/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		s3[i + len1] = s2[i];

	return (s3);
}
