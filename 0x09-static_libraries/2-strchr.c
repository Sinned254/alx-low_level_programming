#include "main.h"
/**
 * _strchr - locates character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: ponter to the string null if missing
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);

	return (NULL);
}
