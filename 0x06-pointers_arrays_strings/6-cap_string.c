#include "main.h"
/**
 * cap_string - coverts string words from lowercase to uppercase
 * @s: string or to be converted
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int prec;

	for (i = 0; s[i] != '\0'; i++)
	{
		prec = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[prec] == ' ' || s[prec] == '\n' || s[prec] == '\t' || s[prec] == ';')
				s[i] = s[i] - 32;
			else if (s[prec] == '!' || s[prec] == '?' || s[prec] == ',' || s[prec] == '.')
				s[i] = s[i] - 32;
			else if (s[prec] == '"' || s[prec] == '(' || s[prec] == ')' || s[prec] == '{')
				s[i] = s[i] - 32;
			else if (s[prec] == '}')
				s[i] = s[i] - 32;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}

	}
	return (s);
}

