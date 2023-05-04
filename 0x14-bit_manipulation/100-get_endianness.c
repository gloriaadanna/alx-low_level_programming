#include "main.h"
/**
 * get_endianness - the main function of the program
 * that checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
