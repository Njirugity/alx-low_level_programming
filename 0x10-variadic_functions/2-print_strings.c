#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - prints numbers
*@separator: string to be printed between numbers
*@n: number of intergers passed
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(args);
}
