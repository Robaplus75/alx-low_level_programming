#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 0-10
 *
 * Return: returns 0
 */

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);

}
