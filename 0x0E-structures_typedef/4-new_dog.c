#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->name = name;
	t->owner = owner;
	t->age = age;
	return (t);
}
