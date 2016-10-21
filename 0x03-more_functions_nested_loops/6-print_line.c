#include "holberton.h"

/**
 * print_line - write a function that draws a straight line.
 *
 *@n: integer
 *Return: Always 0.
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');

		i = i + 1;
	}
	_putchar('\n');

	}
