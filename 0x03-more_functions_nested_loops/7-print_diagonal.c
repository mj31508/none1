#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line.
 *@n: is the size of the diagonal
 * Return: Void .
 */
void print_diagonal(int n)
{
	int i, m;

	i = 0;

	m = 0;

	while (i < n)
	{
		m = 0;
		while (m < i)
		{
			m = m + 1;
			_putchar(' ');
		}
		_putchar('\\');
		i = i + 1;
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
