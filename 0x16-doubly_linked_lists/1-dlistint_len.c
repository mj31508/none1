#include "lists.h"
/**
 * dlistint_len -  length of the list
 * @h:  head of the list
 * Return: N items in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
