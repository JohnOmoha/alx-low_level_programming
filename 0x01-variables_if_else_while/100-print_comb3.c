#include <stdio.h>
#include <unistd.h>
/**
* main - Entyr point
* Description: prints two digits combination
* Return: Always 0 (success)
*/
int main(void)
{
	int c, i;

	for (c = 0; c <= 8; c++)
	{
		for (i = c + 1; i <= 9; i++)
		{
			putchar(c + '0');
			putchar(i + '0');

			if (c < 8 || i < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
