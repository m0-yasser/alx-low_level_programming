#include "main.h"
#include <stdio.h>

/**
 * _islower -  function that checks for lowercase character
 * @c: character to check
 * Return: 1 if c is lower case and 0 if c is upper case
 */
int  _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
