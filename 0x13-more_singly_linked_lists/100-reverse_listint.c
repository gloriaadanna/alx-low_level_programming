#include  "lists.h"
/**
 * reverse_listint - the main function thst 
 * reverses a listint_t linked list
 * @head: pointer
 *
 * outcome: return pointer when succesful
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_int *next = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}

