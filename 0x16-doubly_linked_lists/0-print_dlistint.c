#include "lists.h"

/**
 * print_dlistint - elements
 * @h: pointer to list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *temp;

	temp = h;
	count = 0;
	if (temp)
	{
		while (temp->next)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			count++;
		}
		printf("%d\n", temp->n);
		count++;
	}
	return (count);
}
