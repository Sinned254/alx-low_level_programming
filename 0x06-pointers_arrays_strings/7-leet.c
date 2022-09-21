#include "main.h"
/**
 * leet - encodes a string
 * @s: string
 * Return: string encoded
 */
char *leet(char *s)
{
	int i, j;
	char *find;
	char *rep;

	find = "aeotl";
	rep = "43071";

	for (i = 0; find[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == find[i] || s[j] == (find[i] - 32))
				s[j] = rep[i];
		}
	}
	return (s);
}
