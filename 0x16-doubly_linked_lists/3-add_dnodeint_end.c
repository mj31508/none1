#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a dlist
 *
 * @head: h node
 * @n: n to add to new node
 * Return: Return or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *step;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		step = *head;
		while (step->next != NULL)
		{
			step = step->next;
		}
		step->next = new;
		new->prev = step;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
