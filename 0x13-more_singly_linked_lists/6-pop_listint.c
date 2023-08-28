#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to first element in the linked list
 *
 * Return: the data inside the elements that where deleted,
 * or 0 when the list is empty
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
