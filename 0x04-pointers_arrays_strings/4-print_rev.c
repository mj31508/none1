#include "holberton.h"

/**
 * main - write a function that reverses a stringl
 *@s: S is a pointer
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
