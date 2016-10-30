#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 * print lowercase use only_p...
 *Return: void
 */
void print_alphabet(void)
{
	int num = 0;
	while (num < 10)
	{
		int name = 'a';
		while (name <= 'z')
		{
			putchar(name);
			name++;
		}
		putchar('\n');
		name++;
	}
}
