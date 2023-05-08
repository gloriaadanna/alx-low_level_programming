#include "main.h"
/**
 * append_text_to_file - the main function of the prograkm that
 * appends text
 * @filename: a pointer
 * @text_content: the string of the text
 * Return: -1 unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
