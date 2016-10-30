#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)

	{
		int name = 'a';

		while (name <= 'z')

		{
			_putchar(name);
			name++;
		}
		_putchar('\n');
		name++;
	}
}
