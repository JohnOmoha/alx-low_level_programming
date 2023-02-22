#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * h = hour, m = minutes
 * h = hour, m = minutes
 * h = hour, m = minutes
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar(b + '0');
				_putchar('\n');
			}
		}
	}
}

