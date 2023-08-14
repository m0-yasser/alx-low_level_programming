#include <stdio.h>

/**
 *main - print num of args
 *@argc: number of args
 *@argv: array of args
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	pritf("%d\n", argc - 1);
	return (0);
}
