#include "search_algos.h"

/**
 * linear_search - searches for the value using linear search
 * @array: the array to be searched i
 * @size: size of the array
 * @value: the value to be searched
 * Return: the index that is found at, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
