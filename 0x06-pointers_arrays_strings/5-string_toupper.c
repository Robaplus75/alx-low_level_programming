#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @word: Pointer to string
 *
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *word)
{
	int len = 0;

	while (word[len] != '\0')
	{
		if (word[len] >= 97 && word[len] <= 122)
		{
			word[len] = word[len] - 32;
		}
		len++;
	}
	return (word);
}
