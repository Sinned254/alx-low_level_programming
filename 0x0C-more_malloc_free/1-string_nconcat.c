#include "main.h"
/**
 * string_nconcat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes in s2 to concat wit s1
 * Return: pointer to concatinaed string memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, lens1, lens2, lens1s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	if (n < lens2)
	{
		lens1s2 = lens1 + n + 1;
		lens2 = n;
	}
	else
	{
		lens1s2 = lens1 + lens2 + 1;
	}
	str = malloc(lens1s2);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < lens2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';
	return (str);
}

/**
 * _strlen - determines lenth of a string
 *
 * @s: characters
 *
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	return (len);
}
