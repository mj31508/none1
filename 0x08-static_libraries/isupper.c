#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 *@c: c is what we are checking for
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
