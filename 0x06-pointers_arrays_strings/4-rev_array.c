#include "main.h"
/**
 * reverse_array - reverse z array
 * @a: Pointer
 * @n: Another Pointer
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int k, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		k = a[count];
		a[count++] = a[n];
		a[n--] = k;
	}
}
