#include "main.h"
/**
 * set_string - sets value of a pointer toa string
 *
 * @s: pointer to pointer
 * @to: pointer to a sting
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
