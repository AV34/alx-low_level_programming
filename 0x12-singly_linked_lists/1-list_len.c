#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this func get the return of num of elements in a link_list
 * @h: list pointer
 * Return: num of elem in @h
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
