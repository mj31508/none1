#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alpha;
	char max = 'a';

	alpha = 1;
	max = 'a';
	while (alpha < 27)
	{
		alpha = alpha + 1;
		_putchar(max);
		max = max + 1;
	}
	_putchar('\n');
}
