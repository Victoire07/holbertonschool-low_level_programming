#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure qui va definir des informations sur le chien
 * @name: le nom du chien
 * @age: l'age du chien
 * @owner: le proprietaire du chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
