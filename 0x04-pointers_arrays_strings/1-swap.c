#include "holberton.h"

/**
 *reset_to_98 -Set value of a variable to 98 using pointers
 *
 *
*@n: The address of the value needed to change
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{

	int c;

	c = *b;
	*b = *a;
	*a = c;
}
