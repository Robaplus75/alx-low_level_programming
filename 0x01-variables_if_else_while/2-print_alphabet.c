#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	return (0);
}
