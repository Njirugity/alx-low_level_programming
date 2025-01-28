#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array using interpolation
 * search algorithm
 * @array: pointer to first elemement of an array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high, mid, index;

	low = 0;
	high = size - 1;
	mid = index = -1;

	while (low <= high)
	{
		mid = low + ((high - low) /
					 (array[high] - array[low]) * (value - array[low]));
		if (mid < (int)size - 1)
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", mid);
			break;
		}
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}
	return (index);
}
