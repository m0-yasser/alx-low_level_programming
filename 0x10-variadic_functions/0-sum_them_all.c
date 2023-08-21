#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - return summ of
 *all parameters
 *@n: num of parameters
 *Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int i;
    va_start(args, n);
    unsigned int add;
    for (i = 0; i < n; i++)
    {
        add += va_arg(args, int);

    }

    va_end(args);

    return(add);
}
