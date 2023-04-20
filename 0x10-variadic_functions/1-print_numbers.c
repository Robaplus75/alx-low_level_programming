#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @separator: its the comma
 * @n: number of arguments
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list nums;
		unsigned int i;

		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(nums, int));
				break;
			}
			printf("%d", va_arg(nums, int));
			printf("%s", separator);
		}
		printf("\n");
		va_end(nums);
	}
}
