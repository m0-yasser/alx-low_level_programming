#include <stdio.h>

/**
 *main - p[rint all arguments that's received
 *@argc: number of args
 *@argv: array of args
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc == 0)
	{
		printif("%s\n" argv[i]);
		i--;
	}
	return (0);
}
