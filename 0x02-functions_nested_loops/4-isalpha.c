#include "main.h"

/**
 * _isalpha - test for alphabet
 * @c: the character to check
 * Return: 1 if the character is english and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
