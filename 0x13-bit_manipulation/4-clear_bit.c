#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *clear_bit - set valueof bit
 *@n: int
 *@index: index
 *
 *Return: 1 or -1
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = (*n) & ((1 << index));
	return (1);
}
