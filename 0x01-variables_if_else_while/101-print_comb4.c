#include <stdio.h>

/**
 * main - combination of three digits
 * Return: returns 0
 */

int main(void)
{
	int firstd = '0';
	int secondd = '0';
	int thirdd = '0';

	for (thirdd = '0'; thirdd <= '9'; thirdd++)
	{
		for (secondd = '0'; secondd <= '9'; secondd++)
		{
			for (firstd = '0'; firstd <= '9'; firstd++)
			{
				if (!((firstd == secondd) || (secondd == thirdd) || 
							(secondd > firstd) || (thirdd > secondd)))
				{
					putchar(thirdd);
					putchar(secondd);
					putchar(firstd);
					if (!(firstd == '9' && thirdd == '7' && 
								secondd == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}		

