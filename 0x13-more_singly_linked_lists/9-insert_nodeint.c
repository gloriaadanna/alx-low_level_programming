#include "lists.h"
/**
 * insert_nodeint_at_index - the main function of the program that
 * inserts a new node
 * @head: pointer
 * @idx: index
 * @n: data
 *
 * outcome: return pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || head)
		return (NULL);
	new->next = NULL;

	IF (idex == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else tmp = tmp->next;
	}
	return (NULL);
}

