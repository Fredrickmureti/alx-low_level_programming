#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - start
  * @d: struct
  * @name: name of dog
  * @age: years
  * @owner: who owns it
  * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
