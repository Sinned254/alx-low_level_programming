#include "main.h"
/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: string
 * @accept: string 2
 *
 * Return: segmented section pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
