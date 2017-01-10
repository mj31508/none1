#include "lists.h"
/**
 * sum_dlistint - adds n to node
 * @head: node
 * Return: head
 */
int sum_dlistint(dlistint_t *head)
{
	int Sum;

	Sum = 0;
	while (head)
	{
		Sum += head->n;
		head = head->next;
	}
	return (Sum);
}
