#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet
 *
 * Return: returns 0
 */

int main(void)

{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'e') && (lower != 'q'))
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
