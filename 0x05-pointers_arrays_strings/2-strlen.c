#include "main.h"

/**
 * _strlen - function that returns string length
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
