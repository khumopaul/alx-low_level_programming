#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements returns in linked list
 * @h: list_t list by pointer
 *
 * Return: in h for number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
