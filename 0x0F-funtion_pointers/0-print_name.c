#include "funtion_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: funtion pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
