#include "dog.h"

/**
 * print_dog - print dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	if (!d->owner)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
