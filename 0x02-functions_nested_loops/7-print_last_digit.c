#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last, d;

	if (n < 0)
	{
		d = -(n);
	}
	else
	{
		d = n;
	}
	last = d % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar('0' + last);
	return (last);
}
