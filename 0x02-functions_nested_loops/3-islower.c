#include "main.h"
/**
 * _islower - check letter if lower case
 *
 *@c: parameter to check
 *
 * Return: 1 if lowercase o otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
