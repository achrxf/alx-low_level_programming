#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * struct dog - dog defining
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
