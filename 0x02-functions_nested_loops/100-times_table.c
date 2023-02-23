#include "main.h"
#include <stdio.h>
/**
 * print_times_table -> prints times table for numbers
 * @n: an input intger value
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0 && n != 0)
					printf("0, ");
				else if (j == 0 && n == 0)
					printf("0\n");
				else if (j == n)
					printf("%3d", (i * j));
				else
					printf("%3d, ", (i * j));
			}
			printf("\n");
		}
	}
}
