#include<stdio.h>

/**
 * swap_int - swaps integers
 * @m: first number
 * @j: Second number
 * Return: none
*/

void swap_int(int *m, int *j)
{
	int a;
	int b;

	a = *m;
	b = *j;
	*m = b;
	*j = a;

}
