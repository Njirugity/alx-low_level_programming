#include "main.h"

/**
*swap_int - Swap values of 2 variables
*@a : First value to be swapped
*@b : Second value to be swapped
**/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
