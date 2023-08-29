#include "lists.h"

/**
 * sum_listint - sum calc of data
 * @head: node first
 * Return: sum ans
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
