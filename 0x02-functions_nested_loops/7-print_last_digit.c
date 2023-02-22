#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the number to be treated
 * Return: value of the last digit of number
 */

int print_last_digit(int r)
{
	int last;

	if (r < 0)
		last = -1 * (r % 10);
	else
		last = r % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
