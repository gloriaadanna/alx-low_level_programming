#include "lists.h"
/**
 * add_nodeint - the main functioon of the program that adds
 * a new node to the linked list at the beginning
 * @n: the data to be inserted
 *
 * Return: the pointer to the new node when succesful
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


