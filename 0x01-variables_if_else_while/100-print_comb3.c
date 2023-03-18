#include <stdio.h>

/**
 * main -digit combinations
 *
 * Return: reuturns 0
 *
 */

int main(void)

{
	int firstd = '0';
	int secondd = '0';
	
	for (secondd = '0'; secondd <= '9'; secondd++)
	{
		for (firstd = '0'; firstd <= '9'; firstd++)
		{
			if (!((firstd == secondd) || (secondd > firstd)))
			{
				putchar(secondd);
				putchar(firstd);
				if (!(firstd == '9' && secondd == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return (0);

}
