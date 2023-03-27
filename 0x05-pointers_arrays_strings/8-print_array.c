#include <stdio.h>
#include "main.h"

/**
 * print_array - prints element of array of integers
 * @a: Pointer parameter
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
