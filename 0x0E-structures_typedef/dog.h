#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct ALX
 */

/**
 * dog_t - new dog name
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
