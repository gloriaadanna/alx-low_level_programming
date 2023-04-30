#include "lists.h"
/**
 * free_listint - the main function of the program that 
 * frees a linked list
 * @head: the linked list to free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
