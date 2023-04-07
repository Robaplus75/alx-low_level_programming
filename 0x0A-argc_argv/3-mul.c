#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: zero or one
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", product);

	return (0);
}
