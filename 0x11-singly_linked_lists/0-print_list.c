#include "list.h"
#include <stdlio.h>

/**
 * print_list - prints out all of the elements of the list_t list
 *@h: the head of the linked list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t print;

	print = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		print++;
	}
	return (count);
}
