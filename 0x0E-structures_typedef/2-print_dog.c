#include "dog.h"

/**
 * print_dog - print dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
