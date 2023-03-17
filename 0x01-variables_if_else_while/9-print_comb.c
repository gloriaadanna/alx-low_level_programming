#include <stdio.h>

/**
 * main - print all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; n < 10; i++)
	{
		if (i ==9)
			putchar(i + '0');
		else
		{
	         	putchar(i + '0');
		        putchar(',');
	         	putchar(' ');
		}
	}
	return (0);
}
