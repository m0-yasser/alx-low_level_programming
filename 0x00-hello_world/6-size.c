#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int :%u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a floar: %u byte(s)\n", sizeof(float));
	return (0);
}
