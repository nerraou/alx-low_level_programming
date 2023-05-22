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
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t type pr NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
		return (NULL);
	if (!name || !owner)
		return (NULL);
	my_dog->age = age;
	my_dog->name = _strdup(name);
	if (!my_dog)
		return (NULL);
	my_dog->owner = _strdup(owner);
	if (!my_dog->owner)
	{
		free(my_dog->name);
		my_dog->name = NULL;
		return (NULL);
	}
	return (my_dog);
}
