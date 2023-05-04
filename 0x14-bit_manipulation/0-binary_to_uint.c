#include "main.h"
/**
 * binary_to_uint - the main function of the program
 * that converts a binary to an unsigned int
 * @b: the string that contains the binary number
 *
 * Return: converted number of the program
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bin_un = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bin_un = 2 * bin_un + (b[i] - '0');
	}
	return (bin_un);
}
