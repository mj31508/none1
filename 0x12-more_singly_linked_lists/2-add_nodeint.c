#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_t - adds a new node at the beginning
 *@head:pointer of a pointer to the first element
 *
 *Return: New element or NULL is failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return NULL;
		temp -> h = h;
		temp -> next = *head;
		head = new;


	}
	return (new);
}
