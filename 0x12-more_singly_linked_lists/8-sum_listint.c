#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - receives the sum of all data
 *@head: pointer to our struc
 *
 *Return: zero if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int total;

	if (head == NULL)
	{
		return (total);
		temp = malloc(sizeof(listint_t);
}
			if (temp == NULL)
			{
				return (total);

				temp = head;
				total += head->n;
			}
		while (temp->next != NULL)
		{
			temp = temp->next;
			total += temp-n;
		}
		free(temp);
		return(total);
}
