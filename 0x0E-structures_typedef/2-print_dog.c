#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog.
 * struct dog - dog defining
 * @d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
}
