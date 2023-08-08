#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++
	}
	printf("\n");
}
