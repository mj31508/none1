#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_t - adds a new node at the end of the struc
 *@head: a double pointer
 *
 *Return: The address of the new element of NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = malloc(sizeof(listint_t);
		      if (n == NULL)
			      return (NULL);
		      temp->n = n;
		      temp->next = NULL;
		      temp = *head;

		      if (*head == NULL)
		      {
			      *head = new;
			      return (*head);
		      }

		      while (new->next != null)
		      { temp = temp->next;
			temp->next = new;
		      }
		      return (temp->next);
}
