#include "main.h"

/**
 * str_concat - concat two strings
 *
 * @s1: string 1
 * @s2: string two
 *
 * Return: poiter to concatined string, null on emty of failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, tot_len, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	tot_len = len1 + len2;

	str = (char *) malloc((sizeof(char) * tot_len) + 1);
	if (str == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < tot_len; i++)
	{
		if (i < len1)
		{
			str[i] = s1[i];
		}
		else if (i >= len1)
		{
			str[i] = s2[j];
			j++;
		}
	}
	str[tot_len] = '\0';
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
