#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	str = "I am a string";
	_puts(str);
	putchar('\n');
	return (0);
}
