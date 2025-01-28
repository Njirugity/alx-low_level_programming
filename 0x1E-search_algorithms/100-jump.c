#include "search_algos.h"
/**
 * jump_search - searches for a value in an array using Jump search algorithm
 * @array: pointer to first elemement of an array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int i, k;
	size_t m, n;

	m = sqrt(size);
	k = m;
	n = 0;

	while (array[m] <= value && m < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);

		n = m;
		m += k;

		if (m > size - 1)
			return (-1);
	}

	printf("Value found betweeen indexes [%ld] and [%ld]\n", n, m);

	for (i = n; n < m; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
