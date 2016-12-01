#include <stdlib>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *listint_t - Returns the number of elements in listint_t
 *@h: pointer to a structure
 *
 *Returns: n
 */

size_t listint_len(const listint_t *h)
{
	size_t numbers;

	numbers = 0;

	while (h != NULL)
	{
		numbers++;
		h = h -> n;
	}
	return (numbers);
}
