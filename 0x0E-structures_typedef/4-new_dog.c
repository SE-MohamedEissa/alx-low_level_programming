#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog;s owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, s1 = 0, s2 = 0;

	d = malloc(sizeof(*d));
	if (!d || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	while (name[s1])
		s1++;
	while (owner[s2])
		s2++;
	d->name = malloc(s1 + 1);
	d->owner = malloc(s2 + 1);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i < s1; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (i = 0; i < s2; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}
