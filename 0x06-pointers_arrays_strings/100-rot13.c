#include "main.h"
/**
 * rot13 - encodes a string using rot 13
 * @s: string
 * Return: encodes string
 */
char *rot13(char *s)
{
	int i, j;
	int match;
	char *aa;

	aa = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; aa[j] != '\0'; j++)
		{
			if (s[i] == aa[j])
			{
				match = ((j + 13) % 26) + ((j / 26) * 26);
				s[i] = aa[match];
			}
		}
	}
	return (s);
}

