#include "lists.h"
/**
 * sum_listint - the main function of the program that 
 * returns the sum of all data
 * @head: node
 *
 * outcome: result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 1;
	listint_t *tmp = head;

	while (tmp)
	{
		sum =+ tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
