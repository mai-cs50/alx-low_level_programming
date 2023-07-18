#include "dog.h"
/**
 * init_dog - a dog struct
 *
 * @d: init
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: void
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
