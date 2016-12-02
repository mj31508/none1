#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *delete_nodeint_at_index - deleting a node
 *@head: double pointer
 *@index: index
 *Return: Returns 1 if won, return -1 is lost
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *tempp;

	unsigned int i;

	if (*head == NULL)
		return (-1);
	i = 0;

	tempp = *head;

	if (i == index)
	{
		*head = (*head)->next;
		free(tempp);
		return (1);
	}

	while (tempp != NULL && i < index)
	{
		tempp = tempp->next;
		i++;

		if (tempp == NULL)
			return (-1);
	}
	temp = tempp;
	temp = temp->next;
	tempp->next = temp->next;
	free(temp);
	return (1);
}
