#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds a node
 *@head: beginning pointer of first node.
 *@str: pointer to the element
 *Return: returns address of the new node. Returns NULL is fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (temp->next);
}
