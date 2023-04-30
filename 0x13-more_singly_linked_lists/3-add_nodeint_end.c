#include "lists.h"
/**
 * add_nodeint_end - the main function of the program
 * that adds a node of a linked list at the end
 * @n: the data to be inserted
 *
 * Return: pointer to be returned to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!head)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
