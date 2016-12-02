#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - pop lock and drop it
 *@head: ......
 *
 *Return: none
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int keep;

	temp = *head;
	if (temp == NULL)
		return (0);
	keep = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (keep);
}
