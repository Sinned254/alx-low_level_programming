#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int ch, i;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
}
