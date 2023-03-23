#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character ton print
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
