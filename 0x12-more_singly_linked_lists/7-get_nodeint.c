#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *get_nodeint_at_index - move the nth
 *@index: index of the struct
 *@head: head pointer
 *Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	while (counter <  index)
	{

		head = head->next;
		counter++;
	}
	return (head);
}
