#include "lists.h"

/**
 * free_dlistint - free
 *
 * @head: h of dlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *step;

	while (head != NULL)
	{
		step = head;
		head = head->next;
		free(step);
	}
}
