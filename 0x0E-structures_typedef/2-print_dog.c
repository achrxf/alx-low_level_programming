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
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
