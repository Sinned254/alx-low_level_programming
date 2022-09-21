#include "main.h"
/**
 * string_toupper - coverts string from lowercase to uppercase
 * @s: string or character to be converted
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

