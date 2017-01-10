#include "lists.h"

/**
 * print_dlistint - doubly linked
 *
 *
 * @h: dlistint_t head
 * Return: Returns n elements in dlistin_t
 ****/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
