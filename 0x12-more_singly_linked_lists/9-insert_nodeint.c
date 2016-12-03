#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at -inserts a new node at position
 *@index: unsigned int
 *@n: int
 *@head: double pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp, *temp2;
	unsigned int i;

	i =0;

	if (*head == NULL)
	{

		return (NULL);

	}
	temp2 = malloc(sizeof(listint_t));

	if (temp2 == NULL)
		return (NULL);
	temp2->n=n;
	if (index == 0)
	{
		temp2->next = *head;
		*head = temp2;
		return(temp2);
	}

	temp = *head;
	while (temp != NULL && i < index - 1 )
	{
		temp = temp->next;
		i++;

	}

	if (index - 1 > i)
	{
		free(temp2);
		return (NULL);
	}
	temp2->next = temp->next;
	temp->next = temp2;
	return (temp2);

}
