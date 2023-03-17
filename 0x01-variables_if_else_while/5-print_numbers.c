#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 0-10
 *
 * Return: returns zero
 */

int main(void)

{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);

}
