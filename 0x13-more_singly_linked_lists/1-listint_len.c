#include "lists.h"

/**
 * listint_len - return # of elements
 * @h: pointer to the first element
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int y;

	for (y = 0; h; h = (*h).next, y++)
		;

	return (y);
}
