#include "lists.h"

/**
 * add_nodeint - adds a new node in the beginning of a linked list
 * @head: pointer to first node in the list
 * @n: a data to insert in that new node
 *
 * Return: pointer to new node, or NULL if it does fails
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
