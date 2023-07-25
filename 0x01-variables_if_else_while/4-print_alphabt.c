#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
			ch++;
	}
	putchar('\n');
	return (0);
}
