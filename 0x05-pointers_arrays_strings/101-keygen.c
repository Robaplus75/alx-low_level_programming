#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password generator
 * Return: 0
 */
int main(void)
{
	int k, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		k = (rand() % 128);
		sum += k;
		printf("%c", k);
	}

	printf("%c", 2772 - sum);

	return (0);
}
