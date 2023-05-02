#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and print how many days are left in the year, taking leap years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, dqayq, year);

	return (0);
}
