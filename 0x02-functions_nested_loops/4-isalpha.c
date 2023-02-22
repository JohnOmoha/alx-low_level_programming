#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: the char to be checked
 *Return: 1 if char is letter (lower or uppercase), 0 otherwise
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

