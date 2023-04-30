#include "lists.h"
/**
 * listint_len - the main function of the program that returns
 * the number of elements
 * @h: type of linked list
 *
 * Return: the number of nodes when successful
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

