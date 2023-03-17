#include <stdio.h>

/**
 * main - prints 0-9
 *
 * Return: returns 0
 *
 */

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);

}
