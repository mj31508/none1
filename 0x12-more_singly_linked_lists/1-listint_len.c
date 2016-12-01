#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *listint_len - Returns the number of elements in listint_t
 *@h: pointer to a structure
 *
 *Return: n
 */

size_t listint_len(const listint_t *h)
{
	size_t numbers;

	numbers = 0;

	while (h != NULL)
	{
		h = h->next;
		numbers++;

	}
	return (numbers);
}
