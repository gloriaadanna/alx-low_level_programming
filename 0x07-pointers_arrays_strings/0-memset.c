#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be charged
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

