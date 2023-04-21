#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: count.
 * @argv: vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int count, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < num; count++)
	{
		printf("%02x", opc[count] & 0xFF);
		if (count != num - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
