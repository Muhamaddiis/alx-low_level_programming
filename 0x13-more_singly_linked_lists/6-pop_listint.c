#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head nodes's data
 */
int pop_listint(listint_t **head)
{
	int moh;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	moh = curr->n;

	free(curr);

	*head = h;

	return (moh);
}
