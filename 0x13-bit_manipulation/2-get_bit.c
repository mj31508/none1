#include "holberton.h"
#include <stdio.h>

/**
 *get_bit - print
 *@n: check
 *@index: position
 *Return: bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
