#include "main.h" 
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - the main function of the program that
 * allocates bytes
 * @file: the filename
 * Return: a pointer when successful
 */
char *create_buffer(char *file)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n",  file);
		exit(99);
	}
	return (buffer);
}  
/**
 * close_file - the main functioj of the program that 
 * closes file
 * @fd: file
 */
void close_file(int f)
{
	int b;
	b = close(f);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close f %d\n", f);
		exit(100);
	}
}

