#include "main.h"

/**
 * get_endianness - checks if a machine is little or if its big
 * Return: 0 if  big, 1 if  little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

