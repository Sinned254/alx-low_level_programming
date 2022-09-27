#include "main.h"
/**
 * _strstr - locates substring
 *
 * @needle: string to search
 * @haystack: string where to search
 *
 * Return: pointer tor the beggining of located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int length;
	int begin = 0;

	for (length = 0; needle[length] != '\0'; length++)

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; i < length && haystack[j] == needle[i]; i++, j++)
		{
			if (i == 0)
			{
				begin = j;
			}
			if (i == length - 1)
			{
				return (haystack + begin);
			}
		}
	}
	return (NULL);
}
