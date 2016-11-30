#include "lists.h"
#include <stdio.h>
/**
 *print_list - goes through a linked list and prints its elements
 *@h: a pointer to a struct
 *Returns: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}