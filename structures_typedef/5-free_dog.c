#include "dog.h"

/**
 * free_dog - fonction qui libere les chiens
 * @d: structure a liberer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
