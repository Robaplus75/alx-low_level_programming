#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
