#include "main.h"
/**
 * cap_string - coverts string words from lowercase to uppercase
 * @s: string or to be converted
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ';')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '!' || s[i] == '?' || s[i] == ',' || s[i] == '.')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '}')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}

	}
	return (s);
}

