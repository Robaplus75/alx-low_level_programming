#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z' + 1)
	{
		putchar(i);
		i++;
	}
	return (0);
}
