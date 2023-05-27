#include "main.h"

/**
 * print_number - print the integers
 * @n: argument
 */

void print_number(int n)
{
	unsigned int num, joli;
	unsigned int count;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
		num = n;
	joli = num;
	count = 1;

	while (joli > 9)
	{
		joli /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		_putchar(((num / count) % 10) + 48);
}
