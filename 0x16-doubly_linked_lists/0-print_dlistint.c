#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h) //print all elements of dlistint_t
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
