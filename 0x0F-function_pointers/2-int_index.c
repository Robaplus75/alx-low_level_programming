#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for the integer
 * @array: the array
 * @size: size of the array
 * @cmp: points to the fnciton
 *
 * Return: count
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array && cmp)
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]) != 0)
				return (count);
		}
	}

	return (-1);
}
