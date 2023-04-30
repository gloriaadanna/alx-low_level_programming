#include "lists.h"
/**
 * free_listint - the main function of the program that 
 * frees a linked list
 * @head: the linked list to free
 */

void free_listint(listint_t *head)
{
	listint_t *tail;

	while (head)
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
