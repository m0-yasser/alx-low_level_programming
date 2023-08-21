#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator:  string to be printed between numbers
 * @n: arguments number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL)
		{
			if (i < n - 1)
			{
			printf("%s ", separator);

			}

		}

	}
	printf("\n");
	va_end(args);
}
