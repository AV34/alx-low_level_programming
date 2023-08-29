#include "lists.h"

/**
 * pop_listint - node head deletion
 * @head: first element *
 * Return: deleted element
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
