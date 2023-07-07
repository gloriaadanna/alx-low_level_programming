#include "main.h"
#include <stdio.h>

/**
 * clear_bit - value of agiven bit is set to 0
 * @n: pointer
 * @index: index of the bit
 * Return: 1  success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
