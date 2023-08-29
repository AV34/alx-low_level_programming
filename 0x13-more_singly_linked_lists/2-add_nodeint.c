#include "lists.h"

/**
 * add_nodeint - func of adding a new model at the beginn
 * @head: * to the first node
 * @n: date for the new node
 * Return: new node pointer or null is null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
