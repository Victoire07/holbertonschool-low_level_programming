#include "dog.h"

/**
 * print_dog - fonction qui imprime une structure dog
 * @d: Pointeur vers la structure `dog` a afficher
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
