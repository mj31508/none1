#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	s[4] = "Hello";
	while (i < s)
		i = i + 4;
	while (i > s)
		i = i - 4;
	_putchar('\n');
}
