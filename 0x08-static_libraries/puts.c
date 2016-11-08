#include "holberton.h"

/**
 * _puts - prints a string, followed by a newline, to stdout
 *
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}