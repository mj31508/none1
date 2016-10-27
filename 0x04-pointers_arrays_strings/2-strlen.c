#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string.
 *@s:pointer to the array character.
 * Return: Returning i.
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
