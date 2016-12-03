#include <stdio.h>
#include "lists.h"

/**
 *check_node - check for special nodes
 *@head: double pointer
 *@n: pointer to the value
 *
 *Return: pointer to new element
 **/

size_t check_node(listptr_t **head, const listptr_t *n)
{
	listptr_t *temp;

	temp = malloc(sizeof(listptr_t));
	if (temp == NULL)
	{
		free_node(*head);
		exit(98);
	}
	temp->store = (void *)n;
	temp->temp = *head;
	*head = temp;
	return (temp);
}

/**
 * free_node- free mem
 *@head: pointer tl a pointer
 *
 *
 *Return: void
 */
void free_node(listptr_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
 *print_listint_safe - prints linked list
 *@head: pointer
 *
 *
 *Return: num of elements
 **/
size_t print_listint_safe(const listint_t *head)
{
	listptr_t *temp, *new;
	size_t count;

	new = NULL;
	count = 0;
	while (head)
	{
		temp = new;
		while (temp)
		{
			if (temp->store == head)
			{printf("-> [%p] %d", &head, head->n);
				free_node(temp);
				return (count);
			}
			temp = temp->next;
		}
		printf("[%p] %d", &head, head->n);
		check_node(new, head);
		head =  head->next;
		count++;
	}
	free_node(new);
	return (count);
}
