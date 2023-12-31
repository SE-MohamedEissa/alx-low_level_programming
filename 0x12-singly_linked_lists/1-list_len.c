#include "lists.h"

/**
 * list_len - count number of elements
 * @h: the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
