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

	if (head == NULL)
		return (NULL);

	counter = 0;
	while (counter <  index && head != NULL)
	{

		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
}
