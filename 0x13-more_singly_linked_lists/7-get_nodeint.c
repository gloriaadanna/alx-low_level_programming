#include "lists.h"
/**
 * get_nodeint_at_index - the main function that returns
 * the nth node
 * @head: the first node
 * @index: the node to be returnewd
 *
 * outcome: return node when successful 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp &&  a < index)
	{
		tmp = tmp->next;
		a++;
	}
	return (tmp ? tmp : NULL);
}
