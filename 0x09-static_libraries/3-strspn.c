#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string 2
 *
 * Return: segmented length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	unsigned int start = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		start = initial_length;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			initial_length++;
		}
		if (start == initial_length)
			break;
	}
	return (initial_length);
}
