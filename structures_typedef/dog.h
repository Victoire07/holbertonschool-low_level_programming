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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
