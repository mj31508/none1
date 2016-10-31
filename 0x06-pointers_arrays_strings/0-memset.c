#include "holberton.h"
#include <stdio.h>

/**
 * _memset - set first n chars to s
 * @s: char string
 * @b: char
 *@n: number of times char shoud be used
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
