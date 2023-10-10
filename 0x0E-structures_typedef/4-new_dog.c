#include <stdlib.h>
#include "dog.h"

int _strlen(const char *len);
char *_strcopy(char *x, char *y);

/**
 * new_dog - a function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);
	return (d);
}

/**
 * _strlen - length of string.
 * @len: char
 * Return: 0
*/

int _strlen(const char *len)
{
	int i = 0;

	while (*len++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcopy - a function that returns x with a copy of a string from y.
 * @x: char
 * @y: char
 * Return: 0
*/

char *_strcopy(char *x, char *y)
{
	int i;

	for (i = 0; y[i]; i++)
	{
		x[i] = y[i];
	}
	x[i] = '\0';

	return (x);
}
