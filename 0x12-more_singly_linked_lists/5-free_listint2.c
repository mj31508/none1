#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_t - free the list
 *@head: double pointer
 *
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	free_listint2 *temp, *new;

	while (*head != NULL)
	{
		temp = *head;
		*head = **head->next;
		free(temp);
	}
}
