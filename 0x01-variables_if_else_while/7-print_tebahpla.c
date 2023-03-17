#include <stdio.h>
#include <stdlib.h>

/**
 * main - reverse alphabet
 *
 * Return: returns 0
 */

int main(void)
{
	int lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
