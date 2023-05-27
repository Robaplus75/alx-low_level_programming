#include <stdio.h>

/**
 * main - prints prime factors
 * Return: zero
 */

int main(void)
{
	unsigned long int count = 3;
	unsigned long int num = 612852475143;

	for (; count < 12057; count += 2)
	{
		while (num % count == 0 && num != count)
			num /= count;
	}
	printf("%lu\n", num);
	return (0);
}
