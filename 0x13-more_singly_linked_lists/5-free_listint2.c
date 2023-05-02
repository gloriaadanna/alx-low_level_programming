#include "lists.h"
/**
 * free_listint2 - the main function of the program
 * that frees a listint
 * @head: a pointer to the address
 *
 * outcome: sets head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
