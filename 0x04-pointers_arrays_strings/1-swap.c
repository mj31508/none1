#include "holberton.h"
#include <stdio.h>
/**
 *swap_int -swaps the value of given integers
 *@a: given pointer
 *@b: given pointer
 *
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
