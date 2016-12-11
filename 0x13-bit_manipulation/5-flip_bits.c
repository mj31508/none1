#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - flip
 *@n: 1st
 *@m: 2nd
 *Return: num of bits
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int much;
	unsigned long int temp;

	much = 0;
	temp = n ^ m;
	for (; temp > 0; temp >>=1)
	{
		if ((temp & 1) == 1)
			much++;
	}
	return (much);
}
