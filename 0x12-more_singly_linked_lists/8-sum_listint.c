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
	int num;

	num = 0;
	while (head)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
