#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the required array
 * @c: the charachter tobe initialized
 * Return: the new array
 */

char *create_array(unsigned int size, char c)
{
	char *temp;

	if (size == 0)
	{
		return (NULL);
	}
	temp = malloc(size);
	for (int i = 0; i < size; i++)
	{
		temp[i] = c;
	}
	return (temp);
}
