#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;
	length =0;
	while (*s ! = '/0')
	{
		length++;
		*s++;
	}
	return (length);
}
