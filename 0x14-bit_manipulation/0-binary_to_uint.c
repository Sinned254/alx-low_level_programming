#include "main.h"
int power(int, int);
int _strlen(const char *s);
/**
 * binary_to_uint - convert character of 1 and 0 to a decimal number
 * @b: pointer to char
 * Return: coverted number or null if null or other chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len, i, exp;

	if (b == NULL)
		return (0);
	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		exp = len - i - 1;
		num += (b[i] - '0') * power(2, exp);
	}
	return (num);
}
/**
 * power - finds power of a number
 * @base: base number
 * @exp: exponent
 * Return: results
 */
int power(int base, int exp)
{
	int i, res;

	res = 1;
	i = 0;
	while (i < exp)
	{
		res *= base;
		++i;
	}
	return (res);
}
/**
 * _strlen - determines lenth of a string
 *
 * @s: characters
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	return (len);
}
