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
/**
 * main - main function
 * @argc: arguments
 * @argv: pointers
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int fro, be, t, a;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	t = read(fro, buffer, 1024);
	be = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do if (fro == -1 || t == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	a = write(be, buffer, t);
	if (be == -1 || a == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	t = read(fro, buffer, 1024);
	be = open(argv[2], O_WRONLY | O_APPEND);
	while (t > 0);

	free(buffer);
	close_file(fro);
	close_file(be);
	return (0);
}
