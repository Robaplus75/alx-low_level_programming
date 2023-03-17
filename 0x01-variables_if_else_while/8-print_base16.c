#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers of base 16 in lowercase
 *
 * Return: returns 0
 */

int main(void)
{
	int x = '0';
	char letter = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
