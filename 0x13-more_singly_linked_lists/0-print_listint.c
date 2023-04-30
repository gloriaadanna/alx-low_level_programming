#include "lists.h"
/**
 * print_listint - main function of the program
 * which prints all element of a linked list
 * @h: type of linked list to print
 *
 * Return: the number of nodes when successful
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h-f);
		num++;
		h = h->forward;
	}
	return (num);
}
