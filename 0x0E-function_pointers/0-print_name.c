#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: input function.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(f(name));
}
