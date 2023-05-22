#include "dog.h"

/**
 * _strlen - string length
 *@s: arg
 *Return: string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - copy an array
 * @str: arg
 *Return: allocated array
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *dest;

	if (!str)
		return (NULL);
	len = _strlen(str);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * init_dog - init dog struct
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner)
		return;
	d->age = age;
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		d->owner = NULL;
		return;
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		d->name = NULL;
		return;
	}
}
