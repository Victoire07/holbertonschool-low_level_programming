#include "dog.h"

/**
 * init_dog - fonction qui initialise une variable de type struct dog
 * @d: Pointeur vers la structure `dog` a initialiser
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Nom du proprietaire
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
