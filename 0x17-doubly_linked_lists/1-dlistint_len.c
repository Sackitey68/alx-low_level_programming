#include "lists.h"
/**
 * dlistint_len - count all the elements of a dlistint_t list
 * @h: node of doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	for (; h; h = h->next, j++)
		;
	return (j);
}
