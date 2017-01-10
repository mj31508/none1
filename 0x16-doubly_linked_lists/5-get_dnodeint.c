#include "lists.h"
/**
 * get_dnodeint_at_index - node
 * @head: node
 * @index:  index node
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m_index;

	m_index = 0;
	if (!head)
		return (NULL);
	while (m_index < index)
	{
		m_index++;
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
