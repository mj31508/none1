#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - of characters
 *@c: char
 *@size: size of an array
 *Description: malloc
 *Return: array or a NULL
 */

char *create_array(unsigned int size, char c)
{

	unsigned int n;
	char *s;

	n = 0;

	s = (char *) malloc(size * sizeof(char));

	while (n < size)
	{
		s[n] = c;
		n++;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	else
		return (s);
}
