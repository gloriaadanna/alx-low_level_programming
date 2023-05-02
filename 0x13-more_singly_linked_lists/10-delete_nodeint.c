#include "lists.h"
/**
 * delete_nodeint_at_index - the main function of the prgram
 * that deletes the node at index
 * @head: pointer
 * @index: index
 *
 * outcome: when successful, return 1
 * otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *tmp = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	if (*head == NULL)
		return (-1);
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
