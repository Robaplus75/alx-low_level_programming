#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - acts aon array elements
 * @array: the array
 * @size: size of array
 * @action: the function
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (!array || !action)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
