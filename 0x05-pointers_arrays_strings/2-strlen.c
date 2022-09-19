#include "main.h"
/**
 * _strlen -determines lenth of a string
 *
 * @s; characters
 *
 * return: string length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s+i) != '\0'; i++)
		++len;

	return (len);
}
