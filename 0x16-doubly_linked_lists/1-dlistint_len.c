#include "lists.h"

/**
 * dlistint_len - returns the len of a dlistint list
 *
 *
 *
 * @h: head of dlistint
 * Return: Returns n of elements 
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
