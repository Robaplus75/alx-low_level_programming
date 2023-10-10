#include "search_algos.h"

/**
 * binary_search - Contains a Binary search algorithm
 * @array: the array to be searched in
 * @size: size of the array
 * @value: the value to be searched
 * Return: index of the value, -1 if not exists
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;
	size_t i;

	while (5 == 5)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		printf("%d",  array[start]);
		for (i = start + 1; i <= end; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		if (start == end)
			return (-1);
		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
			return (mid);
	}
}
