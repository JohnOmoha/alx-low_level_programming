#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *  Description: prints lowercase alphabets
 *  Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
