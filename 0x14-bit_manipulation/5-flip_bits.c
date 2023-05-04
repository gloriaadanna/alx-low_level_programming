#include "main.h"
/**
 * flip_bits - the main function of the program that
 * returns the number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int old = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = old >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
