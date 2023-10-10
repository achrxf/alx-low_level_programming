#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog defining
 * @name: char
 * @age: float
 * @owner: char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog defining
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
