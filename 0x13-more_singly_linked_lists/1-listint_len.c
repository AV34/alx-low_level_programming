#include "lists.h"

/**
 * listint_len - fun that output the num of elem of linked list
 * @h: type linked list
 * Return: nodes num
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
{
	num++;
	h = h->next;
}

	return (num);
}
