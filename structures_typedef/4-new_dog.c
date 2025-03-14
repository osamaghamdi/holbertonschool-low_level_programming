#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - the length of a string
 * @str: string to be measured
 * Return: length of the string
 */

int _strlen(char *str)
{
int i = 0;

while (*str++)
i++;
return (i);
}

/**
 * _strcopy - string pointed to src
 * @dest: buffer
 * @src: source string
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
int i = 0;

for (i = 0; src[i]; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);
}

/**
 * new_dog - new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);

return (dog);
}
