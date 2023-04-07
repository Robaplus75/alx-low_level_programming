#include <stdio.h>
#include "main.h"
/**
 * main - tells the number of arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: zero
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
