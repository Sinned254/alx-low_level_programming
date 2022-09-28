#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		s++;
		len = 1 + _strlen_recursion(s);
		return (len);
	}
	else
	{
	return (0);
	}
}
