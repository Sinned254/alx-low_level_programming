#include "main.h"
/**
 * _isalpha - checks and detrmine if character is alphabet
 *@c: parameter to be examined
 *
 * Return: 1 if true 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
