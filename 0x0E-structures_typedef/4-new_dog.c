#include <stdlib.h>
#include "dog.h"

int  _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - str length
 * @str: string pointer
 * Return: a string length
 */

int  _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{i++; }
	return (i);
}

/**
 * _strcpy - string copy
 * @dest: dest
 * @src: src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
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
	dog_t *dog;
	int name_len;
	int owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);
	if (age <= 0)
	{
		age = 1;
	}
	if (age > 0)
	{
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	}
	return (dog);
}
