#include "main.h"
/**
 * create_file - the main function of the program that 
 * creates a file
 * @filename: the file to be created
 * @text_content: the content written in the file
 * Return:1 (successful), otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, len);

	if (fd == -1 || b == -1)
		return (-1);
	close(fd);
	return (1);
}
