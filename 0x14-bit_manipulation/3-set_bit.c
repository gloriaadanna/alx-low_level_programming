#include "main.h"
/**
 * set_bit - the main function of the program 
 * that sets the value of a bit
 * @n: pointer
 * @index: index of the bit
 *
 * Return: 1 when successful otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
