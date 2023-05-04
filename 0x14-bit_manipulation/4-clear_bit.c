#include "main.h"
/**
 * clear_bit - the main function of the program 
 * that sets the value of a bit
 * @n: pointer
 * @index: index
 *
 * Return: 1 when successful otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (-(1UL << index) & *n);
	return (1);
}
