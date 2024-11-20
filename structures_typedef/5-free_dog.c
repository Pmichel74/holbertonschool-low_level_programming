#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: free the structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d); //libere memoire de la structure, on doit tout liberer pour eviter fuite de memoire
}
