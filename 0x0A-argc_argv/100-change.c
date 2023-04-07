#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins
 * @argc: number of argumetns
 * @argv: arguments
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int position = 0;
	int t = 0;
	int change = 0;
	int a = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coin[position] != '\0')
	{
		if (t >= coin[position])
		{
			a = (t / coin[position]);
			change += a;
			t -= coin[position] * a;
		}

		position++;
	}
	printf("%d\n", change);

	return (0);
}
