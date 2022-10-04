#include "main.h"
/**
 * argstostr - concatenates all arguments of a programs
 *
 * @ac: arguments count
 * @av: arguments vetcor
 *
 * Return: pointer to concatinated string
 */
char *argstostr(unsigned int ac, char **av)
{
	unsigned int i, j, k, l;
	char *ptr;

	if ((ac == 0) || av == NULL)
	{
		return (NULL);
	}

	l = 0;
	i = 0;

	while (i < ac)
	{
		l = l + _strlen(av[i]) + 1;
	}
	ptr = (char *) malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
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
