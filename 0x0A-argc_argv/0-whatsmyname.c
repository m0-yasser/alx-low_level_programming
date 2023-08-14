#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: number of arguments
 * @argv: array of pointers args stored in
 * Return: always 0
 */

int main(argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
}
