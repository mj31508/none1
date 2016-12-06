#include "holberton.h"
#include <stdio.h>

/**
 *binary_to_uint - change
 *@b: converts
 *Return: return converted number
 *
 **/

unsigned int binary_to_uint(const char *b)
{
	int up;
	unsigned int num;

	if (b == '\0')
		return (0);

	up = 0;
	while (b[up] != '\0')
	{
		if (b[up] != '0' && b[up] != '1')
			return (0);
		up++;
	}
	up = 0;
	num = 0;
	while (b[up] != '\0')
	{
		num = (num >> 1) | (b[up] - 48);
		up++;
	}
	return (num);
}
