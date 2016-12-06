#include "holberton.h"
#include <stdio.h>

/**
 *print_binary - converts
 *@n: changing integer
 *Return: something
 **/

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	if (n > 1)
	{
		print_binary(n >> 1);
		if ((n & 1) ! = 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
