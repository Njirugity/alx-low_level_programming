#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low;
	size_t high;
	int mid;

	low = 0;
	high = size;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			if (i == high - 1)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
