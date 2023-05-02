#include "lists.h"
/**
 * pop_listint - the main function of the program that
 * deletes the head node
 * @head: pointer
 *
 * outcome: return the data when successful
 * and o when empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int alpha;

	if (!head || !*head)
		return (0);

	tmp = (*head)->next;
	alpha = (*head)->n;
	free(*head);
	*head = tmp;

	return (alpha);
}
