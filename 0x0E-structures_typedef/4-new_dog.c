#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - start
  * @s: check
  * Return: 0 success
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
  * _strcopy - start
  * @dst: ptr
  * @sc: string to copy
  * Return: ptr
*/

char *_strcopy(char *dst, char *sc)
{
	int b, c;

	b = 0;
	while (sc[b] != '\0')
	{
		b++;
	}
	for (c = 0; c < b; c++)
	{
		dst[c] = sc[c];
	}
	dst[c] = '\0';
	return (dst);
}

/**
  * new_dog - start
  * @name: name dog
  * @age: how old
  * @owner: who owns it
  * Return: ptr else NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int d, e;
	dog_t *dog;

	d = _strlen(name);
	e = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (d + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (e + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
