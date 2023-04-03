#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
