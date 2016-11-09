#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - initializes array with malloc and fills it with c
 *
 * @size: unsigned int, size of array
 * @c: char to populate array with
 * Return: pointer to start of char array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
