#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: ptr to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i1, j1, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i1 = 0; name[i1]; i1++)
		;
	i1++;
	dog->name = malloc(sizeof(char) * i1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
		}
	for (k = 0; k < i1; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j1 = 0; owner[j1]; j1++)
		;
	j1++;
	dog->owner = malloc(sizeof(char) * j1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j1; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
