#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - adds a node to the end
 *@head: pointer
 *Return: none.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
