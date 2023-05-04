#include "main.h"
#include <unistd.h>

/**
 * _putchar - the program that writes the character c
 * @c: the character to be printed
 *
 * outcome: 1 when successful, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
