#include "lists.h"

/**
 * free_listint - linked_list free
 * @head: linked_list to be free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
{
	temp = head->next;
	free(head);
	head = temp;
}
}
