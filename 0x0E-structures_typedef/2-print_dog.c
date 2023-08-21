#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
