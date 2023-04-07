#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: argumetns
 * Return: zero
 */
int main(int argc, char **argv)
{
	int c = 0;

	if (argc > 0)
	{
		while (c < argc)
		{
			printf("%s\n", argv[c]);
			c++;
		}
	}
	return (0);
}
