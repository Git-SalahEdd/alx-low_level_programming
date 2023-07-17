#include <stdlib.h>
#include "dog.h"

/**
 *_strlen - count the length of a string
 *@s: parameter
 *Return: the lenth
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
**_strcpy - copies the string from src to dest
*@src: input string
*@dest: output string
*Return: the final output string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - poppy's friend
 * @name: new dog
 * @age: age of new dog in float
 * @owner: owner of new dog
 * Return: a pointer function value to the main function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
