#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t list_len(const list_t *h);
{
	size_t numbers;

	numbers = 0;
	while (h != NULL)
	{
		numbers++;
		h = h->next;
	}
	return (numbers);
}
