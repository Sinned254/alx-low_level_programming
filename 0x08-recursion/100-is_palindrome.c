#include "main.h"
int _strlen_recursion(char *);
/**
 * is_palindrome - checks sting if it is a palindrome
 *
 * @s: palindrome
 *
 * Return: 1 if yes o if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (rev(s, 0, len - 1));
}

/**
 * rev - use to check palindrome
 *
 * @s: string
 * @low: start
 * @hi: end
 *
 * Return: as per is_palindrome
 */
int rev(char *s, int low, int hi)
{
	if (low >= hi)
		return (1);

	if (*(s + low) != *(s + hi))
	{
		return (0);
	}
	else
	{
	return (rev(s, low + 1, hi - 1));
	}
}

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
