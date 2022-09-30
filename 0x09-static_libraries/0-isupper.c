#include "main.h"
/**
 * _isupper - check if char is uppercase
 *
 * @c: character to be examined
 *
 * Return: 1 if true 0 other wise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
